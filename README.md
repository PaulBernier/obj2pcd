obj2pcd
=======

Very basic converter from .obj file to .pcd file (and reverse).

``` bash
$ ./obj2pcd
obj2pcd [options] [.pcd or .obj file]

Options:
  -h       Print this help
```

Example for .obj to .pcd:

```bash
$ ./obj2pcd file.obj
Converting file.obj -> file.pcd
Done.

$ ./obj2pcd file.obj output.pcd
Converting file.obj -> output.pcd
Done.
```

Example for .pcd to .obj:

```bash
$ ./obj2pcd file.pcd
Converting file.pcd -> file.obj
Done.

$ ./obj2pcd file.pcd output.obj
Converting file.pcd -> output.obj
Done.
```
