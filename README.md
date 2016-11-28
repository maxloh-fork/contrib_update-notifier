Update Notifier application
===========================

This project contains two utilities:

 - `checker`: CLI application that downloads update descriptor and writes it to `FOLDERID_LocalAppData` directory
 - `notifier`: GUI application that reads update descriptor and displays its contents as a System Notification

How to build
------------

On `windows_x86_64`:

    git clone --recursive https://github.com/ojdkbuild/ojdkbuild.git
    cd ojdkbuild
    devshell.bat
    mkdir build
    cd build
    cmake ../src/java-1.8.0-openjdk
    nmake update_notifier_dist

On `linux_x86_64` (CentOS/Fedora, `checker`-only build):

    sudo yum install git cmake libcurl-devel popt-devel jansson-devel gcc-c++ make
    mkdir .config
    git clone https://github.com/ojdkbuild/contrib_update-notifier.git
    cd contrib_update-notifier/
    mkdir build
    cd build/
    cmake ../resources/linux_cmake/
    make 

License information
-------------------

This project is released under the [Apache License 2.0](http://www.apache.org/licenses/LICENSE-2.0).

Changelog
---------

**2016-11-20**

 * initial public version
