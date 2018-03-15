# Goal of the exercise

This is a little exercise to evaluate candidates suitability for the GSoC project about integrating ROOT files in the git object store.

# Prerequisites:

- Being able to use BASH and linux in general.
- Knowing either C++, python.
- Having Git installed on his own computer

# Actual exercise

Write a simple script which creates a git repository, adds two objects in a folder to the git object store and creates a commit out of it,
without using neither `git-add`, nor `git-commit`. The two objects should contain the following sentences:

```
Git rocks
```

```
Root rocks
```

and should be put in a folder called `test`.

In order to be able to do so, you probably want to have a look at `https://git-scm.com/book/id/v2/Git-Internals-Git-Objects` to learn more
about git object model.
