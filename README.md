
## Description
An Xcode project to demonstrate use of common files in multiple targets.

In this Xcode project, three targets were created - each results in a binary.
Each target depends on a common file `shared_stuff.cpp`.
The project is named `multi_target`.

The three targets are:
 * `multi_target` (same name as the project)
 * `target1`
 * `target2`

`shared_stuff.{cpp,hpp}` are created after `multi_target` and `target1` are created.

`target2` is created after `shared_stuff` is created.


## Create targets multi_target and target1.
 * Create a new project.
   - Open Xcode
   - File > New > Project.  Choose macOS > command-line tool.
     NB: the binary will take the name of the project.
     Hence you may want to avoid spaces in the name.
   - This also creates a (default) target having the same
     name as the Product Name
 * Create another target named `target1`.  File > New > Target.  This will result in another binary.
 * The two targets need to be built separately.
 * Each target gets its own (default) Scheme.

## shared_stuff
 * Create a new Group.  Right click on the project and New > Group.
 * Name the new group.
 * Add a file to the new group.  Right click on the group and New > File.
   Pick the type of file (C++).  In the next window type in the name of the
   file (without the cpp extension).  Check the box for creating a .hpp file.
 * In the next window,
   - Choose the location of the shared file(s)
   - Check the targets that will depend on it.  In this case, check both
     `multi_target` and `target1`.
 * You will notice that in the setting window of the project > Build Phases,
   Compile Sources will have two items:
   main.cpp and shared_stuff.cpp.

## target2
 * Create a new target named `target2` following the same method as for `target1`.
 * Click on shared_stuff.cpp and in the right (File Inspector) pane, in
   Target Membership, click on `target2`.
 * Now, if you go to the project settings, select `target2` as the target and go to
   Build Phases > Compile Sources, you should see `shared_stuff.cpp` listed there.
