# Visual Studio Install

### Creating the project

To Install the BR-SDK, first create a new solution and project using the **Dynamic Link Library** project template.

### Installing files

First, go the the [BR-SDK GitHub](https://github.com/tubaplayerdis/BR-SDK) and **download** the repository. Save the zip file somewhere that will not get deleted.

Next, go to the same folder where your **solution file** (.sln) is located for your project and **create** a folder named **Include**.

add the picture

Next, navigate into the Include folder and extract the BR-SDK.zip from earlier into the Include folder. Rename the BR-SDK-main to BR-SDK

Your Include directory should look like this:

```
Include/
    BR-SDK/
        Helpers/
        SDK/
        SDK.hpp
        Utils.hpp
```

### Adding the Include directory to Visual Studio

#### Repeat the following steps for the x64 Release and x64 Debug build options. Do not try to compile in 32 Bit mode(Win32/x86).

Open up your Visual Studio project and **Right Click** the project and then open **properties**, from there open the **C/C++** tab, then **General** and open **Additional Include Directories** option via the button on the right(needs to be hovered over to click).

**Add** the following text to a blank entry on the dialog box : ``$(SolutionDir)Include``


## Configuring the project

#### Repeat the following steps for the x64 Release and x64 Debug build options. Do not try to compile in 32 Bit mode(Win32/x86).
    
Navigate to the general configuration tab then change the following settings:

- C++ Language Standard to ISO C++ 20
- C Langauge Standard to ISO C17

### Using BR-SDK

Thats all for the installation specifics in relation to Visual Studio. Click the following link to learn how to use BR-SDK to create mods.

[How to use BR-SDK](https://github.com/tubaplayerdis/BR-SDK/blob/main/UsingBRSDK.MD)

