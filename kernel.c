
/* A simple Kernel that dispalys a message
Preethi Rajagopalan 

*/
int main ()
{
	putInMemory (0xB000, 0x8000, 'H');
	putInMemory (0xB000, 0x8001, 0x7);
	putInMemory (0xB000, 0x8002, 'E');
	putInMemory (0xB000, 0x8003, 0x7);
	putInMemory (0xB000, 0x8004, 'L');
	putInMemory (0xB000, 0x8005, 0x7);
	putInMemory (0xB000, 0x8006, 'L');
	putInMemory (0xB000, 0x8007, 0x7);
	putInMemory (0xB000, 0x8008, 'O');
	putInMemory (0xB000, 0x8009, 0x7);
	putInMemory (0xB000, 0x800A, 'W');
	putInMemory (0xB000, 0x800B, 0x7);
	putInMemory (0xB000, 0x800C, 'O');
	putInMemory (0xB000, 0x800D, 0x7);
	putInMemory (0xB000, 0x800E, 'R');
	putInMemory (0xB000, 0x800F, 0x7);
	putInMemory (0xB000, 0x8010, 'L');
	putInMemory (0xB000, 0x8011, 0x7);
	putInMemory (0xB000, 0x8012, 'D');
	putInMemory (0xB000, 0x8013, 0x7);
	
			while(1){
				
			}
			
	return 0;
}
