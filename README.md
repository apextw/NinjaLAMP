<div class="background-color:#fffbdd">

### :izakaya_lantern: NinjaLAMP needs Arduino programmer's help!

<img src="https://github.com/hisashin/NinjaLAMP/blob/master/images/upgrading.jpg" alt="upgrading" width="600">

In April, NinjaLAMP was released just after a week of rapid prototyping by @hisashin and @maripo. Now @hisashin upgraded its PCB and 3d model with widely used [Seeeduino Xiao](https://wiki.seeedstudio.com/Seeeduino-XIAO/), [I2C SSD1306 LCD](https://www.aliexpress.com/item/33028828291.html?spm=a2g0s.9042311.0.0.26274c4dPiM0Ki), [I2C 2kb EEPROM](https://www.digikey.com/en/products/detail/stmicroelectronics/M24C02-RMN6TP/2038677) and 3 tact switches.
- [Hardware updrade is done (2020 Nov 10)](https://www.facebook.com/hisakawa/posts/10158727487954481)
- [New Package (2020 Nov 6)](https://www.facebook.com/hisakawa/posts/10158717794254481)
- [New PCB (2020 Oct 28)](https://www.facebook.com/hisakawa/posts/10158696375544481)
- [KiCad](https://github.com/hisashin/NinjaLAMP/tree/master/kicad/NinjaLAMP)
- [3d model](https://gallery.autodesk.com/projects/149287/ninjalamp)

NinjaLAMP will get following benefits from this upgrade.
- **Standalone** : No need to be connected to PC anymore. LCD displays all informations and we can choose menu by tapping switches as up/down/ok buttons.
- **Programmable** : We can configure custom temperature profiles with switches and store them in EEPROM.
- **Manufacture Friendly** : PCB supports [Seeed PCBA](https://www.seeedstudio.com/prototype-pcb-assembly.html) service and here is their quotation. All electric parts are included and soldered except $1.66 LCD and $0.46 thermistor. With $10 heater and $10 tube holder, NinjaLAMP can be manufactured less than $40. That's great advantage for screening mass poplulation.

<img src="https://github.com/hisashin/NinjaLAMP/blob/master/images/seeed_quotation.jpg" alt="seeed_quotation" width="300">

It's not difficult to add some codes to [current Arduino sources](https://github.com/hisashin/NinjaLAMP/tree/master/arduino) to support new features above. But currently Shingo and Mariko are focusing on development of [Ninja qPCR](https://hackaday.io/project/174501-covid-19-detectors-300-real-time-pcr-50-lamp/) and it will take long time to be completed if we need to wait until qPCR is done.
If you want to help NinjaLAMP, contact us and we will send new hardware so that all you need to do is to connect it to your PC and write codes on Arduino.

</div>

# NinjaLAMP

**Most precise GPL v3 Open source [LAMP (Loop-mediated isothermal amplification)](https://en.wikipedia.org/wiki/Loop-mediated_isothermal_amplification) machine based on Arduino**. Less than 0.3 degree celsius accuracy can be expected after calibration.

![Header](https://github.com/hisashin/NinjaLAMP/blob/master/images/header.png "header")

### References for COVID-19 detection

- [Rapid colorimetric detection of COVID-19 coronavirus using a reverse tran-scriptional loop-mediated isothermal amplification (RT-LAMP) diagnostic plat-form: iLACO](https://www.medrxiv.org/content/10.1101/2020.02.20.20025874v1)
- [Rapid Molecular Detection of SARS-CoV-2 (COVID-19) Virus RNA Using Colorimetric LAMP](https://www.medrxiv.org/content/10.1101/2020.02.20.20025874v1)

### Why NinjaLAMP?
- **Precise** with thermal simulation model sensing not only tube holder but air
![Simulation](https://raw.githubusercontent.com/hisashin/NinjaLAMP/master/images/heat_simulation/illustration_s.png)
- **Easy to build** : Only 4 resistors, 1 mosfet, 2 thermistors are indespensable on [circuit](https://github.com/hisashin/NinjaLAMP/tree/master/eagle).
- **Easy to use** : [Monitor and control](https://github.com/hisashin/NinjaLAMP/wiki/Run-and-monitor-temperature-graph) via SerialPlotter of Arduino.
- **Easy to custom** : [Calibration manual](https://github.com/hisashin/NinjaLAMP/wiki/How-to-use-simulated-sample-temperature) allows you to change core parts.

### Steps

- [BOM (Bill of materials)](https://github.com/hisashin/NinjaLAMP/wiki/BOM,-Bill-of-Materials) to buy
- Solder parts on universal breadboard like bottom photos of [this page](https://github.com/hisashin/NinjaLAMP/tree/master/eagle) or order PCB.
- 3d print [base](https://github.com/hisashin/NinjaLAMP/blob/master/3d/4x4_3d_base.stl) and [cover](https://github.com/hisashin/NinjaLAMP/blob/master/3d/4x4_3d_cover.stl) upside down without support. Use [belt](https://github.com/hisashin/NinjaLAMP/blob/master/3d/4x4_3d_belt.stl) to hold PCB or glue. DXF for lasercut is [here](https://github.com/hisashin/NinjaLAMP/tree/master/dxf) ([3d model](https://gallery.autodesk.com/projects/149287/ninjalamp))
- [Set target temperature](https://github.com/hisashin/NinjaLAMP/wiki/How-to-customize-source-before-uploading)
- [Upload source to Arduino](https://github.com/hisashin/NinjaLAMP/wiki/How-to-upload-the-software)
- [Run and monitor temperature graph](https://github.com/hisashin/NinjaLAMP/wiki/Run-and-monitor-temperature-graph)
- Use cover to keep air temperature high and stable while running.

### Advanced

- [How to use simulated sample temperature](https://github.com/hisashin/NinjaLAMP/wiki/How-to-use-simulated-sample-temperature)
- [How to customize source before uploading](https://github.com/hisashin/NinjaLAMP/wiki/How-to-customize-source-before-uploading)
- [Experiments with multiple temperature stages](https://github.com/hisashin/NinjaLAMP/wiki/Experiments-with-multiple-temperature-stages)
- [How to customize the output](https://github.com/hisashin/NinjaLAMP/wiki/Customizing-the-output)
