# Test of Reference Environment for ECE 3574

Prerequisite: you have installed the course development environment as instructed. 

1. Clone this repository, e.g.

```
cd ~workspace
git clone 
```

2. Configure and build the software on your host machine, e.g. using the command line

```
cd ece3574-f21-test
mkdir native-build && cd native-build
cmake ..
make
```

3. Provision and start the reference environment VM using the following commands

```
cd ~workspace/ece3574-test
vagrant up
vagrant ssh
```

4. Configure and build the software in the reference environment, e.g.

```
cd ~
cmake /vagrant
make
```
