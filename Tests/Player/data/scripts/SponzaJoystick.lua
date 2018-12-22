-----------------------------------------------------------------------------------
-- Maratis
-- Jules script test
-----------------------------------------------------------------------------------

-- get objects
Player = getObject("Player")
Head = getObject("Head")


-- scene update
function onSceneUpdate()

	-- get axis
	dx = getAxis("JOY1_X")
	dy = getAxis("JOY1_Y")
	dz = getAxis("JOY1_R")
	dw = getAxis("JOY1_U")
	
	if dx > -0.2 and dx < 0.2 then dx = 0 end
	if dy > -0.2 and dy < 0.2 then dy = 0 end
	if dz > -0.2 and dz < 0.2 then dz = 0 end
	if dw > -0.2 and dw < 0.2 then dw = 0 end
	
	-- rotate Player (X mouse)
	rotate(Player, {0, 0, -1}, dw*2)
	
	-- rotate Head (Y mouse)
	rotate(Head, {-1, 0, 0}, dz*2, "local")	
	rotation = getRotation(Head)
	if rotation[1] > 90 then
		rotation[1] = 90
	elseif rotation[1] < -90 then
		rotation[1] = -90
	end

	setRotation(Head, rotation)
	
	-- move
	addCentralForce(Player, {dx*3, -dy*5, 0}, "local")
	
end