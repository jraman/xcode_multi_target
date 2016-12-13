
## Description
In this project, three targets were created - each results in a binary.
Each target depends on a common file shared_stuff.cpp.


## Steps:
 * Create a new project.
   - Open Xcode
   - File > New > Project.  Choose macOS > command-line tool.
     NB: the binary will take the name of the project.
     Hence you may want to avoid spaces in the name.
   - This also creates a (default) target having the same
     name as the Product Name
 * Create another target.  This will result in another binary.
 * The two targets need to be built separately.
 * Each target gets its own (default) Scheme.
 * Create a new Group.  Right click on the project and New > Group.
 * Name the new group.
 * Add a file to the new group.  Right click on the group and New > File.
   Pick the type of file (C++).  In the next window type in the name of the
   file (without the cpp extension).  Check the box for creating a .hpp file.
 * In the next window,
   - Choose the location of the shared file(s)
   - Check the targets that will depend on it.
 * You will notice that in the setting window of the project > Build Phases,
   Compile Sources will have two items:
   main.cpp and shared_stuff.cpp.
