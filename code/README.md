These are the steps that I typically do in this workshop:

1. We first wire our circuit, using analog pins A4 and A2 and upload `step1.ino` to the Arduino
2. On the second part we add a threshold to trigger a reaction and we look at the ways in which having a static threshold can be problematic (a change of conditions ==> uploading new code)
3. make that threshold dynamic by reading it form a pot
4. once we have a reliable trigger, we move along and trigger something, normally I have a demo ready with some way of triggering sounds. I use [Soundplant](https://soundplant.org/) because it's free, supergood and then they can keep it as part of their toolkit for future projects. A simple sketch in PD or MAX would work too.

Recommendations for materials that can be used for capacitive sensing:

- Aluminium foil is the most common way of getting started, works well as is stable.
- Any kind of fruit, works well and brings an important _silly factor_. Pineapples are great and they have different capacitive readings in their chubby bodies than they have in their leaves.
- Plants are interesting because of the meanings we attach to them as living things and they are great for cap sensing. 
- Anything organic that contains water.


