# JetBrains Rider Install

### Creating the project

To Install the BR-SDK, first create a new solution and project using the **native c++** project template and the **Dynamic Library** project type.

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

### Adding the Include directory to Rider

**Repeat the following steps for the x64 Release and x64 Debug build options.** Do not try to compile in 32 Bit mode(Win32/x86).

Open up your Rider project and **Right Click** the project and then open **properties**, from there open the **C/C++** tab and navigate to additional include directories.

**Add** the following text: ``;$(SolutionDir)Include`` to the end of the current configuration, being carefull not to delete the prexisting configuration. If there is **no prexisting configuration**, add this line instead: ``$(SolutionDir)Include``


## Configuring the project

**Repeat the following steps for the x64 Release and x64 Debug build options.** Do not try to compile in 32 Bit mode(Win32/x86).
    
- C++ Language Standard to ISO C++ 20
- C Langauge Standard to ISO C17

### Using BR-SDK

Thats all for the installation. Click the following link to learn how to use BR-SDK to create mods.

[How to use BR-SDK](https://github.com/tubaplayerdis/BR-SDK/blob/main/UsingBRSDK.MD)

