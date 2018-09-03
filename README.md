# stopping_converge
Check if the optimization algorithm converges, converge at a certain amount, or the target function does not worsen to a certain degree.

see [hcnn.de](http://hcnn.de/docs/stopping_converge) for further information.

### Installation
```
clib install hcnn/stopping_converge
```

Or add to your `package.json` and run `clib install`

```
{ ...
    "dependencies": {
        "hcnn/stopping_converge": "0.1.0"
        ...
```

### Example
See [test.c](https://github.com/hcnn/stopping_converge/blob/master/test.c)

Download, compile, and run test.c

```
git clone git@github.com:hcnn/stopping_converge.git
cd stopping_converge
make
```

### Explanations
Further explanations in [README.ipynb](README.ipynb)
