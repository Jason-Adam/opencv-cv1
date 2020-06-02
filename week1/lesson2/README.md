# Running the code  
You can run the code in the main folder by executing the shell script `runProgram.sh` from this directory:  

```bash  
sh runProgram.sh
```  

# Clangd Setup  
Run the following command in this folder to create a `compile_commands.json` file. This will enable code completion and intellisense for external libraries (opencv in this case):  

```bash  
cmake -D CMAKE_EXPORT_COMPILE_COMMANDS=1
```  

The resulting file should look something like this:  

```json  
[
  {
    "directory": "/Users/jasonadam/github/opencv-cv1/week1/lesson2",
    "command": "/Library/Developer/CommandLineTools/usr/bin/c++   -isystem /usr/local/Cellar/opencv/4.3.0_2/include/opencv4   -isysroot /Library/Developer/CommandLineTools/SDKs/MacOSX10.15.sdk   -std=gnu++17 -o CMakeFiles/lesson2.dir/main/basic-image-operations.cpp.o -c /Users/jasonadam/github/opencv-cv1/week1/lesson2/main/basic-image-operations.cpp",
    "file": "/Users/jasonadam/github/opencv-cv1/week1/lesson2/main/basic-image-operations.cpp"
  }
]
```

# Lesson 2 - Basic Image Operations
* Create new images  
* Cropping an image section  
* Copying a region to another  
* Creating an image mask  
