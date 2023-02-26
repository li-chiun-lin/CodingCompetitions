# Problem

An IP (Internet Protocol) address is a number that is assigned to each device on the Internet. At the time being, most devices use version four of this protocol (IPv4). An IPv4 address is a 32-bit string. IPv4 addresses are normally represented in dot-decimal notation, which consists of four decimal numbers called octets, each ranging from $0$ to $255$ (inclusive), separated by dots, e.g., **172.16.254.1**. Each octet represents a group of $8$ bits (one byte) of the address. The first $8$ bits of the string (when interpreted as an unsigned integer, with the most significant bit first) form the first octet, the next $8$ bits form the second octet, and so on.

An IP subnet addresses is used to represent a group of devices that belong to the same network. IP subnet addresses are expressed in the format of an IP address, followed by a slash and then a prefix length ranging from $0$ to $32$. A subnet address stands for all IP addresses that have the same first $P$ bits of the given address, where $P$ is the prefix length. For example **10.8.0.0/9** represents $2^{23}$ addresses that all have **000010100** (the first nine bits of **10.8.0.0**) as their first $9$ bits, that is, **10.0.0.0** through **10.127.255.255**. Note that **10.8.0.0/9** and, for example, **10.0.0.0/9** (or any other address within the subnet) would be equivalent ways to refer to the same subnet, because those addresses start with the same nine bits.

A subnet is normalized if the bits of the address other than the prefix are all zeroes. For example, **10.8.1.0/24** and **10.8.1.2/24** represent the same subnet, but **10.8.1.0/24** is normalized. The normalization of **255.255.255.255/13** is **255.248.0.0/13**.

You will be given a list of subnet addresses, and you must output the shortest ordered list of subnets such that all the addresses are normalized and an address belongs to some subnet in the input if and only if it belongs to some subnet in the output.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow. Each begins with one line with an integer $N$, the number of subnets, and is followed by $N$ more lines, each of which has a subnet addresses. Each subnet address is of the form $A.B.C.D/P$, where $A$, $B$, $C$, and $D$ are integers from $0$ to $255$, inclusive, and $P$ is an integer from $0$ to $32$, inclusive. No integer (apart from $0$) has leading zeroes.
