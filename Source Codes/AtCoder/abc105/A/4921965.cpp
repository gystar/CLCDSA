#include <iostream>

int main()
{
	long N, K;
	std::cin >> N >> K;
	long ans;

	if ( K != 0 )
	{
		// ?????????????????????????????1????
		ans = ( ( N % K ) != 0 );
	}
	else
	{
		// 0??????????????0??????�?
		ans = 0;
	}

	std::cout << ans << std::endl;

	return ( 0 );
}