% Facts about plants
is_plant(rose).
is_plant(oak_tree).
is_plant(cactus).
is_plant(sunflower).
is_plant(pine_tree).
is_plant(tulip).
is_plant(fern).

has_leaves(rose).
has_leaves(oak_tree).
has_leaves(sunflower).
has_leaves(pine_tree).
has_leaves(tulip).
has_leaves(fern).

is_flowering_plant(rose).
is_flowering_plant(sunflower).
is_flowering_plant(tulip).

is_tree(oak_tree).
is_tree(pine_tree).

is_cactus(cactus).

% Rules about plant classifications
is_tree(X) :- is_plant(X), not(is_cactus(X)).
is_non_flowering_plant(X) :- is_plant(X), not(is_flowering_plant(X)).

% Additional information
is_poisonous(fern).
is_poisonous(cactus).
