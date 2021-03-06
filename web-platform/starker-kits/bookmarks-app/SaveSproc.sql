USE [Database]
GO

/****** Object:  StoredProcedure [dbo].[SavePerson]    Script Date: 10/25/2010 21:28:15 ******/
SET ANSI_NULLS ON
GO

SET QUOTED_IDENTIFIER ON
GO

CREATE PROCEDURE [dbo].[SavePerson]
	@ID INT,
	@NAME VARCHAR(50),
	@CITY VARCHAR(50),
	@PHONENO VARCHAR(50)
AS
BEGIN
	IF(@ID = -1)
	BEGIN
		INSERT INTO PERSON(NAME,CITY,PHONENO) VALUES(@NAME,@CITY,@PHONENO)
		SET @ID = SCOPE_IDENTITY();
	END
	ELSE
	BEGIN
		UPDATE PERSON
		SET NAME = @NAME,CITY=@CITY,PHONENO=@PHONENO
		WHERE ID=@ID
	END
	SELECT @ID;
END

GO


