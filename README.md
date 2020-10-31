# Computer Architecture. Labwork No. 3

The aim of the labwork is to write a script, which defines a list of input program arguments

For instance, let's we have the following command:

```./lab3 -h --help -l -fv ```

So, the output is:

```
 Argument #1: Help
 Argument #2: List
 Argument #3: Forse
 Argument #4: Verbose
```

Other example, the input row is:
```./lab3 --value=90 -l1,2,3 -V100```


So, the output is:

```
 Argument #1: Value = 90
 Argument #2: List = 1,2,3
```

The supported list of short/long commands:

| Command | Short definition | Long definition | Has parameter 
|--       |--                |--               | --            
| Help    | -h               | --help          | no parameter
| Forse   | -f               | --force         | no parameter
| List    | -l               | --list          | optional parameter
| Value   | -V               | --value         | optional parameter
| Verbose | -v               | --verbose       | no parameter
