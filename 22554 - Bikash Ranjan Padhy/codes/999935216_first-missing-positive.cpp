const static auto initialize = []
{ std::ios::sync_with_stdio(false); 
std::cin.tie(nullptr); 
std::cout.tie(nullptr);
return nullptr; }();

class Solution
{
public:
	int firstMissingPositive(std::vector<int>& nums)
	{
		nums.erase(std::remove_if(std::begin(nums), std::end(nums),
        [](auto x) { return x <= 0; }), std::end(nums));

        auto const n = static_cast<int>(std::size(nums));
        // for(auto x: nums) 
        //     if(x<=0) x=n+2;
		
        // int n= nums.size();
		for (auto x : nums)
		{
			while (x <= n && nums[x - 1] != x) { std::swap(x, nums[x - 1]); }
		}

		for (auto i = 0; i != n; ++i)
		{
			if (nums[i] != i + 1) { return i + 1; }
		}

		return n + 1;
	}
};