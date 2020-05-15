# bitfetch - simple cli system information tool written in C

```shell
    $ make help                     # show help
    $ make CC=clang bitfetch        # build bitfetch using clang as a C compiler
    $ sudo make install             # install bitfetch to /usr/local/bin (build it before installing)
    $ make bitfetch XINERAMA=NO     # build bitfetch without Xinerama (multimonitor) support
    $ make bitfetch X=NO            # build bitfetch without X support
    $ make bitfetch PKG=NO          # bitfetch won't show number of installed packages
    $ make bitfetch SWAP=NO         # bitfetch won't show swap info
```

```shell
    $ bitfetch -h # view help message
```

# For CRUX, Artix and other distro without /etc/os-release file users

```shell
    # because of youre distro doesn't have /etc/os-release file you need to manually specify youre distro ID
    # artix for Artix linux
    # crux for CRUX linux
    $ make bitfetch ID=crux
    $ make bitfetch ID=artix
    $ make bitfetch ID=asd # if you provide not supported ID bitfetch will be build with generic logo.
```


# ATTENTION

if you wanna create an issue for me to add your distro support please paste `cat /etc/os-release` output.

![screenshot](./bitfetch.png)

# Logo sources:
+ [ufetch](https://gitlab.com/jschx/ufetch)
