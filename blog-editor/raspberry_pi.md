
---
title : Unboxing The Raspberry Pi
author : Srisivan.k
...

I had been yearning for the Raspberry Pi since my father said he would buy me
one. But he set forth a challenge that I had to finish. The challenge was
this: I had to write a simple, but eligible program about the working of a
remote, based on the observations and researching how remotes work. 

I worked hard for one week, writing the program, researching about it and
taking help from others. Finally I reached a program, that would be enough. My
father accepted. Here's the program that I wrote :
```
answer = input('''Welcome. Please enter on for executing the program, and Ctrl
+C for terminating it. ''')

if (answer == "on"):
	for i in range(0, 100):
		user_input = input()
		var channel = 0
		if (user_input == i):
			channel = user_input
			if (user_input == "channel +"):
				channel =+ 1
			if (user_input == "channel -"):
				channel =- 1

```
