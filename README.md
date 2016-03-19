## bfformatter
A linux program that formats a brainfuck source.

## How to use:

Call bfcleaner.sh using 1 or 2 arguments. The first argument should be the initial brainfuck source. The second should be the destination file of the result. If a 2nd argument is not passed, which is the result location, it will default to `cleaned.bf` in the same directory.

Call bffitter.sh using 2 or 3 arguments. The first argument should be the initial brainfuck source. The second should be the file containing the pattern. If a 3rd argument is not passed, which is the result location, it will default to `fitted.bf` in the same directory. If a pattern is larger than the source code, extra redundant instuctions will be added. (`>`, `+`, `-`) If a pattern is not possible, an error message will appear showing the comparison between the source length and the number of positions in the pattern.

## Patterns:

A pattern is considered a file of characters where `#` is a free position to fit something in.

A special directory with some patterns has been included. 

## Command:
```
./bfcleaner.sh /path/to/source [path/to/result]
```

```
./bffitter.sh /path/to/source /path/to/pattern [path/to/result]
```

## Example:
```
./bfcleaner.sh source.bf result.bf
```

```
./bffitter.sh foo.bf patterns/cross result.bf
```
