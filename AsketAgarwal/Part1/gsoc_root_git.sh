#!/bin/bash
# shell script for exercise_Gsoc root git project

echo 'Starting script....'
mkdir gsoc_root
cd gsoc_root
git init
echo 'Git Rocks' > file1.txt
echo 'Root Rocks' > file2.txt

# hashing the file objects
git hash-object -w file1.txt
git hash-object -w file2.txt

# adding to staging
git update-index --add *
# writing tree for folder tree
sha_test=$(git write-tree)
git update-index --force-remove *

# reading 'test' tree into the commit tree
git read-tree --prefix=test $sha_test

# writing tree for the commit
sha_commit_tree=$(git write-tree)

# creating commit object
sha_commit_object=$(echo 'first commit' | git commit-tree $sha_commit_tree)
echo 'A commit has been created'
echo $(git cat-file -p $sha_commit_object)

