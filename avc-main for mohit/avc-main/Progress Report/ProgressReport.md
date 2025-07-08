# ENGR 101 Project 3: Progress Report

### Mini teams: 
| Team Member Names | Team Assignment Name |
| ------ | ------ |
| Conan, Nerjuan, Fatimai | CARC | 
| Daniel, Trinisha, Mohit | HRW | 

# Project Plan Roadmap (3.5%) 1/05-12/05
| Start Date | Task Description | Team Member OR Mini Team Name | End Date | Description | Outcome | Actual progress as per 19 of May |
| ------ | ------ | ------ | ------ |------|------|------|
|1/05/25|Assign Roles|Everyone|1/05/25|Assign Lab Roles to each member| Completed | Every person on the team was accounted for and assigned roles, as well as distributed into smaller subteams |
|1/05/25|Roadmap|Fatimai|10/05/25|Task set up for concisive deadlines| Completed | All tasks were recorded and filled with dates on to roadmap on GitLab. Team has been progressively using this to update eachother on progress as well as communicated this through group chat. |
|5/05/25|Pseudocode|CARC|8/05/25|Drafted base for code to be created| Partial Completion | Quad 1/2 filled but working towards stratergy for Quad 3&4 |
|6/05/25|Concept/Prototype for Bot|HRW|8/05/25|Made a prototype/concept for bot starting.| Completed | Bot prototype made and uploaded picture progression to AVC Project Doc |
|6/05/25|Project Plan|Fatimai|12/05/25|Working on until Project plan quadrant description|Completed | Turned in with each section filled. |
|8/05/25|Project Plan Review with Team|Everyone|8/05/25|Meet up to review in Lab B| Completed | Reviewed and updated with more concisive tasks. |

# Progress Report (2.5% Team Mark) 1/05-19/05
| Start Date | Task Description | Team Member OR Mini Team Name | End Date | Description | Outcome | Actual progress as per 19 of May |
| ------ | ------ | ------ | ------ |------|------|------|
|13/05/25|Update Roadmap|Fatimai|13/05/25|Ensure the roadmap is still on track|Completed| Roadmap reviewed and aligned with actual progress|
|13/05/25|Git Updated|Everyone|13/05/25|Check that GitLab is fully up to date with required code/outlines|Completed| GitLab up to date with latest Quadrant code |
|15/05/25|Progress Meeting|Everyone|15/05/25|Review all completed tasks so far|Completed| Discussed in Lab B, team on good track and both sub-teams are aware of deadlines and progress|
|18/05/25|Finalize Progress Report|Everyone|19/05/25|Final checks and review of the report before submission|In Progress| Scheduled for completion on 19/05 but group review to be done before 23/05 submission date |

# Robot testing (10%) 1/05-29/05

## Code Progression
| Start Date | Task Description | CARC Member  | End Date | Description | Outcome | Actual progress as per 19 of May |
| ------ | ------ | ------ | ------ |------|------|------|
|6/05/25|Quad 1: Open Gate Code|All|8/05/25|Convert Pseudo to connect to gate through server|Completed|All team members worked on testing for gate function. After debugging a successful attempt to opne the gate was completed. Pseudo to code was successfully completed and committed to Git.|
|8/05/25|Test 1.1: Server Connection|All|9/05/25|Verify robot can send/receive simple commands to server|Completed|Alongside Gate code implementation, server connection after debug was successful and tested multiple times.|
|8/05/25|Test 1.2: Gate Trigger|All|8/05/25|Test if correct signal opens gate in isolation|Completed| Completed trigger to gate and tested.|
|8/05/25|Test 1.3: Wheel Movement|All |13/05/25|Test movement commands|Completed| After debugging the hardware issue between motors the test for wheel movement was successfully done and ports to be used in future reference to motors were successfully decided on as 1 and 5.|
|13/05/25|Quad 2: Follow curved line|All|15/05/25|Pseudo to follow first quad instructions| Completed | Code drafted and uploaded different versions. Testing to be done next session|
|13/05/25|Test 2.1: Line Sensor Calibration|Conan|15/05/25|Adjust thresholds for line detection|In Progress| At current time sensor setup is underway as the team prepares for a full test, discussion of paths to implement have been made but code is still in progress|
|13/05/25|Test 2.2: Curve Tracking Unit Test|Conan|15/05/25|Run short section of curved line only|In Progress| Awaiting time to test with full bot design completed on hardware end. Testing should be done on 20/05 |

## Hardware Progression 
| Start Date | Task Description | HRW Member | End Date | Description | Outcome| Actual progress as per 19 of May |
| ------ | ------ | ------ | ------ |------|------|------|
|6/05/25|Prototype Design|All|8/05/25|Create the first prototype bot, produce plan and improvements to be made as bot progresses.|Completed | Weight distribution tested and base prototype made. Blender used to create weight object for balancing model. Improvements to bot design suggested and uploaded to Doc.|
|12/05/25|Prototype Test|All|15/05/25|Test movement of bot prototype. Record the results and any issues. Make adjustments and modifications to design while testing.|Completed | Tested the prototype robot. When testing the movement, we discovered one of the motors for the wheels had a faulty connector and would not work, so it was replaced with a functioning motor. The prototype also had trouble staying balanced due to the wheels not having anything to balance with. The prototype base was also too small for the battery to fit into.|
|12/05/25|3D Print: Weight Distributor|Mohit|12/05/25|Print out 3D Model made on 8/05 for addition to bot prototype.|Completed | Successfully printed and installed the marble caster weight distributor to the robot, allowing it to stay balanced.|
|13/05/25|v2 Design|All|15/05/25|Design and create second version of bot using the results from the prototype.|Completed | Built a second version of the robot based on results from the Prototype test. Used better quality materials for the base of the robot and modified the size to accomodate both the raspberry pi and battery. Also installed the camera which is connected to a motor at the front of the robot. Will test the movement of both the robot and camera next lab session.|
|15/05/25|v2 Test|All|20/05/25|Test second version of bot on course. Record all results and issues from the test.|In progres | Test to be done on 20/05 Lab! |

## Intermediate Tasks Between Testing Phases
| Start Date | Task Description | Team Member(s) | End Date | Description | Outcome | Actual progress as per 19 of May |
|------------|------------------|----------------|----------|-------------|---------|------|
|13/05/25|Checkpoint Code Review|CARC|13/05/25|Review and debug Quad 1 functionality together| Completed | The team reviewed  the implemented Quadrant 1 code. Through collaborative debugging, testing for gate trigger reliability, and verifying communication with the server, the team found the code functions as intended. The final version was committed to Git, with all members contributing to discussion. |
|15/05/25|Checkpoint Code Review|CARC|15/05/25|Review and debug Quad 1&2 functionality together| Completed | The team discussed and evaluated the three Quadrant 2 code prototypes. Although a final version has not been selected yet, this session allowed for early issue identification and improved overall clarity of direction for Quadrant 2 development. |

# Hardware Team Update
As of 19th May, the team has made great progress in building and refining our bot prototype. Inital design was built on with sketches made and issue fixes continually improved upon over lab time.

Progression in each Lab:
6/05–8/05:
- Prototype created with basic frame and weight tested.
- Blender used to design weight object for weight distrubution.
- Improvements to support added to the doc.
- Bot sketches uploaded to AVC Project Doc with notes for modification.

12/05–13/05:
- Code team found motor fault on wheel and hardware replaced successfully.
- Marble weight distribution object added to bot.
- Improvements recorded and noted for new version design.

13/05–15/05:
- Version 2 of the robot built using better materials.
- Frame resized to properly fit both Raspberry Pi and battery.
- Camera successfully mounted on a motor in front of bot for future testing.

Hardware team is now preparing for course test of the robot in the next lab and will be assisting the code team in future improvements as necessary. Modifications to be made will be recorded on AVC Project plan as team progresses.

# Code Team Update 
As of 19th May, the team has successfully implemented and tested Quadrant 1 and have developed three approaches 
to Quadrant 2 to be launched for testing in the next Lab. 

Progression in each Lab:
6/05-8/05:
- Pesudo was made for First Quadrant.
- The team all debugged and worked on the first Quadrant together.
- Testing was done for Quadrant 1 and successful execution of Gate Trigger was completed. 
- Code on Git. 

13/05-15/05:
- Issue with motors was discovered and fix was made by Hardware team
- Team decided to split and develop prototypes for Quadrant two for comparison by Lab B
- Three prototypes developed and discussed in Lab B
- Testing was done for movement of wheels and success!
- Conan version of Quad 2 Pseudo uploaded. 

All team members have access to iterations of code in Git for ideas/prototypes for further quadrants to be made and group communication remains strong. Discussion for further quadrants has been had but until testing of Quadrant 2 has been put on hold. 

# Overall Review
Team 20's progression has been steady with both code and hardware teams completing key assignments at a good rate. Coordination between the teams remains effective with communication primarily during scheduled lab sessions, through shared documents, group chat communication and Git repositories.
Meetings outside lab hours have been discussed but aren't necessary as long as the team remains on track with the roadmap and is reviewing progress regularly.

Next Steps:
- Begin full testing of v2 robot and complete design.
- Test and evaluate Quadrant 2 code strategies and decide on final implementation.
- Prepare and dicuss execution of further quadrants post Quadrant 2.