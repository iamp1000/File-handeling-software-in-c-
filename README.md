# C File Operations

Small C file-I/O exercises, with fewer folders named `final_final_v2` than the average desktop.

A small C project for practicing file handling with the standard I/O library (`stdio.h`). It focuses on the basic operations that every program eventually needs to learn before it starts creating folders named `final_final_v2`.

## What it covers

- Creating files
- Opening files for reading or writing
- Updating file contents
- Deleting files

The exact operations and interaction flow are determined by the C source in this repository. This is a learning project, not a replacement for a file manager or a hardened file-processing utility.

## Build and run

A C compiler such as GCC is required. From the repository directory, compile the project's C source file:

```sh
gcc -Wall -Wextra -o file-operations <source-file.c>
./file-operations
```

Replace `<source-file.c>` with the actual source filename in the repository. On Windows, run the resulting executable from PowerShell or Command Prompt.

## Concepts to look for

- File pointers and the `FILE` type
- `fopen`, `fclose`, and stream modes
- Reading and writing text
- Checking return values and handling failures

## A tiny safety note

Deletion and overwrite operations can be destructive. Test with disposable files, validate filenames, and check every file-operation result before treating the operation as successful.

A missing return-value check is how a tiny file operation becomes an unexpectedly long afternoon.
