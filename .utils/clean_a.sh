#!/bin/bash

echo "Deleting a.out files..."
find $(git rev-parse --show-toplevel) -name "a.out" -name ".test" -delete -printf "removed %P\n"