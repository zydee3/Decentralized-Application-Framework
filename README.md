# Starting Off
The project is built in jetbrain's clion IDE. You should be able to just open the file and compile straight away as the project was set up already for you. Connect your github so you can make pull requests to the main branch.

# DAPPF
I created both the work [example] environment and library itself under a single project. The work enviornment compiles down and ran as an executable. The framework is compiled to a shared library which cannot be ran as a standalone. 

# Framework
Within the framework are four main directories which pertains to each layer of the framework:
 - Layer 1: Net (Communication Layer)
 - Layer 2: Security
 - Layer 3: Data
 - Layer 4: Handlers (Processing)

Within each directory the respective directories are meta files. The meta file will hold meta data to the main files within the module. A meta file is like that of an inner class to a parent class. Using a game as an example, an example of meta data to Player class is PlayerStats which holds the stats of the player. Meta data allows us to break apart classes into smaller more organized classes in order to premote clean code and precent god classes.

# Modules TODO


<pre>No.</pre> | <pre>Module                           </pre>| <pre>Status                     </pre>    | <pre>Who</pre>
:------------  | :------------                               | :-------------| :-------------
1.             | Network Node Connect and Disconnect         | <font color="blue"> In Progress   </font> | Kirill
2.             | Network Node Analyzer                       | <font color="red"> Incomplete     </font> | 
3.             | Network API                                 | <font color="blue"> In Progress   </font> | Garrett
4.             | Packet Reader and Writer                    | <font color="green"> Completed    </font> |  Vincent
5.             |Packet Compress and Decompress               | <font color="red"> Incomplete    </font> | 
6.             | Packet Encrypt and Decrypt                  | <font color="red"> Incomplete    </font> | 
7.             | Data Serializer and Deserializer            | <font color="red"> Incomplete    </font> | 
8.             | Data Validator                              | <font color="red"> Incomplete    </font> | 
9.             | Data Cache                                  | <font color="red"> Incomplete    </font> |
10.            | Data Spooler                                | <font color="red"> Incomplete    </font> |
11.            | Task Pool                                   | <font color="red"> Incomplete    </font> |
12.            | Delegates                                   | <font color="red"> Incomplete    </font> |
13.            | Handlers                                    | <font color="red"> Incomplete    </font> | 
14.            | Listeners                                   | <font color="red"> Incomplete    </font> |
15.            | Example Project                             | <font color="blue"> In Progress   </font> | *
