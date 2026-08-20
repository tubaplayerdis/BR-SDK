# Visual Studio Install

### Creating the project

To Install the BR-SDK, first create a new solution and project using the **Dynamic Link Library** project template.

### Installing files

First, go  the [BR-SDK GitHub](https://github.com/tubaplayerdis/BR-SDK) and **download** the latest release's `BR-SDK_FULL.zip`. There should be an `Include` folder and a `Lib` folder

Next, go to the same folder where your **solution file** (.sln) is located for your project and **create** a folder named `Include`.

add the picture

Next, navigate into the Include folder and extract the `Include` folder from BR-SDK.zip into the `Include` **folder in your solution**. Rename the BR-SDK-main to BR-SDK

Your Include directory should look like this:

```
Include/
    BR-SDK/
        Hooking/
        SDK/
        BR-SDK.hpp
        Utils.hpp
```

### Adding the Include directory to Visual Studio

**Repeat the following steps for the x64 Release and x64 Debug build options.** Do not try to compile in 32 Bit mode(Win32/x86).

Open up your Visual Studio project and **Right Click** the project and then open **properties**, from there open the **C/C++** tab and navigate to **Additional Include Directories**.

**Add** the following text: ``;$(SolutionDir)Include`` to the end of the current configuration, being carefull not to delete the prexisting configuration. If there is **no prexisting configuration**, add this line instead: ``$(SolutionDir)Include``

### Linking the BR-SDK

First, create a folder in your solution directory (not a solution folder) called Lib.

Next, extract `BR-SDK_Debug.lib` and `BR-SDK_Release.lib` from the zip file's `Lib` folder into your projects `Lib` folder.

**Repeat the following steps for the x64 Release and x64 Debug build options with the appropriate suffixes on the .lib binaries**

Next, go to your project settings and under Linker -> General -> Additional Library Directories add the following line: `$(SolutionDir)Lib`. Remember to include a `;` before the `$`, if there are already items populating the list.

**For the next step, change _Debug to _Release depending on which configuration setting you are changing**

After that, go to Linker -> Input -> Additional Dependencies and add `BR-SDK_Debug.lib` to the entires, adding a `;` before `BR-SDK_Debug.lib`, if there are already items populating the list.

## Configuring the project

#### Repeat the following steps for the x64 Release and x64 Debug build options. Do not try to compile in 32 Bit mode(Win32/x86).
    
Navigate to the general configuration tab then change the following settings:

- C++ Language Standard to ISO C++ 20
- C Langauge Standard to ISO C17

### Testing

Run a build of your project to make sure everything is working correctly.

#### Linker Errors

Linker errors may arise through that the binaries for BR-SDK are not linked properly. Please make sure they are linked correctly.

### Using BR-SDK

Thats all for the installation specifics in relation to Visual Studio. Click the following link to learn how to use BR-SDK to create mods.

[How to use BR-SDK](https://github.com/tubaplayerdis/BR-SDK/blob/main/UsingBRSDK.MD)

