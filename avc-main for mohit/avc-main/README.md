# ENGR 101 Project 3

## Autonomous Vehicle Challenge

### Roles:
- Hardware : working on the physical design of the robot/vehicle and building. 
- Software Architect : writing up the psuedo-code.
- Coder : writing up the actual code.
- Tester : testing the robot/vehicle once the code has been finished & giving feedback to the group.

### Team Members:
| Team Member Name | Email | Instagram Handle | Role |
| ------ | ------ | ------ | ------ |
| Fatimai Lefale | lefalefati@myvuw.ac.nz | @fatimailefale | Software |
| Trinisha Patel | pateltrin@myvuw.ac.nz | trinisha.patel | Tester/Hardware |
| Daniel Gaunt | gauntdani@myvuw.ac.nz | daniel.gaunt | Hardware |
| Nerjuan Piratheepan | pirathneru@myvuw.ac.nz | nerujan.piratheepan | Coder |
| Conan Strachan | strachcona@myvuw.ac.nz | conanstrachan | Coder |
| Mohit Rana | ranamohi@myvuw.ac.nz | rana.mohit47 | Hardware |

### Mini teams: 
| Team Member Names | Team Assignment Name |
| ------ | ------ |
| Conan, Nerjuan, Fatimai | CARC | 
| Daniel, Trinisha, Mohit | HRW | 
 
### General Software Design
The code is divided by quadrant. Each quadrant has a specific function or set of functions for the course that the bot takes:
- Quadrant 1: Connects to the WiFi using E101 library functions and opens gate/follows line.
- Quadrant 2: Uses pixel sampling to detect a black line and applies PID control for steering.
- Quadrant 3: Detects intersections using line breaks and selects a turn strategy.
- Quadrant 4: Uses pixel color detection (red) to navigate towards the red cylinder.

Main loop will check for which quadrant the robot is in and call the appropriate logic function.

### Key Deadlines
| Name of Project Component Due | Due date |
| ------ | ------ | 
| AVC Plan | 12/05/25 |
| AVC Progress Report | 19/05/25 |
| AVC Robot Testing | 29/05/25 |
| Final Report | 12/06/25 |

# Roadmap
Plan will be marked based on how detailed the roadmap is.
Progress report will be marked on how closely roadmap was followed to the date.

# Project Plan Roadmap (3.5%) 1/05-12/05
| Start Date | Task Description | Team Member OR Mini Team Name | End Date | Description | Outcome|
| ------ | ------ | ------ | ------ |------|------|
|1/05/25|Assign Roles|Everyone|1/05/25|Assign Lab Roles to each member|Completed Role Assignment|
|1/05/25|Roadmap|Fatimai|10/05/25|Task set up for concisive deadlines|Roadmap completion|
|5/05/25|Pseudocode|CARC|8/05/25|Drafted base for code to be created|Quad 1 |
|6/05/25|Concept/Prototype for Bot|HRW|8/05/25|Made a prototype/concept for bot starting.|Bot prototype made and uploaded picture progression to AVC Project Doc|
|6/05/25|Project Plan|Fatimai|12/05/25|Working on until Project plan quadrant description|Completed!|
|8/05/25|Project Plan Review with Team|Everyone|8/05/25|Meet up to review in Lab B|Reviewed.|

# Progress Report (2.5% Team Mark) 1/05-19/05
| Start Date | Task Description | Team Member OR Mini Team Name | End Date | Description | Outcome|
| ------ | ------ | ------ | ------ |------|------|
|13/05/25|Update Roadmap|Fatimai|13/05/25|Ensure the roadmap is still on track|outcome|
|13/05/25|Git Updated|Everyone|13/05/25|Check that GitLab is fully up to date with required code/outlines|outcome|
|15/05/25|Progress Meeting|Everyone|15/05/25|Review all completed tasks so far|outcome|
|18/05/25|Finalize Progress Report|Everyone|19/05/25|Final checks and review of the report before submission|outcome|

# Robot testing (10%) 1/05-29/05

## Code Progression
| Start Date | Task Description | CARC Member | End Date | Description | Outcome|
|------------|------------------|-------------|----------|-------------|--------|
|6/05/25|Quad 1: Open Gate Code|All|8/05/25|Convert Pseudo to connect to gate through server|Completed open gate, pseudo committed to Git.|
|8/05/25|Test 1.1: Server Connection|All|9/05/25|Verify robot can send/receive simple commands to server|Completed and tested server connection!|
|8/05/25|Test 1.2: Gate Trigger|All|8/05/25|Test if correct signal opens gate in isolation|Completed trigger to gate and tested.|
|8/05/25|Test 1.3: Wheel Movement|All |13/05/25|Test movement commands|Test correction done and motor movement completed|
|13/05/25|Quad 2: Follow curved line|All|15/05/25|Pseudo to follow first quad instructions|outcome|
|13/05/25|Test 2.1: Line Sensor Calibration|All|15/05/25|Adjust thresholds for line detection|outcome|
|13/05/25|Test 2.2: Curve Tracking Unit Test|All|15/05/25|Run short section of curved line only|outcome|
|19/05/25|Quad 3: Intersections Code|Nerjuan|22/05/25|Implement selections to turn code from Pseudo|outcome|
|19/05/25|Test 3.1: Intersection Recognition|Nerjuanll|22/05/25|Test ability to detect different intersection types|outcome|
|19/05/25|Test 3.2: Turn Decision Logic|Nerjuan|22/05/25|Simulate fork and test turn decisions|outcome|
|22/05/25|Quad 4: Picture for root to move to Red cylinder|Conan|29/05/25|Finishing|outcome|
|22/05/25|Test 4.1: Image Recognition Targeting|Conan|27/05/25|Confirm picture triggers move to correct object|outcome|
|22/05/25|Test 4.2: Red Cylinder Navigation|Conan|27/05/25|Practice movement to cylinder after trigger|outcome|

## Hardware Progression 
| Start Date | Task Description | HRW Member | End Date | Description | Outcome|
| ------ | ------ | ------ | ------ |------|------|
|6/05/25|Prototype Design|All|8/05/25|Create the first prototype bot, produce plan and improvements to be made as bot progresses.|Weight distribution tested and base prototype made. Blender used to create weight object for balancing model. Improvements to bot design suggested and uploaded to Doc.|
|12/05/25|Prototype Test|All|15/05/25|Test movement of bot prototype. Record the results and any issues. Make adjustments and modifications to design while testing.|13/05 - Tested the prototype robot. When testing the movement, we discovered one of the motors for the wheels had a faulty connector and would not work, so it was replaced with a functioning motor. The prototype also had trouble staying balanced due to the wheels not having anything to balance with. The prototype base was also too small for the battery to fit into.|
|12/05/25|3D Print: Weight Distributor|Mohit|12/05/25|Print out 3D Model made on 8/05 for addition to bot prototype.|13/05 - Successfully printed and installed the marble caster weight distributor to the robot, allowing it to stay balanced.|
|13/05/25|v2 Design|All|15/05/25|Design and create second version of bot using the results from the prototype.|15/05 - Built a second version of the robot based on results from the Prototype test. Used better quality materials for the base of the robot and modified the size to accomodate both the raspberry pi and battery. Also installed the camera which is connected to a motor at the front of the robot. Will test the movement of both the robot and camera next lab session.|
|15/05/25|v2 Test|All|20/05/25|Test second version of bot on course. Record all results and issues from the test.|outcome|
|20/05/25|v3 Design|All|22/05/25|Update design of bot using results from v2 test.|outcome|
|22/05/25|v3 Test|All|27/05/25|Test third version of bot on course. Record all results and issues from the test.|outcome|
|27/05/25|Final Design|All|29/05/25|Develop final design of bot using results from v3 test.|outcome|

## Intermediate Tasks Between Testing Phases
| Start Date | Task Description | Team Member(s) | End Date | Description | Outcome |
|------------|------------------|----------------|----------|-------------|---------|
|13/05/25|Checkpoint Code Review|CARC|13/05/25|Review and debug Quad 1 functionality together|outcome|
|15/05/25|Checkpoint Code Review|CARC|15/05/25|Review and debug Quad 1&2 functionality together|outcome|
|20/05/25|Mock Run Through (Quads 1–3)|Everyone|20/05/25|Do a run on course to check performance|outcome|
|22/05/25|Bug Hunt + Code Cleanup|CARC|22/05/25|Remove duplicate code, optimize functions, tidy variables|outcome|
|27/05/25|Run Full Course Test|Everyone|27/05/25|Run robot through full AVC course with logging|outcome|
|27/05/25|Emergency Fixes|Everyone|28/05/25|outcome|

## Final Report Tasks (15% Individual Mark) 30/05-12/06
| Start Date | Task Description | Team Member(s) | End Date | Description | Outcome |
|------------|------------------|----------------|----------|-------------|---------|
|30/05/25|Begin Report Drafting|Everyone|3/06/25|Each team member begins drafting sections based on role|outcome|
|3/06/25|Technical Content Writing|Everyone|6/06/25|Write software and code-related sections with figures and descriptions|outcome|
|3/06/25|Hardware Description & Diagrams|Everyone|6/06/25|Document hardware setup, design iterations, and testing outcomes|outcome|
|6/06/25|Final Edits & Formatting|Everyone|9/06/25|Check formatting, references, and tidy report for submission|outcome|
|10/06/25|Submit Final Report|Everyone|12/06/25|Submit individual reports via course platform|outcome|
