# Micromouse Project - COMP207  

## Overview  
This repository contains all the resources, code, and documentation for my Micromouse project as part of the COMP207 module at Falmouth University (Second Year).  
The goal of the project is to design, build, and program a robot capable of navigating a maze efficiently.  

---

![High-Resolution Render](https://github.com/Luke-Steppens/Algernon-Micro-Mouse/blob/main/CAD/Renders/render%20with%20exhaust.png?raw=true)

---

## Project Goals  

1. **Design and Manufacture**  
   - Create an autonomous Micromouse capable of navigating a maze.  

2. **Documentation**  
   - Utilise tools such as:  
     - **EasyEDA**: PCB design  
     - **Fusion 360**: 3D modeling  
     - **Arduino IDE**: Programming  

3. **Practical Implementation**  
   - Use physical tools and equipment, including:  
     - 3D printers  
     - Laser cutters  
     - Soldering tools  
     - General workshop tools  

---

## Contest Rules  
For detailed guidelines on Micromouse competitions, refer to the official [Micromouse Classic Contest Rules](https://ukmars.org/contests/contest-rules/micromouse-classic/) provided by UKMARS.  

---

## Development Progress  
Track my project progress through the [COMP207 Micromouse Devlog](https://www.notion.so/COMP207-Digital-Prototyping-Logbook-7b87d9ca3a4f4ccf9538969c8f4991d4?pvs=4).  

---

## Repository Contents  
This repository is organized into the following directories:  

- **CAD**  
   - Assemblies
   - Drawings
   - Parts
   - Renders
   - Workshop Materials  

- **Code**  
   - Basic Component Code  
   - ClassCode  
   - Micro-Mouse Algernon  

- **Documentation**  
   - Screenshots & Photos
   - TCRT Test
   - Feedback Form
   - Notion

- **Electronics**
   - Datasheets

- **Media**
   - Video
   - Photo
   - Presentation - For my presentation please use this link or find the slides in this folder https://www.youtube.com/watch?v=WSdy4DRx-fY&t=1s

---

## How to Recreate the Project  

### 1. **Prepare Initial Components**  

To begin, gather the following components for the Micromouse project:  

<table>
  <tr>
    <td style="text-align: center;">
      <b>Microcontroller:</b><br>Pi Pico<br>
      <img src=https://github.com/Luke-Steppens/Algernon-Micro-Mouse/blob/main/Documentation/Screenshot%20&%20Photos/Component%20Pictures/pico.png?raw=true width="250" height="110">
    </td>
    <td style="text-align: center;">
      <b>Motor Driver:</b><br>L293D<br>
      <img src=https://github.com/Luke-Steppens/Algernon-Micro-Mouse/blob/main/Documentation/Screenshot%20&%20Photos/Component%20Pictures/Screenshot%202024-10-26%20080457.png?raw=true width="250" height="180">
    </td>
    <td style="text-align: center;">
      <b>Proximity Sensor:</b><br>TCRT5000<br>
      <img src=https://github.com/Luke-Steppens/Algernon-Micro-Mouse/blob/main/Documentation/Screenshot%20&%20Photos/Component%20Pictures/TCRT5000.png?raw=true width="250" height="180">
    </td>
  </tr>
  <tr>
    <td style="text-align: center;">
      <b>Voltage Regulator:</b><br>L7805<br>
      <img src=https://github.com/Luke-Steppens/Algernon-Micro-Mouse/blob/main/Documentation/Screenshot%20&%20Photos/Component%20Pictures/L7805.png?raw=true width="250" height="180">
    </td>
    <td style="text-align: center;">
      <b>Magnetometer Compass:</b><br>GY-271 HMC5883L<br>
      <img src=https://github.com/Luke-Steppens/Algernon-Micro-Mouse/raw/refs/heads/main/Documentation/Screenshot%20&%20Photos/Component%20Pictures/HMC5883l.webp width="250" height="180">
    </td>
    <td style="text-align: center;">
      <b>DC Motors:</b><br>12V N20<br>
      <img src=https://github.com/Luke-Steppens/Algernon-Micro-Mouse/raw/refs/heads/main/Documentation/Screenshot%20&%20Photos/Component%20Pictures/N20.webp width="230" height="180">
    </td>
  </tr>
</table>
<br><br> <!-- Extra line break -->

---

### 2. **Schematic Layout - EasyEDA**  

After preparing the components, you can move on to creating the schematic in EasyEDA. This is where you arrange the components logically on the schematic to plan how they’ll be connected.  

It can often be difficult to find the item you are looking for within EasyEDA's search function, so I advise using the "User Contributed" section for additional parts.
This section has a variety of parts that other users have uploaded, which can save you time searching for specific components.

<div style="text-align: center; margin-bottom: 20px;">
  <b>User Contributed Section</b><br>
  <img src=https://github.com/Luke-Steppens/Algernon-Micro-Mouse/blob/main/Documentation/Screenshot%20&%20Photos/PCB%20Design/easygreen.png?raw=true width="500" height="300">
</div>

### Component and ID’s

Here are the components used in the project along with their EasyEDA search IDs:

- **Pi Pico** - C7203003
- **Motor Driver (L293D)** - C12340
- **Proximity Sensor (TCRT5000)** - C2984661
- **Switch** - C2939728
- **Voltage Regulator (L7805)** - C347289
- **Compass (HMC5883L)** 

Here's an example of how the schematic layout in EasyEDA looks:

<div style="text-align: center; margin-bottom: 20px;">
  <b>EasyEDA Schematic Layout</b><br>
  <img src=https://github.com/Luke-Steppens/Algernon-Micro-Mouse/blob/main/Documentation/Screenshot%20&%20Photos/PCB%20Design/Algernon%20sheet.png?raw=true width="800" height="600">
</div>
Please ensure you check your datasheets to get the connections correct. I took the incorrect details from a sellers page and had troubles down the line. (It is Corrected in this Schematic)

<br><br> <!-- Extra line break -->

---
### 3. **PCB Layout - Fusion 360 / EasyEda**

Design the base shape for your PCB in Fusion 360 by starting with a basic rectangle. Add four circles for mounting the PCB to the motor mounts,
then extrude the shape to a thickness of **1.60mm**. Apply fillets to the corners to create smooth edges. Once the base shape is complete,
create a new sketch on the surface of the design. After finishing the sketch, right-click on it in the drop-down menu and save it as a **DXF file**.


<div style="text-align: center; margin-bottom: 20px;">
  <b>Base Design of PCB</b><br>
  <img src=https://github.com/Luke-Steppens/Algernon-Micro-Mouse/blob/main/Documentation/Screenshot%20&%20Photos/PCB%20Design/image.png?raw=true width="500" height="300">
</div>

<br><br> <!-- Extra line break -->


The next step is to import your DXF file into EasyEDA and place your schematic on it. Consider the placement of components carefully to ensure proper functionality. For instance, the TCRT5000 proximity sensors should be positioned at the edges, and the L7805 voltage regulator is quite tall, so it may interfere with the chassis design. To make the routing process easier, we can utilize both the top and bottom layers of the PCB, represented by the red and blue lines, respectively. Add a copper layer within the PCB that way there is no need to connect ground connections, of which there are many. Alongside this do the same with +5V removing more manual connections and saving time. 
<div style="text-align: center; margin-bottom: 20px;">
  <b>Layout Considering Physicality of Components and Tracks</b><br>
  <img src=https://github.com/Luke-Steppens/Algernon-Micro-Mouse/blob/main/Documentation/Screenshot%20&%20Photos/PCB%20Design/image(2).png?raw=true width="500" height="300">
</div>


<br><br> <!-- Extra line break -->

When routing the board, avoid creating arbitrary lines. Instead, aim to have the tracks run parallel to one another. Shorter tracks result in less resistance, improving performance. Next press the Design Rule Check button too see if everything is correct, if you have no errors feel free to proceed.
<div style="text-align: center; margin-bottom: 20px;">
  <b>Final Track Layout</b><br>
  <img src=https://github.com/Luke-Steppens/Algernon-Micro-Mouse/blob/main/Documentation/Screenshot%20&%20Photos/PCB%20Design/schematicnopics.png?raw=true width="500" height="300">
</div>

<br><br> <!-- Extra line break -->

Once you are pleased with your setup press the 3D button to get an idea of the final product.
<div style="text-align: center; margin-bottom: 20px;">
  <b>PCB 3D Render</b><br>
  <img src=https://github.com/Luke-Steppens/Algernon-Micro-Mouse/blob/main/Documentation/Screenshot%20&%20Photos/PCB%20Design/3d.png?raw=true width="500" height="300">
</div>


---
![High-Resolution Render](https://github.com/Luke-Steppens/Algernon-Micro-Mouse/blob/main/CAD/Renders/algernon%20in%20a%20dry%20lake.png?raw=true)

---

<br><br> <!-- Extra line break -->
---
### 4. **Motor Mounts - Fusion 360** 


Firstly a sketch is placed and we begin building a basic block with holes with which to attach the PCB. The centre rectangle was made 90mm by 25mm giving lots of space, and then use the construction line tool to find the spots 25mm away from the centre east and west. These would be the places for the PCB holes, the circle tool was used at 3.60 diameter and then use the offset tool to add another circle 2mm larger around it. Extrude 20mm leaving the two circles deselected which leaves the holes going through the block.

<div style="text-align: center; margin-bottom: 20px;">
  <b>Base Dimensions</b><br>
  <img src=https://github.com/Luke-Steppens/Algernon-Micro-Mouse/blob/main/Documentation/Screenshot%20&%20Photos/Motor%20Mount/basedimensions.png?raw=true width="500" height="200">
</div>


<div style="text-align: center; margin-bottom: 20px;">
  <b>Base Extrude</b><br>
  <img src=https://github.com/Luke-Steppens/Algernon-Micro-Mouse/blob/main/Documentation/Screenshot%20&%20Photos/Motor%20Mount/baseextrude.png?raw=true width="500" height="350">
</div>

<br><br> <!-- Extra line break -->

next step is to carve out the hole for the DC motor and to create the shape of the mount itself. Make a sketch on the side and then used the line tool just selecting points then extruding through. The motor hole has to follow the specification of its real life counterpart, sketch a circle of 12mm and a square of 10mm from the circles centre, this leaves the centre part ready for the extrusion process.

<table>
  <tr>
    <td style="text-align: center;">
      <b>Mount Shape</b><br>
      <img src=https://github.com/Luke-Steppens/Algernon-Micro-Mouse/blob/main/Documentation/Screenshot%20&%20Photos/Motor%20Mount/mount%20shape.png?raw=true width="470" height="130">
    </td>
    <td style="text-align: center;">
      <b>Extrude Cut</b><br>
      <img src=https://github.com/Luke-Steppens/Algernon-Micro-Mouse/blob/main/Documentation/Screenshot%20&%20Photos/Motor%20Mount/blockextr.png?raw=true width="500" height="180">
    </td>
  </tr>
</table>


<br><br> <!-- Extra line break -->

Between the PCB and mount we need 3mm clearance. extrude the offset circles on the surface to 3mm and then chamfer them down giving a ramped effect. Pure for aesthetics extra edges can be filleted to be smooth and rounded.

<table>
  <tr>
    <td style="text-align: center;">
      <b>Offset Circle Extrude + Offset</b><br>
      <img src=https://github.com/Luke-Steppens/Algernon-Micro-Mouse/blob/main/Documentation/Screenshot%20&%20Photos/Motor%20Mount/chamfer.png?raw=true width="500" height="130">
    </td>
    <td style="text-align: center;">
      <b>Filleted Edges</b><br>
      <img src=https://github.com/Luke-Steppens/Algernon-Micro-Mouse/blob/main/Documentation/Screenshot%20&%20Photos/Motor%20Mount/fillet.png?raw=true width="500" height="150">
    </td>
  </tr>
</table>
<br><br> <!-- Extra line break -->

In order to have the mount screws fit correctly a horizontal extrude is needed on the underside. An extrude was made on the side sketch of the mount with and offset creating a square within the middle. Fillet the edge, this will make attaching parts easier later on.

<div style="text-align: center; margin-bottom: 20px;">
  <b>Flat Extrude for Screw Nuts and extras</b><br>
  <img src=https://github.com/Luke-Steppens/Algernon-Micro-Mouse/blob/main/Documentation/Screenshot%20&%20Photos/Motor%20Mount/bolt%20space.png?raw=true width="500" height="200">
</div>

<br><br> <!-- Extra line break -->

For character to make the mounts match the "Paw" shape of the PCB base, cut out 12.5mm by 9mm from the edge by creating a sketch and extruding through.


<table>
  <tr>
    <td style="text-align: center;">
      <b>Paw Shape</b><br>
      <img src=https://github.com/Luke-Steppens/Algernon-Micro-Mouse/blob/main/Documentation/Screenshot%20&%20Photos/Motor%20Mount/paw%20gap.png?raw=true width="500" height="200">
    </td>
    <td style="text-align: center;">
      <b>Filleted Edges</b><br>
      <img src=https://github.com/Luke-Steppens/Algernon-Micro-Mouse/blob/main/Documentation/Screenshot%20&%20Photos/Motor%20Mount/paw%20fillet.png?raw=true width="500" height="250">
    </td>
  </tr>
</table>


<br><br> <!-- Extra line break -->


To create the motor mounts counterpart create a construction plane that is offset far enough to fit the mirror image. (26mm from the side plane)

<div style="text-align: center; margin-bottom: 20px;">
  <b>Construction Plane</b><br>
  <img src=https://github.com/Luke-Steppens/Algernon-Micro-Mouse/blob/main/Documentation/Screenshot%20&%20Photos/Motor%20Mount/construction%20plane.png?raw=true width="500" height="250">
</div>


<div style="text-align: center; margin-bottom: 20px;">
  <b>Mirror Mount</b><br>
  <img src=https://github.com/Luke-Steppens/Algernon-Micro-Mouse/blob/main/Documentation/Screenshot%20&%20Photos/Motor%20Mount/mount%20mirror.png?raw=true width="500" height="240">
</div>

<br><br> <!-- Extra line break -->

The last touch on the mounts was to add text to the them. Create sketches on the flat surfaces, choose text and type the writing. Follow this with using the alignment option to have the text centered within box. Extrude the Text by 1mm.



<table>
  <tr>
    <td style="text-align: center;">
      <b>How's My</b><br>
      <img src=https://github.com/Luke-Steppens/Algernon-Micro-Mouse/blob/main/Documentation/Screenshot%20&%20Photos/Motor%20Mount/hows.png?raw=true width="500" height="220">
    </td>
    <td style="text-align: center;">
      <b>Driving</b><br>
      <img src=https://github.com/Luke-Steppens/Algernon-Micro-Mouse/blob/main/Documentation/Screenshot%20&%20Photos/Motor%20Mount/drivingtxt.png?raw=true width="500" height="220">
    </td>
  </tr>
</table>

<br><br> <!-- Extra line break -->

Going back into Fusion 360 you can create an assembly with all current parts which should look like this:

<div style="text-align: center; margin-bottom: 20px;">
  <b>Motor Mount + PCB Assembly </b><br>
  <img src=https://github.com/Luke-Steppens/Algernon-Micro-Mouse/blob/main/Documentation/Screenshot%20&%20Photos/Motor%20Mount/Assembly%209.png?raw=true width="1487" height="746">
</div>

<br><br> <!-- Extra line break -->

---
### 5. **PCB Assembly & Testing - Arduino IDE**

Your PCB will need a visual inspection to ensure everything looks connected properly. Then using a multimeter go through each track end to end and connect the multimeter to the end of each tracks, if it doesnt beep they arent connected and it is ok to continue. Check every track!. 

<div style="text-align: center; margin-bottom: 20px;">
  <b>Printed Circuit Board</b><br>
  <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/PCB%20Assembly/IMG_3197.jpeg?raw=true width="430" height="300">
</div>

<br><br> <!-- Extra line break -->

Next start attaching and testing components, first is the Pi Pico and once soldered onto the PCB (Ensure the correct side is up, the same as on your EasyEda design) test the onboard LED. To do this you will need to upload the code from Arduino IDE. Tested on a power supply I gave it just over 7 volts and the LED flashed consistently.

```cpp
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
}
```
<br><br> <!-- Extra line break -->

The next item to solder was the TCRT5000's, make sure to check your schematics before soldering to make sure they are in the correct orientation. Also the LED's can be loose within the TCRT5000's so be extra careful. Onto the soldering the resistors again check your schematics to ensure the placement like below.



<table>
  <tr>
    <td style="text-align: center;">
      <b>Inputs</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/PCB%20Assembly/sheet.png?raw=true width="400" height="500">
    </td>
    <td style="text-align: center;">
      <b>Resistors</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/PCB%20Assembly/resistors.png?raw=true width="500" height="320">
    </td>
  </tr>
</table>

Once completed, use the following code snippets to test the LEDs and TCRT5000 sensors. Measuring the centimeter readings from the TCRT5000s using the serial monitor in the Arduino IDE will be valuable for coding navigation. I recommend doing this as early as possible.

```cpp
int TCRT_Left = 26;
int TCRT_Center = 27;
int TCRT_Right = 28;
int TCRT_Output;


void setup() {

  Serial.begin(9600);
  pinMode(TCRT_Left, INPUT);
  pinMode(TCRT_Center, INPUT);
  pinMode(TCRT_Right, INPUT);
}

// gets reading from TCRT on the right and outputs to serial monitor
void loop() {
  TCRT_Output = analogRead(TCRT_Right);
  Serial.print("Right Reading ");  
  Serial.println(TCRT_Output);
  delay(500);
}
```
<br><br> <!-- Extra line break -->

<table>
  <tr>
    <td style="text-align: center;">
      <b>Right TCRT5000</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/TCRT%20Test/IMG_3393.jpeg?raw=true width="300" height="220">
    </td>
    <td style="text-align: center;">
      <b>LEFT TCRT5000</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/TCRT%20Test/IMG_3394.jpeg?raw=true width="300" height="220">
    </td>
  </tr>
</table>

<br><br> <!-- Extra line break -->

Testing the TCRT5000 sensors was based on the 17cm width of the maze corridors. Measurements were taken at 1 cm distances, with results recorded for each up to 8cm approximately half the width of the corridor. Note that each TCRT5000 sensor may produce slightly different results. External factors, such as the reflectivity of the maze wall surface and surrounding light sources, can affect the readings. Aim to replicate conditions similar to those of the maze environment. As you will see in the table below the sensors tend to plateau at higher distances and are more sensitive at closer.

| Distance (CM) | Right TCRT (Range) | Left TCRT (Range) |  Center TCRT (Range) |
|:-------------:|:------------------:|:-----------------:|:--------------------:|
|       1       |      543 - 548     |     567 - 569     |       691 - 700      |
|       2       |      851 - 858     |     869 - 876     |       892 - 898      |
|       3       |      940 - 948     |     950 - 959     |       953 - 964      |
|       4       |      974 - 986     |     980 - 990     |       981 - 990      |
|       5       |     993 - 1002     |     995 - 1005    |      994 - 1003      |
|       6       |     1002 - 1023    |    1003 - 1013    |      1001 - 1011     |
|       7       |     1007 - 1015    |    1010 - 1018    |      1007 - 1015     |
|       8       |     1008 - 1018    |    1013 - 1021    |      1007 - 1019     |



<br><br> <!-- Extra line break -->

---
![High-Resolution Render](https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/CAD/Renders/algernon%20in%20a%20field.PNG?raw=true)



---
### 6. **Chassis Design - Fusion 360**

This section will go over the basic construction of a chassis for the micro-mouse. My design is over engineered and over complicated to a fault (But was good practice) you will find my fusion design file is you wish to use it in the Fusion section of the repo.

The initial steps for a basic chassis would be to take your PCB base design and use it as a template. From here create a sketch upon the PCB design and extrude to 5mm, and then create a sketch on the side and using the line tool draw the shape you would like and extrude through. To save time hollowing out the chassis piece by piece just use the shell command and choose a thickness of minimum of 2mm.

<table>
  <tr>
    <td style="text-align: center;">
      <b>Basic Shape</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Final%20Chassis/basic%20chassis%201%20.png?raw=true width="500" height="200">
    </td>
    <td style="text-align: center;">
      <b>Shell</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Final%20Chassis/basic%20chassis%202%20shell.png?raw=true width="500" height="250">
    </td>
  </tr>
</table>

<br><br> <!-- Extra line break -->

Because the TCRT5000's have to be postitioned center, left and right we need to make sure there is a place for them so we extrude to cut a gap for them. Again this is done by creating a side sketch and extruding after drawing with the line tool. For a bit of fun you can create a design on the bonnets face, I did this by drawing with circle and line tools on the face and then using the mirror function so I could ensure symmetry. To use the mirror fucntion pick the the design (so far) and then pick the mirror plane going horizonally through the chasses perpendicular to the design. 

<table>
  <tr>
    <td style="text-align: center;">
      <b>Basic Shape</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Final%20Chassis/basic%20chassis%203%20side%20extrude.png?raw=true width="400" height="200">
    </td>
    <td style="text-align: center;">
      <b>Shell</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Final%20Chassis/basic%20chassis%204%20mouse%20face.png?raw=true width="300" height="350">
    </td>
  </tr>
</table>

<br><br> <!-- Extra line break -->

At this point your chassis has the same curcumference measuraments as the PCB and so wont fit over it, alongside this there is currently not enough clearance for the volatage regulator. So first create a sketch on the underside outer base and use the offset tool and increase this by 2mm. then extrude this by enough 8mm (This will increase to 17mm with later modification). When raised enough make a 2mm thickness extrusion between the paws and draw three 5mm holes for the LED's and extrude them through. Below the LED's a simple three rectangles are drawn and extruded out 15mm, this serves to stop light from the LED's interfereing with the front TCRT5000.

<table>
  <tr>
    <td style="text-align: center;">
      <b>Offset and Lift</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Final%20Chassis/basic%20chassis%205%20lifted.png?raw=true width="350" height="220">
    </td>
    <td style="text-align: center;">
      <b>LED's + Center TCRT5000</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Final%20Chassis/basic%20chassis%206%20LED.png?raw=true width="400" height="230">
    </td>
  </tr>
</table>

<br><br> <!-- Extra line break -->

From here we extend the length of the chassis by using the Split Body feature. Seperate by 10mm and then on the cut surface extrude to meet the face of the other side. This has to be done to give more clearance along the chassis otherwise it takes to much force to attach it to the PCB. 

<table>
  <tr>
    <td style="text-align: center;">
      <b>Split Body</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Final%20Chassis/basic%20chassis%207%20split.png?raw=true width="350" height="220">
    </td>     
  </tr>
</table>

<br><br> <!-- Extra line break -->

The final Chassis is a heavily modified version of the above design. The chassis needs a place to hold the battery and so we will design the holder and then use the combine function to add it to the main chassis body. This design also gets heavily modified purely for aesthetics and is already made in the final chassis fusion file.

<table>
  <tr>
    <td style="text-align: center;">
      <b>Battery Holder Measurements</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Final%20Chassis/basic%20chassis%209%20battery%20measurements.png?raw=true width="350" height="220">
    </td>
    <td style="text-align: center;">
      <b>Battery Holder</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Final%20Chassis/basic%20chassis%208%20battery.png?raw=true width="350" height="220">
    </td>
  </tr>
</table>

<br><br> <!-- Extra line break -->
Final Battery Holder Design


<table>
  <tr>
    <td style="text-align: center;">
      <b>Battery Holder Front</b>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Final%20Chassis/basic%20chassis%2010%20battery%20front.png?raw=true width="250" height="180">
    </td>
    <td style="text-align: center;">
      <b>Battery Holder Side</b>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Final%20Chassis/basic%20chassis%2011%20battery%20side.png?raw=true width="250" height="180">
    </td>
    <td style="text-align: center;">
      <b>Battery Holder Back</b>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Final%20Chassis/basic%20chassis%2012%20battery%20back.png?raw=true width="250" height="180">
    </td>
  </tr>
  <tr>
    <td style="text-align: center;">
      <b>Battery Holder Top</b>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Final%20Chassis/basic%20chassis%2013%20battery%20top.png?raw=true width="250" height="180">
    </td>
    <td style="text-align: center;">
      <b>Battery Holder Angle</b>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Final%20Chassis/basic%20chassis%2014%20battery%20angle.png?raw=true width="250" height="180">
    </td>    
  </tr>
</table>

<br><br> <!-- Extra line break -->

This battery holder is then attached via the combine function and parts were extruded away to leave more space but these are also options leaving the final chassis.

<table>
  <tr>
    <td style="text-align: center;">
      <b>Final Chassis Front</b>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Final%20Chassis/Front%20profile.png?raw=true width="250" height="180">
    </td>
    <td style="text-align: center;">
      <b>Final Chassis Side</b>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Final%20Chassis/side%20profile.png?raw=true width="250" height="180">
    </td>
    <td style="text-align: center;">
      <b>Final Chassis Back</b>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Final%20Chassis/Back%20profile.png?raw=true width="250" height="180">
    </td>
  </tr>
  <tr>
    <td style="text-align: center;">
      <b>Final Chassis Top</b>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Final%20Chassis/top%20profile.png?raw=true width="220" height="250">
    </td>
    <td style="text-align: center;">
      <b>Final Chassis Angle</b>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Final%20Chassis/angle%20shot.png?raw=true width="250" height="180">
    </td>    
  </tr>
</table>
<br><br> <!-- Extra line break -->

---
### 7. **Wheel Design - Fusion 360**


For the wheel the bigger the diameter the faster the mouse will go. Create a new sketch on a flat surface and use the circle fucntion to create a circle 38mm in diameter, 
then create another inner circle of 3mm and from its center make a vertical construction line of 1mm. Now create a horizontal line cutting through the circle purpendicular to the construction line. Then using the snipping tool cut away all excess lines and you will be left with the shape of the motor shaft.

<table>
  <tr>
    <td style="text-align: center;">
      <b>Wheel Diameter</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Wheels/wheel%20design%201%20diameter.png?raw=true width="320" height="220">
    </td>
    <td style="text-align: center;">
      <b>Motor Shaft Shape</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Wheels/wheel%20design%202%20shaft%20+%20cut.png?raw=true width="350" height="230">
    </td>
  </tr>
</table>

(After fitting this style wheel I found the mouses overall width to be to large so I went on to use the 3mm circle without the cut, this allowed the wheels to be closer to the body of the mouse)

<br><br> <!-- Extra line break -->

Next create a new sketch and using basic shapes create a crude paw shape. Once this is made extrude the wheel shape to 6mm. In the create drop down choose pattern and then circular, now chose all the lines that make up the paw shape and then choose the center of the wheel for the pattern to rotate around.

<table>
  <tr>
    <td style="text-align: center;">
      <b>Paw Design</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Wheels/wheel%20design%204%20paw.png?raw=true width="350" height="220">
    </td>
    <td style="text-align: center;">
      <b>Extrude</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Wheels/wheel%20design%205%20pattern%20extrude.png?raw=true width="400" height="230">
    </td>
  </tr>
</table>

<br><br> <!-- Extra line break -->

For the last part of the design I followed the previous steps and created a circular pattern of rectangles, extruded them through (like inverted spokes) and then filleted edges to give a directional effect. 

<table>
  <tr>
    <td style="text-align: center;">
      <b>Spokes Design</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Wheels/wheal%20design%206%20inverted%20spokes.png?raw=true width="350" height="220">
    </td>
    <td style="text-align: center;">
      <b>Final Wheel</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Wheels/wheel%20mdf.png?raw=true width="400" height="230">
    </td>
  </tr>
</table>

With this ready the next step is to create a sketch on the surface of the wheel and export it as a DXF file and then use 6mm MDF and have the design laser cut. Using a simple glue gun apply enough to secure each wheel.

<br><br> <!-- Extra line break -->

---
### 8. **3rd Point Balance - Fusion 360**

One of the last things the mouse needs is a point of balance at the front. There are three points of balance the two wheels and a small point that with make contact with the ground. In fusion 360 we need to take the measurements from the motor mounts above and create two basic squares the correct distance apart, then create 3mm holes and extrude the shapes. Fillet the top edges of the squares for an easy fit. Now with the line tool draw an arch shape and extrude downward, from here make a sketch on the side and draw a triangle on the side you want to be the back and then extrude cut through both. This should leave you with the second picture.

<table>
  <tr>
    <td style="text-align: center;">
      <b>Connecting Faces</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/3rd%20Point%20Balance/3rd%20point%20twin%20holes.png?raw=true width="350" height="220">
    </td>
    <td style="text-align: center;">
      <b>Angle Extrude</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/3rd%20Point%20Balance/3rd%20point%20twin%20flat%20under.png?raw=true width="400" height="230">
    </td>
  </tr>
</table>

<br><br> <!-- Extra line break -->

Using the face shapes extrude out to give enough length for clearance (this will be changed later).
Next create another side sketch and with the line tool make a downward slope to 5mm away from where the ground will be. Cut through with various extrudes until you get the shape you want and then create a 5mm diameter circle and extrude it out 5mm.


<table>
  <tr>
    <td style="text-align: center;">
      <b>Legs Extrude</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/3rd%20Point%20Balance/3rd%20point%20twin%20extrude.png?raw=true width="350" height="220">
    </td>
    <td style="text-align: center;">
      <b>Slope + Point</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/3rd%20Point%20Balance/3rd%20point%20point.png?raw=true width="400" height="230">
    </td>
  </tr>
</table>

<br><br> <!-- Extra line break -->

This is the final shape so feel free to chamfer and fillet edges for a nice look. The two legs leading to the 3rd point are too long so to shorten them first we need touse the split body function, with them now in to parts extrude the legs to a suitable length and then move both bodies together and use the combine function to make them a singular body.

<table>
  <tr>
    <td style="text-align: center;">
      <b>Chamfer + Fillet</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/3rd%20Point%20Balance/3rd%20point%20fillet.png?raw=true width="350" height="220">
    </td>
    <td style="text-align: center;">
      <b>Split Body</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/3rd%20Point%20Balance/3rd%20point%20split.png?raw=true width="400" height="230">
       </td>
    <td style="text-align: center;">
      <b>Combine</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/3rd%20Point%20Balance/3rd%20point%20combine.png?raw=true width="400" height="230">
    </td>
  </tr>
</table>

<br><br> <!-- Extra line break -->

Another optional extra is to add the text A, to do this simply create a sketch on the surface use the text function. Choose your font, size and positioning. This should leave you with the balance ready to attach to the motor mounts.


<table>
  <tr>
    <td style="text-align: center;">
      <b>Text View</b><br>
      <img src="https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/3rd%20Point%20Balance/3rd%20point%201%20top.png?raw=true" width="360" height="240">
    </td>
    <td style="text-align: center;">
      <b>Side View</b><br>
      <img src="https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/3rd%20Point%20Balance/3rd%20point%202%20side.png?raw=true" width="400" height="230">
    </td>
  </tr>
  <tr>
    <td style="text-align: center;">
      <b>Angle View</b><br>
      <img src="https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/3rd%20Point%20Balance/3rd%20point%20balance.png?raw=true" width="370" height="230">
    </td>
    <td style="text-align: center;">
      <b>3rd Point Balance + Motor Mounts</b><br>
      <img src="https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/3rd%20Point%20Balance/3rd%20point%20mount.png?raw=true" width="370" height="230">
    </td>
  </tr>
</table>


<br><br> <!-- Extra line break -->

---
### 9. **Twin Exhaust - 3D Scanning / Fusion 360**

The last physical addition to the micro mouse uses a 3D scanning technique on a phone app called Polycam. The shape for the exhaust was made out of clay and then scanned with the Polycam application. For best results take as many photos as it allows to get greater quality. The file you download is a GLTF which needs to be converted into an STL file.

<table>
  <tr>
    <td style="text-align: center;">
      <b>Exhaust Mesh</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/3D%20Scan/exhaust1.png?raw=true width="300" height="220">
    </td>
    <td style="text-align: center;">
      <b>Dual Exhaust Meshes</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/3D%20Scan/exhaust2%20twin.png?raw=true width="400" height="230">
       
    
  </tr>
</table>

<br><br> <!-- Extra line break -->

Once imported into fusion a few steps must be taken in order to make this shape 3D printable. First off Using the construction plane tool place a plane below the object and extrude to add a body to meet the bottom of the 3D scan, this effectively make it one solid piece than can be manipulated easier. Next cut around the object using the spline tool and then extrude chunks of the picture away. Fusion seemed to fail when attempting to extrude everything away in one go, so this may take some tinkering. Finally Mirror the exhaust and you are ready to 3D print the exhausts. Within orcaslicer you may have to change the scale to a reasonable size. Once printed attach the exhausts to both side using a glue gun and the final product should look like the picture below.

<br><br> <!-- Extra line break -->

---

![High-Resolution Render](https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/media/Photos/IMG_3752.jpg?raw=true)



<br><br> <!-- Extra line break -->

---
### 10. **Feedback (Market Testing) - Microsoft Word**

<br><br> <!-- Extra line break -->

Feeback

| **Participant Name** | **Participant 1**                                                                                       | **Participant 2**                                                                                                                                   | **Participant 3**                                                                                                                                      |
|-----------------------|--------------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------|
|                       | Charlie                                                                                               | Conor                                                                                                                                              | Ana                                                                                                                                                    |
| **If a specific area could use more attention, what would it be and why?**                                                   | 9/10<br>The front, there’s a design difference in the LEDs used but other than that it looks grand.                                                | 7/10<br>The wires don’t jut out of the board which is nice but the extra greblies and aesthetics need to be scaled to probably reduce weight and height. | 8/10<br>For future PCB redesigns the motor pins and switch could be moved to a more convenient place on the board. The Fusion 360 could use less attention; anything past the current 3D print state would be slight overkill. |
| **Does the mouse cover all desired requirements to a decent degree?**                                                        | 9/10<br>It looks amazing and the code is documented very well. I’m not sure if it can solve the maze at this point.                                | 9/10<br>The micro mouse moves through the maze quite well and the coding is greatly structured and clearly commented but I think the spoil might be much and might catch on turns.             | 6/10<br>The code could use some work as in the currently the mouse spins no matter the TCRT input.                                                      |
| **Which component could have a better placement to make the user experience better?**                                        | 8/10<br>The switch could be in a more convenient place for the user                                                                                | 8/10<br>The position of the battery could be switched to the bottom of the robot and the TCRT’s on the side should be angled more towards the front due to cone of vision. The placement of the other components is nice. | 7/10<br>The switch and the voltage regulator can be swapped around for ease of access. The resistors also seem to be arbitrarily placed on the PCB.       |

Addressing feedback

Question 1. For the first question the responses go over placement of components and the over engineering of the design. These are both valid criticisms. Going forward creating simpler designs will allow for less trouble when unforeseen problems occur, having the components better placed will also work well towards keeping things simple, helping the iterative process.

<br><br> <!-- Extra line break -->

Question 2. The code is the focus of the feedback for this question. While the TCRT5000's can be a little unpredictable, I have been made aware of ideas that may help that I would like to implement if there is enough time. The main thing would be having the sensors take readings on startup and use those measurements to base the movements upon. Currently they are set to fixed numbers which aren’t always true when it comes to the sensors, this can be due to natural light and shadows.

<br><br> <!-- Extra line break -->

Question 3. The main point of this piece of feedback were with specific components and their locations, this was mostly covered by my first question. This one adds to it my arbitrary looking placement of my resistors on the PCB. Though it looks arbitrary the placement was based on using the space efficiently for the tracks connecting items. This does still highlight an area that can be improved. Striking a balance between the two rather than focusing on just one would make me better at both in the long run.


---
<br><br> <!-- Extra line break -->

### 11. **Maze Navigation - Arduino IDE**
<br><br> <!-- Extra line break -->
This simple code helps Algernon traverse the maze, it is a mixture of basic functions reacting to thresholds set to readings from the TCRT's in CM


```cpp
// Algernon Current Code


// LED pins
int ledR = 20;
int ledW = 18;
int ledB = 19;

// motor pins
int motor_leftA = 0;   // pin0
int motor_leftB = 1;   // pin1
int motor_rightB = 2;  // pin2
int motor_rightA = 3;  // pin3

// TCRT pins
int TCRT_Left = 26;
int TCRT_Front = 27;
int TCRT_Right = 28;
int TCRT_Output;

bool Front = false;
bool Left = false;
bool Right = false;

int drive_Speed = 35;
int turn_Speed = 30;
int reverse_Speed = 25;

bool firstLoop = true;

void setup() {

  Serial.begin(9600);

  // TCRTS
  pinMode(TCRT_Left, OUTPUT);
  pinMode(TCRT_Front, OUTPUT);
  pinMode(TCRT_Right, OUTPUT);

  // motors
  pinMode(motor_leftA, OUTPUT);
  pinMode(motor_leftB, OUTPUT);
  pinMode(motor_rightA, OUTPUT);
  pinMode(motor_rightB, OUTPUT);

  // LEDS
  pinMode(ledR, OUTPUT);
  pinMode(ledW, OUTPUT);
  pinMode(ledB, OUTPUT);
}

void loop() {

  if (firstLoop) {  // have 4 second delay before starting the loop, but only for the first loop
    delay(4000);
    firstLoop = false;
  }


  checkTcrt();  // Continuously print sensor readings for debugging
  
  Front = false;  // sensors set to false by deafult so they start by not sensing anything
  Left = false;
  Right = false;

  checkDistance();
  
  if (analogRead(TCRT_Front) < 981) {
    Serial.println("Front sensor triggered");
    Front = true;

  }
  if (analogRead(TCRT_Left) < 995) {
    Serial.println("Left sensor triggered");
    Left = true;

  }
  if (analogRead(TCRT_Right) < 993) {
    Serial.println("Right sensor triggered");
    Right = true;

  }

// If all three sensors detect something move backwards  
  if (Front && Left && Right){  
    motorsBackward();
  }
  
  else if (Front && Left){
    turnRight();
  }

  else if (Front && Right){
    turnLeft();
  }

  else if (Left){
    turnRight();
  }

  else if (Right){
    turnLeft();
  }
  
  else if (Front){
    turnLeft();
  }

  else {
    motorsForward();
  }
}


// functions
void checkTcrt() {
  // 1cm = 543 - 548, 2cm = 851 - 858, 3cm = 940 - 948,
  // 4cm = 974 - 986, 5cm = 993 - 1002, 6cm = 1002 - 1023,
  // 7cm = 1007 - 1015, 8cm = 1008 - 1018
  Serial.print(" Right Reading ");
  Serial.print(analogRead(TCRT_Right));

  // 1cm = 567 - 569, 2cm = 869 - 876, 3cm = 950 - 959,
  // 4cm = 980 - 990, 5cm = 995 - 1005, 6cm = 1003 - 1013,
  // 7cm = 1010 - 1018, 8cm = 1013 - 1021 
  Serial.print("| Left Reading ");
  Serial.print(analogRead(TCRT_Left));

  // 1cm = 691 - 700, 2cm = 892 - 898, 3cm 953 - 964,
  // 4cm = 981 - 990, 5cm = 994 - 1003, 6cm 1001 - 1011,
  // 7cm = 1007 - 1015, 8cm = 1007 - 1019
  Serial.print("| Center Reading ");
  Serial.println(analogRead(TCRT_Front));
  delay(500);
}

void checkDistance() {
  if (analogRead(TCRT_Right) < 980) {
    digitalWrite(ledW, LOW);
  }
  if (analogRead(TCRT_Right) > 980) {
    digitalWrite(ledW, HIGH);
  }
  if (analogRead(TCRT_Left) < 990) {
    digitalWrite(ledB, LOW);
  }
  if (analogRead(TCRT_Left) > 990) {
    digitalWrite(ledB, HIGH);
  }
  if (analogRead(TCRT_Front) < 1005) {
    digitalWrite(ledR, LOW);
  }
  if (analogRead(TCRT_Front) > 1005) {
    digitalWrite(ledR, HIGH);
  }
}

void turnLeft() {
  analogWrite(motor_leftA, -turn_Speed);
  analogWrite(motor_leftB, turn_Speed);
  analogWrite(motor_rightA, turn_Speed);
  analogWrite(motor_rightB, -turn_Speed);
}

void turnRight() {
  analogWrite(motor_leftA, turn_Speed);
  analogWrite(motor_leftB, -turn_Speed);
  analogWrite(motor_rightA, -turn_Speed);
  analogWrite(motor_rightB, turn_Speed);
}

void motorsForward() {

  analogWrite(motor_leftA, drive_Speed);
  analogWrite(motor_leftB, -drive_Speed);
  analogWrite(motor_rightA, drive_Speed);
  analogWrite(motor_rightB, -drive_Speed);
  
}

void motorsBackward() {
  analogWrite(motor_leftA, -reverse_Speed);  // Reverse left motor
  analogWrite(motor_leftB, reverse_Speed);   // Reverse left motor
  analogWrite(motor_rightA, -reverse_Speed); // Reverse right motor
  analogWrite(motor_rightB, reverse_Speed);  // Reverse right motor
}

void allLeds() {
  digitalWrite(ledR, HIGH);
  digitalWrite(ledW, HIGH);
  digitalWrite(ledB, HIGH);
}
```

<br><br> <!-- Extra line break -->

---

### 12. **Extras - Fusion 360**

In the final testing section certain problems arose, namely tight corners the mouse would get caught between the chassis and the side TCRT's so I designed a basic bumper that would help redirect the mouse (mostly). This was done by taking basic measurements of the front of the chassis and then adding small hook shapes to clip the bumper to the mouse. Using the basic measurements make an arrow shape and then extrude up by 5mm. 

<br><br> <!-- Extra line break -->

<table>
  <tr>
    <td style="text-align: center;">
      <b>Bumper</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Bumper/image.png?raw=true width="350" height="230">
    </td>
    <td style="text-align: center;">
      <b>Printed Bumper</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Bumper/IMG_3797.jpeg.png?raw=true width="400" height="300">
    </td>
  </tr>
</table>

<br><br> <!-- Extra line break -->

And for the last part the MDF wheels were having difficulties gripping the ground so I designed tires that would fit over the wheels with a groove for elastic bands to rest in. Firstly make a circle the same diameter as the wheels 38mm and then offset this by 1mm and extrudes the width of the MDF which was 6mm. I then offset the larger circle again on either side and extruded inwards by 2mm. Then I decided to make it so the tire couldnt slide off the wheel by making a third offset, but this one would be a smaller circle effectively making them like caps on the wheels. Then the outer edge was filleted. 
<br><br> <!-- Extra line break -->

<table>
  <tr>
    <td style="text-align: center;">
      <b>Fusion tire</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Wheels/Tire.png?raw=true width="350" height="290">
    </td>
    <td style="text-align: center;">
      <b>Printed Tire</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Wheels/IMG_3798.jpeg.png?raw=true width="400" height="370">
    </td>
  </tr>
</table>



## License  
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.  
