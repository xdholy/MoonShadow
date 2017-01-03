--require "Content"

INVALID_ID = -1

CONTENT = 
{
	[1] = 
	{
		index = 1,
		msg = "第一条",
		next_idx = 2,
		pre_idx = INVALID_ID,
		has_option = false,
		options = {},
	},

	[2] = 
	{
		index = 2,
		msg = "dierjiao",
		next_idx = 3,
		pre_idx = 1,
		has_option = true,
		options = {3,4},
	},
}

function LoadContent()
	print(#CONTENT )
	for i=1, #CONTENT do
		local cont = CONTENT[i]

		print(cont.index)
		LoadGameCont(cont.index, cont.next_idx, cont.pre_idx, cont.msg, 
			cont.has_option, cont.options[1], cont.options[2])
	end
	print("Content loaded")
end

print("Load Content.")
LoadContent()
print("Game Start!")


