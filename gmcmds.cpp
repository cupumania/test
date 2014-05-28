   if(strcmp(command, "test")==0)
    {
	    CPlayer* otherclient = GetClientByCharName( thisclient->CharInfo->charname );
    	if(otherclient==NULL)
        	return true;
 
	    int classid = otherclient->CharInfo->Job;
 
        if ((tmp = strtok(NULL, " "))==NULL) 
			return true;
		int i=atoi(tmp);
		int skillid=otherclient->cskills[i].id;
		int level=otherclient->cskills[i].level;
		Log(MSG_ERROR, "user id: %i level: %i %i", skillid, level, skillid+level);
        CSkills* skill = GServer->GetSkillByID(skillid+level-1);
        if( skill == NULL ){
		}else{
			Log(MSG_ERROR, "skill id: %i level: %i", skill->id, skill->level);
		}
    	return true;
	} else
