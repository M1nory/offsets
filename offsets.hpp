namespace RBX {
    namespace Offsets {
        enum DataModel : uint32_t {
            GameID = 0x198,
            PlaceID = 0x1A0,
            FakeDataModelPointer = 0x703a758,
            FakeDataModelToDataModel = 0x1c0,
            DataModelToRenderView1 = 0x1D8,
            DataModelToRenderView2 = 0x8,
            DataModelToRenderView3 = 0x28,   
            RenderToFakeDataModel = 0x38,
            IsLoaded = 0x6A0,
            AttributeList = 0x138,
            AttributeToNext = 0x70,
            AttributeToValue = 0x30, 
            OnDemandInstance = 0x30
        };
        enum Instance : uint32_t {
            TextLabelText = 0xe00,
            ChildSize = 0x8,
            StringSize = 0x10,
            ClassNameString = 0x8,
            ClassDescriptor = 0x18,
            PropertyDescriptor = 0x3C0,
            ClassName = 0x18,
            Name = 0x88,
            Children = 0x68,
            Parent = 0x58,
            Adornee = 0xD8,
            value = 0xD8,
            propertiesStart = 0x38,
            propertiesEnd = 0x48
        };
        enum Player : uint32_t {
            ModelInstance = 0x328,
            Team = 0x248,
            TeamColor = 0xD8,
            LocalPlayer = 0x128,
            CharacterAppearanceId = 0x260,
            PhysicsSenderMaxBandwidthBps = 0x5e96f10
        };
        enum Humanoid : uint32_t {
            WalkSpeed = 0x1DC,
            WalkSpeedCheck = 0x3B8,
            HumanoidState = 0x870,
            HumanoidStateId = 0x20,
            JumpPower = 0x1B8,
            Sit = 0x1E3,
            DisplayName = 0x118,
            UserID = 0x270,
            MoveDirection = 0x160,
            Health = 0x19C,
            MaxHealth = 0x1BC,
            Rigtype = 0x1D0,
            MeshId = 0x2d8,
            TextureID = 0x308,
            BasePartColor = 0x1c4,
            Anchored = 0x307
        };
        enum Part : uint32_t {
            Primitive = 0x178,
            PrimitiveGravity = 0x120,
            PrimitiveValidateValue = 0x6,
            PrimitivesPointer1 = 0x3D8,
            PrimitivesPointer2 = 0x210,
            CFrame = 0x130,
            PartSize = 0x254,
            Position = 0x154,
            Rotation = 0x130,
            CanCollide = 0x307,
            CanCollideCheck = 0x307,
            Velocity = 0x160,
            Material = 0x2D8,
            Transparency = 0xF8
        };
        enum Input : uint32_t {
            MouseSensitivity = 0x70b0870,
            FramePositionOffsetX = 0x4C4,
            FramePositionOffsetY = 0x4CC,
            MousePosition = 0xF4,
            InputObject = 0x118,
            Tool_Grip_Position = 0x45C
        };
        enum Camera : uint32_t {
            CameraRotation = 0x100,
            Camera = 0x450,
            CameraMode = 0x2C0,
            CameraPos = 0x124,
            CameraType = 0x160,
            CameraSubject = 0xF0,
            CameraMaxZoom = 0x2B8,
            CameraMinZoom = 0x2BC,
            CameraZoomLevel = 0x2B8 + 0x2BC,
            FOV = 0x168
        };
        enum Workspace : uint32_t {
            JobId = 0x140,
            Workspace = 0x180,
            Gravity = 0x968,
            AnimationId = 0xD8,
        };
        enum PerformanceStatus : uint32_t {
            Ping = 0xD0
        };
        enum VisualEngine : uint32_t {
            RenderJobToRenderView = 0x218,
            ViewportSize = 0x300,
            ViewMatrix = 0x4B0,
            Dimensions = 0x720,
            VisualEngine = 0x10
        };
        enum SkyBox : uint32_t {
            SkyboxBk = 0x108,
            SkyboxDn = 0x130,
            SkyboxFt = 0x158,
            SkyboxLf = 0x180,
            SkyboxRt = 0x1A8,
            SkyboxUp = 0x1D0,
            StarCount = 0x228,
            CelestialBodiesShown = 0x230
        };
    }
}
