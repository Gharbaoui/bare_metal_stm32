### Bare Metal Stm32

##### *Build Process*

**Pre-Processing**


![](./pics/pre_processing.png)
```
all macros are resolved at this stage
```

after pre-precosseing

![](./pics/pre_processing_after.png)

**Code Generation**

```
at this point we got the pre-processed file and we 
convert it to assembly language
```

before

![](./pics/pre_before.png)

after

![](./pics/assembly.png)

**Assembler**

```
assembly mnemonics are converted to opcodes
output will relocatble object file *.o
```

before

![](./pics/assembly.png)

after

![](./pics/relocatble.png)

#### Linker

```
when we get the relocatble files linker combine them
and give us one binary file
```

#### Memeory map

![](./pics/memory_sram.png)

##### *Complier attibutes*

![](./pics/gcc_section_placement.png)
![](./pics/reserved_first_place_ivt.png)
