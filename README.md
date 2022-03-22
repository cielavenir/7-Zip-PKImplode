# 7-zip

```
SystemDrive=1 IS_MINGW=1 CC=x86_64-w64-mingw32-gcc CXX=x86_64-w64-mingw32-g++ make -C CPP/7zip/Bundles/Alone -f makefile.gcc -j16
SystemDrive=1 IS_MINGW=1 CC=x86_64-w64-mingw32-gcc CXX=x86_64-w64-mingw32-g++ make -C CPP/7zip/Bundles/Alone2 -f makefile.gcc -j16
SystemDrive=1 IS_MINGW=1 CC=x86_64-w64-mingw32-gcc CXX=x86_64-w64-mingw32-g++ make -C CPP/7zip/Bundles/Alone7z -f makefile.gcc -j16
SystemDrive=1 IS_MINGW=1 CC=x86_64-w64-mingw32-gcc CXX=x86_64-w64-mingw32-g++ make -C CPP/7zip/Bundles/Format7zF -f makefile.gcc -j16
SystemDrive=1 IS_MINGW=1 CC=x86_64-w64-mingw32-gcc CXX=x86_64-w64-mingw32-g++ make -C CPP/7zip/UI/Client7z -f makefile.gcc -j16
SystemDrive=1 IS_MINGW=1 CC=x86_64-w64-mingw32-gcc CXX=x86_64-w64-mingw32-g++ make -C CPP/7zip/UI/Console -f makefile.gcc -j16

SystemDrive=1 IS_MINGW=1 RFLAGS=--target=pe-i386 CC=i686-w64-mingw32-gcc CXX=i686-w64-mingw32-g++ make -C CPP/7zip/Bundles/Format7zF -f makefile.gcc -j16

IS_MINGW=1 CC=x86_64-w64-mingw32-gcc CXX=x86_64-w64-mingw32-g++ make -C C/Util/7z -f makefile.gcc -j16
IS_MINGW=1 CC=x86_64-w64-mingw32-gcc CXX=x86_64-w64-mingw32-g++ make -C C/Util/lzma -f makefile.gcc -j16

SystemDrive=1 IS_MINGW=1 CC=x86_64-w64-mingw32-gcc CXX=x86_64-w64-mingw32-g++ make -C CPP/7zip/Compress/PKImplode/ -f makefile.gcc -j16
SystemDrive=1 IS_MINGW=1 CC=i686-w64-mingw32-gcc CXX=i686-w64-mingw32-g++ make -C CPP/7zip/Compress/PKImplode/ -f makefile.gcc -j16
make -C CPP/7zip/Compress/PKImplode/ -f makefile.gcc -j16
```
