#!/bin/bash

git add .
git status
echo "Enter commit message"
read commit
git commit -m "$commit"
git push