# Micromouse Project - COMP207  

## Overview  
This repository contains all the resources, code, and documentation for my Micromouse project as part of the COMP207 module at Falmouth University (Second Year).  
The goal of the project is to design, build, and program a robot capable of navigating a maze efficiently.  

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
   - Parts  
   - Workshop Materials  

- **Code**  
   - Basic Component Code  
   - ClassCode  
   - Micro-Mouse Algernon  

- **Documentation**  
   - Datasheets  

- **Electronics**  

- **Media**  

---

## How to Recreate the Project  

### 1. **Prepare Initial Components**  

To begin, gather the following components for the Micromouse project:  

<table>
  <tr>
    <td style="text-align: center;">
      <b>Microcontroller:</b><br>Pi Pico<br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Component%20Pictures/pico.png?raw=true width="250" height="110">
    </td>
    <td style="text-align: center;">
      <b>Motor Driver:</b><br>L293D<br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Component%20Pictures/Screenshot%202024-10-26%20080457.png?raw=true width="250" height="180">
    </td>
    <td style="text-align: center;">
      <b>Proximity Sensor:</b><br>TCRT5000<br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Component%20Pictures/TCRT5000.png?raw=true width="250" height="180">
    </td>
  </tr>
  <tr>
    <td style="text-align: center;">
      <b>Voltage Regulator:</b><br>L7805<br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Component%20Pictures/L7805.png?raw=true width="250" height="180">
    </td>
    <td style="text-align: center;">
      <b>Magnetometer Compass:</b><br>GY-271 HMC5883L<br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20%26%20Photos/Component%20Pictures/HMC5883l.webp width="250" height="180">
    </td>
    <td style="text-align: center;">
      <b>DC Motors:</b><br>12V N20<br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20%26%20Photos/Component%20Pictures/N20.webp width="230" height="180">
    </td>
  </tr>
</table>
<br><br> <!-- Extra line break -->

---

### 2. **EasyEDA Schematic Layout**  

After preparing the components, you can move on to creating the schematic in EasyEDA. This is where you arrange the components logically on the schematic to plan how they’ll be connected.  

It can often be difficult to find the item you are looking for within EasyEDA's search function, so I advise using the "User Contributed" section for additional parts.
This section has a variety of parts that other users have uploaded, which can save you time searching for specific components.

<div style="text-align: center; margin-bottom: 20px;">
  <b>User Contributed Section</b><br>
  <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/PCB%20Design/easygreen.png?raw=true width="500" height="300">
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
  <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/PCB%20Design/Algernon%20sheet.png?raw=true width="800" height="600">
</div>
Please ensure you check your datasheets to get the connections correct. I took the incorrect details from a sellers page and had troubles down the line. (It is Corrected in this Schematic)

<br><br> <!-- Extra line break -->

---
### 3. **Fusion 360 / EasyEda PCB Layout**

Design the base shape for your PCB in Fusion 360 by starting with a basic rectangle. Add four circles for mounting the PCB to the motor mounts,
then extrude the shape to a thickness of **1.60mm**. Apply fillets to the corners to create smooth edges. Once the base shape is complete,
create a new sketch on the surface of the design. After finishing the sketch, right-click on it in the drop-down menu and save it as a **DXF file**.


<div style="text-align: center; margin-bottom: 20px;">
  <b>Base Design of PCB</b><br>
  <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/PCB%20Design/image.png?raw=true width="500" height="300">
</div>

<br><br> <!-- Extra line break -->


The next step is to import your DXF file into EasyEDA and place your schematic on it. Consider the placement of components carefully to ensure proper functionality. For instance, the TCRT5000 proximity sensors should be positioned at the edges, and the L7805 voltage regulator is quite tall, so it may interfere with the chassis design. To make the routing process easier, we can utilize both the top and bottom layers of the PCB, represented by the red and blue lines, respectively. Add a copper layer within the PCB that way there is no need to connect ground connections, of which there are many. Alongside this do the same with +5V removing more manual connections and saving time. 
<div style="text-align: center; margin-bottom: 20px;">
  <b>Layout Considering Physicality of Components and Tracks</b><br>
  <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/PCB%20Design/image(2).png?raw=true width="500" height="300">
</div>


<br><br> <!-- Extra line break -->

When routing the board, avoid creating arbitrary lines. Instead, aim to have the tracks run parallel to one another. Shorter tracks result in less resistance, improving performance. Next press the Design Rule Check button too see if everything is correct, if you have no errors feel free to proceed.
<div style="text-align: center; margin-bottom: 20px;">
  <b>Final Track Layout</b><br>
  <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/PCB%20Design/schematicnopics.png?raw=true width="500" height="300">
</div>

<br><br> <!-- Extra line break -->

Once you are pleased with your setup press the 3D button to get an idea of the final product.
<div style="text-align: center; margin-bottom: 20px;">
  <b>PCB 3D Render</b><br>
  <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/PCB%20Design/3d.png?raw=true width="500" height="300">
</div>

<br><br> <!-- Extra line break -->

---
### 4. **Fusion 360 Motor Mounts** 


Firstly a sketch is placed and we begin building a basic block with holes with which to attach the PCB. The centre rectangle was made 90mm by 25mm giving lots of space, and then use the construction line tool to find the spots 25mm away from the centre east and west. These would be the places for the PCB holes, the circle tool was used at 3.60 diameter and then use the offset tool to add another circle 2mm larger around it. Extrude 20mm leaving the two circles deselected which leaves the holes going through the block.

<div style="text-align: center; margin-bottom: 20px;">
  <b>Base Dimensions</b><br>
  <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Motor%20Mount/basedimensions.png?raw=true width="500" height="200">
</div>


<div style="text-align: center; margin-bottom: 20px;">
  <b>Base Extrude</b><br>
  <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Motor%20Mount/baseextrude.png?raw=true width="500" height="350">
</div>

<br><br> <!-- Extra line break -->

next step is to carve out the hole for the DC motor and to create the shape of the mount itself. Make a sketch on the side and then used the line tool just selecting points then extruding through. The motor hole has to follow the specification of its real life counterpart, sketch a circle of 12mm and a square of 10mm from the circles centre, this leaves the centre part ready for the extrusion process.

<table>
  <tr>
    <td style="text-align: center;">
      <b>Mount Shape</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Motor%20Mount/mount%20shape.png?raw=true width="470" height="130">
    </td>
    <td style="text-align: center;">
      <b>Extrude Cut</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Motor%20Mount/blockextr.png?raw=true width="500" height="180">
    </td>
  </tr>
</table>


<br><br> <!-- Extra line break -->

Between the PCB and mount we need 3mm clearance. extrude the offset circles on the surface to 3mm and then chamfer them down giving a ramped effect. Pure for aesthetics extra edges can be filleted to be smooth and rounded.

<table>
  <tr>
    <td style="text-align: center;">
      <b>Offset Circle Extrude + Offset</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Motor%20Mount/chamfer.png?raw=true width="500" height="130">
    </td>
    <td style="text-align: center;">
      <b>Filleted Edges</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Motor%20Mount/fillet.png?raw=true width="500" height="150">
    </td>
  </tr>
</table>
<br><br> <!-- Extra line break -->

In order to have the mount screws fit correctly a horizontal extrude is needed on the underside. An extrude was made on the side sketch of the mount with and offset creating a square within the middle. Fillet the edge, this will make attaching parts easier later on.

<div style="text-align: center; margin-bottom: 20px;">
  <b>Flat Extrude for Screw Nuts and extras</b><br>
  <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Motor%20Mount/bolt%20space.png?raw=true width="500" height="200">
</div>

<br><br> <!-- Extra line break -->

For character to make the mounts match the "Paw" shape of the PCB base, cut out 12.5mm by 9mm from the edge by creating a sketch and extruding through.


<table>
  <tr>
    <td style="text-align: center;">
      <b>Paw Shape</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Motor%20Mount/paw%20gap.png?raw=true width="500" height="200">
    </td>
    <td style="text-align: center;">
      <b>Filleted Edges</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Motor%20Mount/paw%20fillet.png?raw=true width="500" height="250">
    </td>
  </tr>
</table>


<br><br> <!-- Extra line break -->


To create the motor mounts counterpart create a construction plane that is offset far enough to fit the mirror image. (26mm from the side plane)

<div style="text-align: center; margin-bottom: 20px;">
  <b>Construction Plane</b><br>
  <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Motor%20Mount/construction%20plane.png?raw=true width="500" height="250">
</div>


<div style="text-align: center; margin-bottom: 20px;">
  <b>Mirror Mount</b><br>
  <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Motor%20Mount/mount%20mirror.png?raw=true width="500" height="240">
</div>

<br><br> <!-- Extra line break -->

The last touch on the mounts was to add text to the them. Create sketches on the flat surfaces, choose text and type the writing. Follow this with using the alignment option to have the text centered within box. Extrude the Text by 1mm.



<table>
  <tr>
    <td style="text-align: center;">
      <b>How's My</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Motor%20Mount/hows.png?raw=true width="500" height="220">
    </td>
    <td style="text-align: center;">
      <b>Driving</b><br>
      <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Motor%20Mount/drivingtxt.png?raw=true width="500" height="220">
    </td>
  </tr>
</table>

<br><br> <!-- Extra line break -->

Going back into Fusion 360 you can create an assembly with all current parts which should look like this:

<div style="text-align: center; margin-bottom: 20px;">
  <b>Motor Mount + PCB Assembly </b><br>
  <img src=https://github.falmouth.ac.uk/LS297804/COMP207-project/blob/main/Documentation/Screenshot%20&%20Photos/Motor%20Mount/Assembly%209.png?raw=true width="1487" height="746">
</div>

<br><br> <!-- Extra line break -->

---
### 5. **Arduino IDE - PCB Assembly & Testing**

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

---





---

## License  
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.  
