# Sample

Lorem ipsum dolor sit amet, consectetur adipiscing elit. 
Nam pretium, nulla in pharetra viverra, lectus urna pharetra enim, id vehicula dolor nunc volutpat lorem. 
Suspendisse dictum porta justo, eu consequat augue venenatis id.

## Prerequisites
You need to install conan, cmake and gcc/Visual Studio 2019, was tested on Windows 10 and Ubuntu 20.04.
 
### Windows 10
In order to compile the binary, you need to install the following:
* [conan](https://conan.io) - Make sure you add it to the path
* [Visual Studio 2019](https://visualstudio.microsoft.com/vs/features/cplusplus) - Make sure you add it to the path
* [cmake](https://cmake.org/download/)

### Ubuntu 20.04
In order to compile the binary, you need to install the following:
* [conan](https://conan.io)
* [build-essential](https://packages.ubuntu.com/focal/build-essential)
* [cmake](https://cmake.org/download/)

You can install build-essential and cmake using:
```bash
sudo apt-get install build-essential cmake -y
```

To install conan you need to download the deb package:
```bash
wget https://dl.bintray.com/conan/installers/conan-ubuntu-64_1_29_0.deb && sudo dpkg -i conan-ubuntu-64_1_29_0.deb
```

## Installation
Use the package manager [conan](https://conan.io) & [cmake](https://cmake.org/download/) to package the binary.

### Windows
```bat
conan profile new default --detect
mkdir build && cd build
conan install ..
cmake .. -G "Visual Studio 16"
cmake --build . --config Release
```

### Unix
```bash
conan profile new default --detect
mkdir build && cd build
conan install ..
cmake .. -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release
cmake --build . --config Release
```

You will find the binary under `build/bin`.

## Usage
The compiled binary is meant to be used in a command line fashion:
``./sample``

Sample output:
```

```

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License
[MIT](https://choosealicense.com/licenses/mit/)