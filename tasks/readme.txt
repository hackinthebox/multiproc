Task1 
	Create a daemon program. 
	The program will fork a child process , then terminate the parent process.
	The child process will live on and be inherited by init.
	The child process will write some data to a log file and then exit.

Task2
	Create a pipe.
	The parent process will fork a child process.
	The child process will attach it's stdin to the input side of the pipe.
	The parent process will attach it's output to the output side of the pipe.
	The parent process wil open and read a file containing a list of numbers 
	The child process will recieve these numbers through the pipe and 'sort' them.

Task3
	Create a subprocess pool.
	The parent process will read numbers from a file.
	These numbers will be passed to the subprocesses using IPC SYS5 Message Queue.
	The Child process will lock and write the received message to a shared file.
	The Parent process will signal the child processes to terminate once the file is read.
	The parent process will then reap the dead processes with a signal handler.
