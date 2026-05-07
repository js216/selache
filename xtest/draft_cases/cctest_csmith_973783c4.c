// SPDX-License-Identifier: MIT
// cctest_csmith_973783c4.c --- cctest case csmith_973783c4 (csmith seed 2536997828)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x23c1ac2c */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 2536997828 -o /tmp/csmith_gen_kh90jvx5/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   signed f0 : 16;
   int32_t  f1;
   unsigned f2 : 29;
};
#pragma pack(pop)

union U1 {
   uint32_t  f0;
   int8_t  f1;
};


static int32_t g_2 = (-6L);
static int16_t g_40 = 0xA5B0L;
static int16_t g_50[6][1] = {{0x9BDDL},{0x9BDDL},{0x9BDDL},{0x9BDDL},{0x9BDDL},{0x9BDDL}};
static int32_t g_63 = 1L;
static union U1 g_74 = {0x1EB61364L};
static int32_t g_79 = 0x86CB52F5L;
static int32_t g_80 = (-4L);
static uint8_t g_85[2][5][6] = {{{1UL,0xF1L,251UL,0xF1L,1UL,255UL},{0xEDL,251UL,1UL,0x66L,1UL,0x7EL},{1UL,1UL,249UL,251UL,0UL,0x7EL},{0xF1L,255UL,1UL,0x4AL,249UL,255UL},{0UL,0UL,251UL,0xEDL,0x4AL,0x4AL}},{{0xE5L,0UL,0UL,0xE5L,255UL,249UL},{0UL,253UL,8UL,0x72L,0x4AL,0UL},{251UL,253UL,1UL,253UL,0x4AL,0x53L},{0x53L,251UL,0x2CL,255UL,0xF1L,0xEDL},{0x7EL,1UL,0x59L,255UL,249UL,255UL}}};
static uint64_t g_119 = 0xD3ABBA7F7E758ACFLL;
static uint8_t g_125 = 0UL;
static int32_t g_129[2][2][6] = {{{0x31A558FFL,(-1L),1L,0L,1L,(-1L)},{1L,0x31A558FFL,1L,0x8FF3A18FL,4L,0L}},{{0x493B4F45L,0x8FF3A18FL,(-1L),(-1L),0x8FF3A18FL,0x493B4F45L},{(-1L),0x8FF3A18FL,0x493B4F45L,0L,4L,1L}}};
static int32_t g_160 = 0xC30530C7L;
static struct S0 g_165 = {50,0xEAB2E5F2L,11834};
static struct S0 *g_164 = &g_165;
static struct S0 **g_163[5][1] = {{&g_164},{&g_164},{&g_164},{&g_164},{&g_164}};
static int8_t g_206[2] = {(-2L),(-2L)};
static struct S0 ***g_216 = &g_163[2][0];
static struct S0 ****g_215 = &g_216;
static union U1 *g_224 = &g_74;
static union U1 **g_223 = &g_224;
static int32_t *g_229 = (void*)0;
static int32_t **g_228 = &g_229;
static int64_t g_256 = (-1L);
static uint32_t g_285 = 0x739A8D6DL;
static int64_t **g_325 = (void*)0;
static uint16_t g_348 = 0xC7CBL;
static uint64_t g_372 = 0UL;
static const int16_t g_432 = 0xB0DFL;
static const int16_t *g_431 = &g_432;
static int8_t *g_558 = &g_206[1];
static int8_t **g_557 = &g_558;
static uint32_t g_602 = 0x89F613E0L;
static uint32_t *g_601[3][1] = {{&g_602},{&g_602},{&g_602}};
static uint32_t **g_600 = &g_601[2][0];
static uint64_t *g_619 = (void*)0;
static uint64_t **g_618 = &g_619;
static int32_t g_675[4][5][5] = {{{(-10L),(-10L),(-10L),(-10L),(-10L)},{0x82EEB907L,0x82EEB907L,0x82EEB907L,0x82EEB907L,0x82EEB907L},{(-10L),(-10L),(-10L),(-10L),(-10L)},{0x82EEB907L,0x82EEB907L,0x82EEB907L,0x82EEB907L,0x82EEB907L},{(-10L),(-10L),(-10L),(-10L),(-10L)}},{{0x82EEB907L,0x82EEB907L,0x82EEB907L,0x82EEB907L,0x82EEB907L},{(-10L),(-10L),(-10L),(-10L),(-10L)},{0x82EEB907L,0x82EEB907L,0x82EEB907L,0x82EEB907L,0x82EEB907L},{(-10L),(-10L),(-10L),(-10L),(-10L)},{0x82EEB907L,0x82EEB907L,0x82EEB907L,0x82EEB907L,0x82EEB907L}},{{(-10L),(-10L),(-10L),(-10L),(-10L)},{0x82EEB907L,0x82EEB907L,0x82EEB907L,0x82EEB907L,0x82EEB907L},{(-10L),(-10L),(-10L),(-10L),(-10L)},{0x82EEB907L,0x82EEB907L,0x82EEB907L,0x82EEB907L,0x82EEB907L},{(-10L),(-10L),(-10L),(-10L),(-10L)}},{{0x82EEB907L,0x82EEB907L,0x82EEB907L,0x82EEB907L,0x82EEB907L},{(-10L),(-10L),(-10L),(-10L),(-10L)},{0x82EEB907L,0x82EEB907L,0x82EEB907L,0x82EEB907L,0x82EEB907L},{(-10L),(-10L),(-10L),(-10L),(-10L)},{0x82EEB907L,0x82EEB907L,0x82EEB907L,0x82EEB907L,0x82EEB907L}}};
static int32_t *g_677 = (void*)0;
static struct S0 *****g_727 = (void*)0;
static int32_t *g_763 = &g_2;
static int32_t ** const g_762 = &g_763;
static int32_t ** const *g_761 = &g_762;
static uint32_t ****g_779 = (void*)0;
static struct S0 g_845 = {-108,0x398FBBA6L,14740};
static int32_t g_875[1] = {0L};
static union U1 * const *g_907 = &g_224;
static union U1 * const **g_906 = &g_907;
static union U1 * const ***g_905[1][7] = {{&g_906,&g_906,&g_906,&g_906,&g_906,&g_906,&g_906}};
static int8_t g_1038[4] = {0xCDL,0xCDL,0xCDL,0xCDL};
static int64_t *g_1043[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int64_t **g_1042 = &g_1043[5];
static uint32_t *g_1097 = (void*)0;
static uint32_t **g_1096 = &g_1097;
static uint32_t **g_1100 = &g_1097;
static uint64_t g_1104[2][1] = {{18446744073709551608UL},{18446744073709551608UL}};
static const union U1 g_1194 = {4294967295UL};
static const union U1 g_1196 = {4294967286UL};
static const union U1 *g_1195 = &g_1196;
static int32_t g_1259 = 0x0BA90878L;
static int32_t *g_1328 = &g_80;
static int32_t **g_1327 = &g_1328;
static int64_t ***g_1343 = &g_1042;
static uint8_t g_1405 = 255UL;
static int8_t g_1440[4] = {0L,0L,0L,0L};
static uint32_t ***g_1480 = &g_1096;
static uint32_t ****g_1479 = &g_1480;
static int32_t g_1552 = (-4L);
static struct S0 **g_1615 = &g_164;
static struct S0 *** const g_1614 = &g_1615;
static struct S0 *** const *g_1613[7] = {&g_1614,&g_1614,&g_1614,&g_1614,&g_1614,&g_1614,&g_1614};
static struct S0 *** const **g_1612 = &g_1613[0];
static int32_t g_1617 = 0xC403062FL;
static uint8_t g_1618 = 0UL;
static uint32_t g_1635 = 0xE27A2ACFL;
static int32_t g_1655[5][5] = {{1L,0xA5B509ACL,1L,0xCED801BDL,9L},{0xCED801BDL,1L,0xA5B509ACL,1L,0xCED801BDL},{0xFD778EBEL,1L,0x33EA7CCAL,0xCED801BDL,0x33EA7CCAL},{0x33EA7CCAL,0x33EA7CCAL,0xA5B509ACL,0xCED801BDL,0xD74F8E8EL},{1L,0xFD778EBEL,0xFD778EBEL,1L,0x33EA7CCAL}};
static int32_t * const g_1654 = &g_1655[3][3];
static int32_t * const *g_1653 = &g_1654;
static int32_t * const **g_1652 = &g_1653;
static uint32_t ** const *g_1677 = (void*)0;



static struct S0  func_1(void);
static const struct S0  func_5(int32_t  p_6, const int64_t  p_7, uint32_t  p_8);
static uint16_t  func_19(int16_t  p_20, int8_t  p_21);
static union U1  func_22(uint32_t  p_23, uint32_t  p_24, uint32_t  p_25, uint32_t  p_26, int16_t  p_27);
static int64_t  func_28(uint8_t  p_29, int32_t  p_30, uint64_t  p_31, uint64_t  p_32);
static const int8_t  func_33(uint64_t  p_34);
static uint64_t  func_43(int16_t * p_44, int8_t  p_45, struct S0  p_46, int32_t  p_47, uint16_t  p_48);
static int16_t * func_69(union U1  p_70, uint64_t  p_71, int16_t * p_72);




static struct S0  func_1(void)
{ 
    int32_t l_1698 = (-1L);
    int32_t l_1718[4][3][6] = {{{0L,0L,0xE332184CL,0L,0xE332184CL,0L},{1L,0L,1L,1L,0xE332184CL,0xE332184CL},{1L,0L,0L,1L,0xE332184CL,1L}},{{0L,0L,0xE332184CL,0L,0xE332184CL,0L},{1L,0L,1L,1L,0xE332184CL,0xE332184CL},{1L,0L,0L,1L,0xE332184CL,1L}},{{0L,0L,0xE332184CL,0L,0xE332184CL,0L},{1L,0L,1L,1L,0xE332184CL,0xE332184CL},{1L,0L,0L,1L,0xE332184CL,1L}},{{0L,0L,0xE332184CL,0L,0xE332184CL,0L},{1L,0L,1L,1L,0xE332184CL,0xE332184CL},{1L,0L,0L,1L,0xE332184CL,1L}}};
    uint8_t * const l_1746 = (void*)0;
    uint8_t *l_1747 = (void*)0;
    struct S0 l_1773 = {107,-3L,1550};
    int64_t l_1809 = (-8L);
    int32_t ***l_1810 = &g_1327;
    union U1 ***l_1813[3];
    const int32_t l_1826 = 0xA962AE78L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1813[i] = &g_223;
    for (g_2 = 11; (g_2 == 19); ++g_2)
    { 
        int32_t l_9 = 0L;
        int16_t l_10 = 0L;
        const uint32_t l_1699 = 0x1D7B2BCAL;
        int32_t l_1700 = 8L;
        struct S0 * const *l_1712 = &g_164;
        struct S0 * const * const *l_1711 = &l_1712;
        struct S0 * const * const **l_1710 = &l_1711;
        uint64_t l_1730[5];
        uint32_t l_1742 = 4294967295UL;
        uint32_t l_1751[5][6] = {{0xF3791214L,0xCBA12221L,0xF3791214L,0xCBA12221L,0xF3791214L,0xCBA12221L},{7UL,0xCBA12221L,7UL,0xCBA12221L,7UL,0xCBA12221L},{0xF3791214L,0xCBA12221L,0xF3791214L,0xCBA12221L,0xF3791214L,0xCBA12221L},{7UL,0xCBA12221L,7UL,0xCBA12221L,7UL,0xCBA12221L},{0xF3791214L,0xCBA12221L,0xF3791214L,0xCBA12221L,0xF3791214L,0xCBA12221L}};
        int32_t l_1756 = 0x002FC0A5L;
        int32_t ***l_1758 = &g_1327;
        int32_t ****l_1757 = &l_1758;
        union U1 l_1767[4][2][1] = {{{{1UL}},{{0x5B64E646L}}},{{{1UL}},{{0x5B64E646L}}},{{{1UL}},{{0x5B64E646L}}},{{{1UL}},{{0x5B64E646L}}}};
        uint8_t l_1801[2];
        uint16_t l_1812 = 0UL;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_1730[i] = 18446744073709551615UL;
        for (i = 0; i < 2; i++)
            l_1801[i] = 0x51L;
        (*g_164) = func_5(g_2, (l_9 < l_10), g_2);
        for (g_80 = 3; (g_80 >= 0); g_80 -= 1)
        { 
            uint64_t l_1697 = 5UL;
            int32_t l_1732 = 1L;
            int32_t l_1741 = 0x69B47D9AL;
            struct S0 l_1776 = {245,9L,7584};
            union U1 ****l_1814 = &l_1813[0];
            struct S0 ***l_1824 = &g_163[1][0];
            int32_t l_1827 = 0xF3A2E78CL;
            uint8_t *l_1839 = (void*)0;
            int8_t l_1852[1];
            int i;
            for (i = 0; i < 1; i++)
                l_1852[i] = 0x2CL;
            (**g_216) = (***g_215);
        }
        for (g_602 = (-7); (g_602 == 27); g_602 = safe_add_func_int32_t_s_s(g_602, 5))
        { 
            int32_t *l_1860 = &g_79;
            (*g_762) = (**g_761);
            for (g_79 = 0; (g_79 >= 9); g_79++)
            { 
                uint16_t l_1857 = 2UL;
                --l_1857;
            }
            g_160 = ((*l_1860) ^= l_1718[3][2][5]);
        }
        return l_1773;
    }
    return (*****g_1612);
}



static const struct S0  func_5(int32_t  p_6, const int64_t  p_7, uint32_t  p_8)
{ 
    int16_t *l_49 = &g_50[2][0];
    int32_t l_1355 = 0xA1448946L;
    int32_t l_1567[5][1];
    int8_t l_1568[1][3][3];
    int64_t l_1570 = 0xA58D8AAA09BDE3C7LL;
    uint32_t l_1571 = 4294967295UL;
    union U1 ***l_1605[7];
    union U1 ****l_1604[4][6][2] = {{{&l_1605[2],&l_1605[2]},{&l_1605[2],&l_1605[1]},{&l_1605[2],&l_1605[2]},{&l_1605[2],&l_1605[2]},{&l_1605[2],&l_1605[1]},{(void*)0,&l_1605[2]}},{{&l_1605[3],&l_1605[3]},{&l_1605[2],&l_1605[2]},{&l_1605[2],&l_1605[4]},{&l_1605[3],&l_1605[1]},{&l_1605[5],&l_1605[3]},{&l_1605[2],(void*)0}},{{&l_1605[2],&l_1605[3]},{&l_1605[5],&l_1605[1]},{&l_1605[3],&l_1605[4]},{&l_1605[2],&l_1605[2]},{&l_1605[2],&l_1605[3]},{&l_1605[3],&l_1605[2]}},{{(void*)0,&l_1605[1]},{&l_1605[2],&l_1605[2]},{&l_1605[2],&l_1605[2]},{&l_1605[2],&l_1605[1]},{&l_1605[2],&l_1605[2]},{&l_1605[2],&l_1605[2]}}};
    struct S0 *** const *l_1611 = (void*)0;
    struct S0 *** const **l_1610 = &l_1611;
    uint64_t **l_1619 = &g_619;
    uint32_t *l_1632 = &g_285;
    uint32_t *l_1633 = (void*)0;
    uint32_t *l_1634 = &g_1635;
    int32_t *l_1636 = &g_845.f1;
    struct S0 l_1639 = {0,0xCEE0E938L,20761};
    int32_t * const **l_1650 = (void*)0;
    int32_t * const ***l_1651[6] = {&l_1650,&l_1650,&l_1650,&l_1650,&l_1650,&l_1650};
    int32_t *l_1656 = (void*)0;
    int32_t *l_1657 = &g_875[0];
    uint32_t ** const *l_1675 = &g_1096;
    uint32_t ** const **l_1676[3][6][6] = {{{&l_1675,&l_1675,(void*)0,&l_1675,&l_1675,&l_1675},{&l_1675,(void*)0,&l_1675,&l_1675,&l_1675,&l_1675},{&l_1675,(void*)0,(void*)0,&l_1675,&l_1675,&l_1675},{&l_1675,&l_1675,(void*)0,&l_1675,&l_1675,&l_1675},{&l_1675,&l_1675,&l_1675,&l_1675,(void*)0,&l_1675},{&l_1675,&l_1675,&l_1675,&l_1675,&l_1675,&l_1675}},{{(void*)0,&l_1675,&l_1675,(void*)0,&l_1675,(void*)0},{&l_1675,(void*)0,&l_1675,(void*)0,(void*)0,&l_1675},{(void*)0,&l_1675,&l_1675,&l_1675,&l_1675,&l_1675},{&l_1675,&l_1675,&l_1675,&l_1675,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_1675,(void*)0},{&l_1675,&l_1675,&l_1675,(void*)0,(void*)0,&l_1675}},{{(void*)0,(void*)0,&l_1675,&l_1675,&l_1675,&l_1675},{&l_1675,&l_1675,&l_1675,&l_1675,&l_1675,&l_1675},{&l_1675,&l_1675,&l_1675,&l_1675,&l_1675,&l_1675},{&l_1675,&l_1675,(void*)0,&l_1675,&l_1675,(void*)0},{&l_1675,&l_1675,&l_1675,&l_1675,&l_1675,(void*)0},{&l_1675,&l_1675,&l_1675,&l_1675,(void*)0,&l_1675}}};
    int64_t l_1678 = 0xA7770E0DF5A8F288LL;
    uint32_t l_1679 = 0UL;
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_1567[i][j] = 0xD13ED6E0L;
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
                l_1568[i][j][k] = 0xE6L;
        }
    }
    for (i = 0; i < 7; i++)
        l_1605[i] = &g_223;
lbl_1625:
    for (p_6 = (-24); (p_6 != 4); ++p_6)
    { 
        uint32_t l_52 = 18446744073709551614UL;
        int32_t l_1553 = (-8L);
        const struct S0 l_1556 = {-134,-1L,19382};
        uint32_t l_1557 = 0x02EAFD1CL;
        int32_t *l_1558 = &g_63;
        int32_t *l_1559 = &g_875[0];
        int32_t *l_1560 = &g_1259;
        int32_t *l_1561 = &l_1553;
        int32_t *l_1562 = &g_675[1][2][1];
        int32_t *l_1563 = &g_79;
        int32_t *l_1564 = &g_160;
        int32_t *l_1565 = &g_675[0][3][2];
        int32_t *l_1566[3][1];
        int16_t l_1569[7] = {(-2L),(-2L),0x864DL,(-2L),(-2L),0x864DL,(-2L)};
        int64_t *l_1608 = (void*)0;
        int64_t *l_1609 = &l_1570;
        struct S0 *****l_1616 = &g_215;
        uint64_t ***l_1620[1][1][6];
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_1566[i][j] = (void*)0;
        }
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 6; k++)
                    l_1620[i][j][k] = &g_618;
            }
        }
        for (p_8 = 0; (p_8 >= 25); p_8++)
        { 
            int16_t *l_39[5][2] = {{&g_40,&g_40},{&g_40,&g_40},{&g_40,&g_40},{&g_40,&g_40},{&g_40,&g_40}};
            struct S0 l_51 = {77,0xADB51FD9L,6100};
            uint32_t l_1354 = 0x23629B7BL;
            uint8_t l_1551 = 0UL;
            int i, j;
        }
        --l_1571;
        (*l_1561) = (safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((((~(((*l_49) = (safe_sub_func_int16_t_s_s((!(safe_div_func_int32_t_s_s((((p_7 >= ((safe_add_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_s((l_1571 != (((safe_add_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s((4UL <= ((*l_1565) ^ ((void*)0 == &p_7))), ((((void*)0 == &g_50[3][0]) >= 0x21553EDA06D8860FLL) <= g_348))) , l_49) == &g_348), l_1355)) && (*l_1563)) && 3UL)), p_6)) , 0xA42DAB427F968F3CLL), 0x6C1644FCFFBA929ALL)) >= p_7)) && l_1570) , p_7), (*l_1563)))), (-1L)))) != (-8L))) == l_1567[3][0]) | p_6), (-1L))), p_8));
        (*l_1561) |= ((*l_1562) = (safe_add_func_uint16_t_u_u((safe_div_func_int64_t_s_s(((((safe_mul_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u(((l_1604[2][4][0] == (void*)0) && (safe_add_func_uint16_t_u_u((p_7 <= ((*l_1609) = p_7)), (((g_1612 = l_1610) == l_1616) > ((*l_1564) , 0x351A040C7158F527LL))))), 10)), g_875[0])), l_1571)) > g_1617), 254UL)) && g_845.f0) <= p_6) > g_1618), 0x7A53BF37FCED841DLL)), 0x8A24L)));
        g_618 = l_1619;
    }
    for (p_6 = 0; (p_6 >= 17); ++p_6)
    { 
        (*g_762) = (*g_762);
        for (g_372 = 0; (g_372 == 28); g_372 = safe_add_func_uint64_t_u_u(g_372, 3))
        { 
            if (g_160)
                goto lbl_1625;
        }
        (**g_761) = (*g_228);
    }
    (*l_1636) = (0x0474FD94L == (((((*l_1634) = ((*l_1632) = (safe_mod_func_int16_t_s_s((func_22((safe_add_func_int32_t_s_s((safe_div_func_int64_t_s_s((&l_1568[0][0][2] != ((*g_557) = &l_1568[0][2][2])), p_8)), p_6)), ((l_1571 || p_6) && p_6), l_1567[3][0], p_8, (*g_431)) , l_1567[2][0]), p_7)))) , 0xAAL) , p_6) & l_1568[0][0][2]));
    (*l_1657) &= (safe_sub_func_uint64_t_u_u(((g_40 <= ((*l_1636) = p_7)) , ((l_1639 , (safe_mod_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((((safe_mod_func_int8_t_s_s(0L, (safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(0x51F7L, (((g_1652 = l_1650) != ((((*g_1328) = (l_49 == l_49)) , l_1639) , &g_1327)) >= 65535UL))) >= 0xF1L), p_6)))) != p_6) | p_8), (-8L))) | 18446744073709551612UL), 0xEEL))) == (*l_1636))), 18446744073709551615UL));
    (*l_1657) = (safe_rshift_func_uint8_t_u_s((((((-4L) && ((((*l_1636) = (((((safe_div_func_uint32_t_u_u((+(p_6 < (((safe_rshift_func_uint8_t_u_s((safe_div_func_uint64_t_u_u(g_675[1][2][4], p_6)), 4)) > (p_8 == (safe_mul_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((((safe_lshift_func_uint16_t_u_u(0x84F5L, (safe_div_func_uint32_t_u_u(((g_1677 = l_1675) != (*g_1479)), l_1678)))) < l_1679) ^ g_1038[0]), p_6)), 0x31L)))) != (*l_1636)))), 0x05C78EF6L)) && p_6) > p_7) , p_7) & 0x2132898DD519525DLL)) ^ 0x39EEA699L) == p_8)) <= 18446744073709551610UL) , g_285) && 0xCFL), (*l_1657)));
    return l_1639;
}



static uint16_t  func_19(int16_t  p_20, int8_t  p_21)
{ 
    int8_t l_1358 = (-4L);
    int32_t l_1387 = 0x8FC1BF35L;
    uint64_t *l_1428[3][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_1104[0][0],(void*)0,&g_1104[0][0],(void*)0,&g_1104[0][0],(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    struct S0 *l_1442 = &g_845;
    union U1 l_1531 = {0xA499C00DL};
    const uint32_t *l_1532 = &l_1531.f0;
    int32_t *l_1534 = (void*)0;
    union U1 **l_1540 = (void*)0;
    int32_t *l_1550 = &g_79;
    int i, j;
    if ((safe_rshift_func_int8_t_s_u(l_1358, 2)))
    { 
        int32_t l_1370 = (-2L);
        int8_t **l_1403 = &g_558;
        int32_t *l_1409 = &g_165.f1;
        if ((p_21 , (&l_1358 != (void*)0)))
        { 
            int16_t *l_1365 = &g_40;
            int32_t l_1371 = 1L;
            int32_t l_1372[2][7][2] = {{{0x6E047142L,0L},{0x6F1AF578L,0x31CE0821L},{0x6F1AF578L,0L},{0x6E047142L,0x6F1AF578L},{0L,0x31CE0821L},{1L,1L},{0x6E047142L,1L}},{{1L,0x31CE0821L},{0L,0x6F1AF578L},{0x6E047142L,0L},{0x6F1AF578L,0x31CE0821L},{0x6F1AF578L,0L},{0x6E047142L,0x6F1AF578L},{0L,0x31CE0821L}}};
            int8_t * const *l_1404 = &g_558;
            int i, j, k;
            l_1372[0][2][0] &= ((safe_unary_minus_func_uint16_t_u((p_21 ^ (p_21 < (safe_add_func_int64_t_s_s((0L == (((*g_558) = (~((((safe_rshift_func_int16_t_s_u(((*l_1365) = p_20), 2)) | (safe_sub_func_uint32_t_u_u((0L ^ (safe_sub_func_int64_t_s_s((((-1L) <= p_21) <= p_20), p_21))), p_20))) == l_1358) || p_21))) & l_1370)), 0x68E531544B766DD4LL)))))) , l_1371);
            l_1387 ^= ((safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(0L, p_21)), (safe_add_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u(((safe_mod_func_int32_t_s_s((0x1473A20D0F6C5C15LL && ((safe_mul_func_int16_t_s_s(p_21, g_875[0])) < 0x57489C170450322BLL)), (safe_mod_func_int16_t_s_s((-2L), 0x08F5L)))) | 1UL), l_1358)), 0x4FB22ED2L)))) > p_21);
            for (l_1371 = 0; (l_1371 <= 0); l_1371 += 1)
            { 
                uint16_t l_1402 = 0xBFBDL;
                int32_t l_1406[2][7] = {{0x462AAC4DL,0x462AAC4DL,0x1B8C0670L,0x462AAC4DL,0x462AAC4DL,0x1B8C0670L,0x462AAC4DL},{0x462AAC4DL,0xEDD5816EL,0xEDD5816EL,0x462AAC4DL,0xEDD5816EL,0xEDD5816EL,0x462AAC4DL}};
                int32_t l_1407 = 0x9D136501L;
                int32_t l_1408 = 0L;
                int i, j;
                for (g_80 = 1; (g_80 >= 0); g_80 -= 1)
                { 
                    int i, j;
                    l_1408 &= ((((((safe_div_func_int16_t_s_s(((((l_1407 |= (l_1406[0][6] = ((((safe_lshift_func_int8_t_s_u(((1UL && (safe_add_func_int16_t_s_s((((safe_div_func_int8_t_s_s((g_1104[(l_1371 + 1)][l_1371] ^ (safe_sub_func_uint8_t_u_u(8UL, (safe_rshift_func_int8_t_s_s((((safe_lshift_func_int8_t_s_s(0x33L, (*g_558))) , (*g_223)) != (((4294967295UL != p_20) | l_1402) , (void*)0)), (**g_557)))))), p_20)) , l_1403) == l_1404), p_20))) < p_21), p_21)) | g_1104[(l_1371 + 1)][l_1371]) < g_1405) > p_20))) != 0x0566595BL) , 0x6CL) && g_160), p_21)) | p_21) , p_20) , g_1104[(l_1371 + 1)][l_1371]) < 0L) <= g_79);
                }
                l_1409 = &l_1371;
                for (g_165.f1 = 0; (g_165.f1 <= 0); g_165.f1 += 1)
                { 
                    uint16_t *l_1426 = &g_348;
                    uint16_t *l_1427 = &l_1402;
                    uint8_t *l_1435[6];
                    int32_t l_1441 = 0xF080EF8DL;
                    int i, j;
                    for (i = 0; i < 6; i++)
                        l_1435[i] = (void*)0;
                    l_1407 = (~(safe_rshift_func_int8_t_s_u((((safe_mod_func_uint8_t_u_u((((*l_1427) = ((*g_558) <= (((safe_lshift_func_uint16_t_u_s(((*l_1426) = ((safe_sub_func_uint32_t_u_u((l_1408 = ((safe_mod_func_uint8_t_u_u(((0x8DDD7DD9L <= (~(safe_sub_func_int32_t_s_s((((**g_762) ^ ((safe_div_func_int64_t_s_s((0xEF91L || 2L), p_21)) > (((**g_600) ^= ((void*)0 == &g_619)) > 0UL))) & (*g_558)), 0x3D7E489AL)))) && p_20), l_1387)) & 4294967292UL)), l_1407)) , p_20)), l_1406[0][6])) >= (*g_558)) , 0xC1L))) ^ p_20), p_20)) , l_1428[0][2]) == (*g_618)), 7)));
                    l_1441 ^= ((l_1358 <= (safe_mul_func_uint8_t_u_u((p_21 ^ (l_1407 & 0xCFD0L)), ((g_1104[g_165.f1][l_1371]--) || ((p_21 ^ (safe_add_func_uint8_t_u_u((--g_85[0][3][4]), (g_206[l_1371] = ((safe_add_func_int64_t_s_s((g_2 , 0L), l_1358)) <= g_125))))) > p_20))))) , g_1440[1]);
                }
            }
        }
        else
        { 
            struct S0 **l_1443 = &l_1442;
            (*l_1443) = l_1442;
            return l_1358;
        }
        (*g_228) = &l_1387;
        for (g_1259 = 0; g_1259 < 4; g_1259 += 1)
        {
            g_1440[g_1259] = 0x47L;
        }
    }
    else
    { 
        struct S0 ****l_1452 = &g_216;
        const int32_t l_1453[2][6] = {{0x135AAE31L,0x135AAE31L,0x2043DB37L,1L,0x2043DB37L,0x135AAE31L},{0x2043DB37L,0xCA4F7B12L,1L,0xCA4F7B12L,0x135AAE31L,0x03878EB4L}};
        uint32_t ***l_1478 = &g_1096;
        uint32_t ****l_1477 = &l_1478;
        uint32_t l_1523 = 4294967292UL;
        int32_t l_1524 = 0x3AAE3F34L;
        int i, j;
        for (g_63 = (-23); (g_63 <= 27); g_63 = safe_add_func_int16_t_s_s(g_63, 2))
        { 
            uint16_t l_1471[1];
            int32_t l_1496 = 0x55B6A18BL;
            int i;
            for (i = 0; i < 1; i++)
                l_1471[i] = 0UL;
            if ((safe_mul_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((l_1452 == l_1452), (-1L))), 0xF4156278L)), (*g_558))))
            { 
                (*g_762) = &l_1387;
                for (g_285 = 0; g_285 < 1; g_285 += 1)
                {
                    g_875[g_285] = 8L;
                }
            }
            else
            { 
                uint8_t l_1458 = 255UL;
                int32_t l_1472 = 0x3A3EA22BL;
                struct S0 l_1486[3][2][5] = {{{{-100,0xB1DC836EL,14159},{-75,1L,6810},{-100,0xB1DC836EL,14159},{-100,0xB1DC836EL,14159},{-75,1L,6810}},{{-75,1L,6810},{-100,0xB1DC836EL,14159},{-100,0xB1DC836EL,14159},{-75,1L,6810},{-100,0xB1DC836EL,14159}}},{{{-75,1L,6810},{-75,1L,6810},{-79,-1L,9141},{-75,1L,6810},{-75,1L,6810}},{{-100,0xB1DC836EL,14159},{-75,1L,6810},{-100,0xB1DC836EL,14159},{-100,0xB1DC836EL,14159},{-75,1L,6810}}},{{{-75,1L,6810},{-100,0xB1DC836EL,14159},{-100,0xB1DC836EL,14159},{-75,1L,6810},{-100,0xB1DC836EL,14159}},{{-75,1L,6810},{-75,1L,6810},{-79,-1L,9141},{-75,1L,6810},{-75,1L,6810}}}};
                uint32_t * const *l_1491 = &g_601[2][0];
                uint32_t * const **l_1490 = &l_1491;
                uint32_t * const ***l_1489 = &l_1490;
                int8_t l_1492 = 1L;
                int64_t l_1497 = 0xAF4F39B854054E3CLL;
                int i, j, k;
                if ((p_20 | l_1453[0][5]))
                { 
                    const uint32_t l_1473 = 0x694C56DFL;
                    int32_t *l_1474 = (void*)0;
                    int32_t *l_1475 = (void*)0;
                    int32_t *l_1476 = &g_160;
                    l_1387 = (safe_div_func_int32_t_s_s(7L, (safe_sub_func_uint64_t_u_u(p_20, l_1458))));
                    (*l_1476) ^= (safe_rshift_func_uint16_t_u_u(p_20, (safe_sub_func_uint16_t_u_u((p_20 | p_21), (((safe_sub_func_uint64_t_u_u((((*g_558) = p_21) && 0x6DL), p_21)) >= (safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s(((((((safe_div_func_uint32_t_u_u((l_1471[0] < 0x038BL), p_20)) > g_40) == (-2L)) , 0x23L) < l_1472) || l_1473), l_1358)), l_1358))) <= (**g_600))))));
                }
                else
                { 
                    int32_t ***l_1487 = &g_1327;
                    int32_t ****l_1488 = &l_1487;
                    int32_t *l_1493[4] = {&g_675[1][2][4],&g_675[1][2][4],&g_675[1][2][4],&g_675[1][2][4]};
                    int i;
                    g_875[0] &= ((l_1387 = (p_21 | (((g_1479 = (g_779 = l_1477)) != (void*)0) & (((+((safe_mod_func_uint32_t_u_u((((0UL | (((*l_1488) = (l_1486[2][1][4] , l_1487)) != &g_1327)) , &l_1478) != l_1489), p_20)) == l_1492)) || 0x98AE9403CC0AF5D7LL) == 0xF24BL)))) , 0x79E58425L);
                }
                for (g_372 = (-17); (g_372 <= 36); g_372 = safe_add_func_int32_t_s_s(g_372, 7))
                { 
                    uint32_t l_1498 = 0xBC05052EL;
                    l_1498--;
                    l_1524 &= ((p_20 && (l_1387 = (safe_sub_func_uint32_t_u_u((((safe_mod_func_int8_t_s_s((0L & ((safe_add_func_int32_t_s_s(((safe_mul_func_int16_t_s_s(((((0xB6L & (safe_add_func_int16_t_s_s((safe_unary_minus_func_int32_t_s(p_20)), (safe_mod_func_int8_t_s_s(0x2FL, (safe_mod_func_uint32_t_u_u(((***l_1490)--), ((safe_add_func_uint16_t_u_u((246UL & (safe_mul_func_int8_t_s_s(((safe_unary_minus_func_int16_t_s((0x7AF23630L == 4294967295UL))) <= 0xBCL), l_1453[0][5]))), l_1496)) & g_1440[2])))))))) , p_20) && (**g_762)) , 0x8524L), 1L)) || l_1472), p_21)) & l_1471[0])), g_875[0])) > l_1523) | (**g_557)), 4294967295UL)))) , 0x459BB51AL);
                }
            }
        }
        if ((safe_add_func_int8_t_s_s((((safe_div_func_uint16_t_u_u(l_1358, p_21)) || (safe_mod_func_uint16_t_u_u(l_1523, ((((l_1531 , (**l_1478)) != l_1532) && l_1453[0][5]) , p_21)))) <= l_1453[1][1]), l_1453[0][0])))
        { 
            int32_t *l_1533 = &l_1524;
            struct S0 l_1539 = {-35,0x55E76A5CL,158};
            uint32_t l_1549[2];
            int i;
            for (i = 0; i < 2; i++)
                l_1549[i] = 0xF834DDE5L;
            l_1534 = l_1533;
            l_1549[1] = (safe_mod_func_uint64_t_u_u((*l_1534), (safe_sub_func_uint16_t_u_u(0x17DEL, (((*l_1442) = (l_1539 = (*l_1442))) , (((l_1540 == (void*)0) || ((safe_lshift_func_uint8_t_u_u((*l_1533), 7)) <= (((safe_mul_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(g_125, 0xC502L)) , (*l_1533)), p_21)) , (-7L)) > 0x805DL))) == 0x01L))))));
        }
        else
        { 
            return p_20;
        }
    }
    (*l_1442) = (*l_1442);
    (*l_1550) &= l_1387;
    return g_50[2][0];
}



static union U1  func_22(uint32_t  p_23, uint32_t  p_24, uint32_t  p_25, uint32_t  p_26, int16_t  p_27)
{ 
    uint32_t ***l_1337 = &g_1100;
    uint32_t ***l_1338 = &g_1100;
    int64_t ***l_1339 = (void*)0;
    int64_t ****l_1340 = &l_1339;
    int64_t ***l_1342 = &g_325;
    int64_t ****l_1341[6] = {&l_1342,&l_1342,&l_1342,&l_1342,&l_1342,&l_1342};
    int32_t l_1350 = 1L;
    uint64_t l_1351 = 0UL;
    int32_t *l_1352 = &l_1350;
    union U1 l_1353 = {1UL};
    int i;
    (*g_762) = (((safe_div_func_uint16_t_u_u((safe_div_func_int32_t_s_s((((l_1337 = l_1337) != l_1338) <= (((*l_1340) = l_1339) == (g_1343 = (void*)0))), (((safe_lshift_func_int8_t_s_u((((safe_rshift_func_int16_t_s_u((-1L), ((safe_div_func_int8_t_s_s(l_1350, (*g_558))) < p_25))) , 0xB584L) == 0x2148L), l_1351)) != p_27) | g_1194.f1))), g_206[1])) <= p_23) , (*g_762));
    (*l_1352) |= p_24;
    (*g_228) = &l_1350;
    return l_1353;
}



static int64_t  func_28(uint8_t  p_29, int32_t  p_30, uint64_t  p_31, uint64_t  p_32)
{ 
    int32_t l_1332 = 0x632F538CL;
    return l_1332;
}



static const int8_t  func_33(uint64_t  p_34)
{ 
    int32_t l_503[1][7][1] = {{{0xF478B73EL},{0xB89DFB41L},{0xF478B73EL},{0xB89DFB41L},{0xF478B73EL},{0xB89DFB41L},{0xF478B73EL}}};
    const struct S0 *l_504 = &g_165;
    struct S0 **l_505 = &g_164;
    int64_t l_508 = (-2L);
    struct S0 l_515 = {166,0x3490E300L,14912};
    uint16_t l_528 = 0x51F7L;
    int64_t ***l_536 = &g_325;
    uint64_t l_597 = 0x872E5443F873658DLL;
    uint64_t l_620 = 0xBD37A06B532A35B6LL;
    uint16_t l_648[4][7] = {{0xAA2DL,0x35F7L,0x35F7L,0xAA2DL,0xAA2DL,0x35F7L,0x35F7L},{0xBD72L,65527UL,0xBD72L,65527UL,0xBD72L,65527UL,0xBD72L},{0xAA2DL,0xAA2DL,0x35F7L,0x35F7L,0xAA2DL,0xAA2DL,0x35F7L},{0xB64FL,65527UL,0xB64FL,65527UL,0xB64FL,65527UL,0xB64FL}};
    int32_t **l_674 = (void*)0;
    union U1 l_747 = {4294967286UL};
    const uint32_t l_812[4][5][7] = {{{0x294E87B3L,4UL,8UL,0xC6B53E09L,8UL,4UL,0x294E87B3L},{0x9EADD6BAL,0x497EE35CL,1UL,4294967289UL,1UL,0UL,0xEF91D23DL},{0x50379163L,0UL,1UL,1UL,0xC6B53E09L,0UL,0x1B92ECEDL},{6UL,3UL,1UL,1UL,0x497EE35CL,1UL,1UL},{0x968DF875L,0x968DF875L,8UL,4294967292UL,0x3EDF7BC7L,4294967294UL,0x25926266L}},{{0x497EE35CL,0x3AD1797DL,6UL,1UL,0xEF91D23DL,3UL,0x73211316L},{4294967294UL,0UL,4294967294UL,0xF57371C9L,0x3EDF7BC7L,8UL,0x3EDF7BC7L},{0x87109125L,0xEF91D23DL,0xEF91D23DL,0x87109125L,0x497EE35CL,0UL,0x0406AD86L},{0xF57371C9L,4294967294UL,0UL,4294967294UL,0xC6B53E09L,0x1B92ECEDL,4294967292UL},{1UL,6UL,0x3AD1797DL,0x497EE35CL,1UL,0x54A44F9FL,0x0406AD86L}},{{4294967292UL,8UL,0x968DF875L,0x968DF875L,8UL,4294967292UL,0x3EDF7BC7L},{1UL,1UL,3UL,6UL,0x80688038L,0UL,0x73211316L},{1UL,1UL,0UL,0x50379163L,0xF57371C9L,0x294E87B3L,0x25926266L},{4294967289UL,1UL,0x497EE35CL,0x9EADD6BAL,0x9EADD6BAL,0x497EE35CL,1UL},{0xC6B53E09L,8UL,4UL,0x294E87B3L,0x1ECCEBEAL,0xDB79FF88L,0x1B92ECEDL}},{{4294967295UL,6UL,0x73211316L,0x54A44F9FL,0UL,0UL,0xEF91D23DL},{4UL,0x1B92ECEDL,0UL,0UL,8UL,8UL,0UL},{4294967295UL,0x63DFE1E9L,4294967295UL,0x54A44F9FL,0xCA41C7FEL,1UL,0UL},{0xF57371C9L,3UL,4294967292UL,4294967295UL,4UL,1UL,0x3EDF7BC7L},{0x63DFE1E9L,1UL,6UL,4294967289UL,0UL,1UL,1UL}}};
    int32_t l_814 = 4L;
    struct S0 l_818[3] = {{30,-8L,10760},{30,-8L,10760},{30,-8L,10760}};
    int64_t l_836[1];
    uint32_t l_842 = 0x978E16F4L;
    int8_t * const l_862 = &l_747.f1;
    int32_t l_924 = 0x79227F39L;
    uint64_t l_930 = 0UL;
    uint16_t l_966[4] = {0x7952L,0x7952L,0x7952L,0x7952L};
    uint64_t ***l_970[4][1][3] = {{{(void*)0,&g_618,(void*)0}},{{(void*)0,&g_618,(void*)0}},{{(void*)0,&g_618,(void*)0}},{{(void*)0,&g_618,(void*)0}}};
    int32_t l_995[3];
    int32_t l_997 = 3L;
    uint32_t **l_1101[4][5][3] = {{{(void*)0,&g_601[1][0],(void*)0},{(void*)0,&g_601[2][0],(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_1097,&g_1097},{(void*)0,(void*)0,&g_1097}},{{&g_601[2][0],&g_1097,(void*)0},{(void*)0,(void*)0,(void*)0},{&g_1097,&g_1097,(void*)0},{&g_601[2][0],(void*)0,&g_601[1][0]},{&g_601[2][0],&g_1097,(void*)0}},{{&g_1097,(void*)0,(void*)0},{(void*)0,&g_601[2][0],(void*)0},{&g_601[2][0],&g_601[1][0],&g_601[1][0]},{(void*)0,&g_601[1][0],(void*)0},{(void*)0,&g_601[2][0],(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,&g_1097,&g_1097},{(void*)0,(void*)0,&g_1097},{&g_601[2][0],&g_1097,(void*)0},{(void*)0,(void*)0,(void*)0}}};
    int64_t l_1103 = 0xEDA4ECA7EA46EBF5LL;
    uint16_t l_1120[2];
    uint8_t l_1156[6][6][5] = {{{0xB1L,0xFFL,0xB1L,5UL,1UL},{2UL,7UL,7UL,2UL,0x42L},{1UL,0xFFL,0x41L,0xFFL,1UL},{0x42L,2UL,7UL,7UL,2UL},{1UL,5UL,0xB1L,0xFFL,0xB1L},{2UL,1UL,0UL,2UL,2UL}},{{1UL,0xFFL,1UL,5UL,1UL},{2UL,0x42L,7UL,1UL,0x42L},{1UL,0xFFL,246UL,0xFFL,1UL},{0x42L,1UL,7UL,0x42L,2UL},{1UL,5UL,1UL,0xFFL,1UL},{2UL,2UL,0UL,1UL,2UL}},{{0xB1L,0xFFL,0xB1L,5UL,1UL},{2UL,7UL,7UL,2UL,0x42L},{1UL,0xFFL,0x41L,0xFFL,1UL},{0x42L,2UL,7UL,7UL,2UL},{1UL,5UL,0xB1L,0xFFL,0xB1L},{0x42L,7UL,1UL,0x42L,0x42L}},{{0x41L,5UL,0x41L,255UL,1UL},{0x42L,0xEDL,0UL,7UL,0xEDL},{0xB1L,5UL,1UL,5UL,0xB1L},{0xEDL,7UL,0UL,0xEDL,0x42L},{1UL,255UL,0x41L,5UL,0x41L},{0x42L,0x42L,1UL,7UL,0x42L}},{{246UL,5UL,246UL,255UL,0xB1L},{0x42L,0UL,0UL,0x42L,0xEDL},{1UL,5UL,1UL,5UL,1UL},{0xEDL,0x42L,0UL,0UL,0x42L},{0xB1L,255UL,246UL,5UL,246UL},{0x42L,7UL,1UL,0x42L,0x42L}},{{0x41L,5UL,0x41L,255UL,1UL},{0x42L,0xEDL,0UL,7UL,0xEDL},{0xB1L,5UL,1UL,5UL,0xB1L},{0xEDL,7UL,0UL,0xEDL,0x42L},{1UL,255UL,0x41L,5UL,0x41L},{0x42L,0x42L,1UL,7UL,0x42L}}};
    struct S0 *****l_1187 = &g_215;
    int16_t l_1251 = 0x0E3CL;
    int32_t l_1260[3][1];
    int32_t l_1323[6] = {0xBC31E55FL,0x34C6B366L,0xBC31E55FL,0xBC31E55FL,0x34C6B366L,0xBC31E55FL};
    int32_t **l_1329 = &g_1328;
    int32_t ***l_1330 = (void*)0;
    int32_t ***l_1331 = &g_1327;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_836[i] = 0x87BD76844B9B8319LL;
    for (i = 0; i < 3; i++)
        l_995[i] = 0x4DAB529FL;
    for (i = 0; i < 2; i++)
        l_1120[i] = 0x9638L;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_1260[i][j] = 0x5E898EA4L;
    }
    if (((((l_503[0][4][0] , l_504) == ((*l_505) = (void*)0)) , (safe_sub_func_uint32_t_u_u(p_34, p_34))) != (g_129[1][0][3] , ((&l_503[0][4][0] != (*g_228)) & l_508))))
    { 
        int32_t *l_523 = &g_63;
        int64_t ***l_535 = (void*)0;
        int8_t *l_543 = (void*)0;
        struct S0 l_566 = {149,0x8F17AE14L,21191};
        int32_t l_593 = 0x44F583B3L;
        uint64_t *l_617 = (void*)0;
        uint64_t **l_616 = &l_617;
        int16_t *l_621 = &g_50[0][0];
        int16_t *l_622 = &g_40;
        uint16_t *l_623 = (void*)0;
        struct S0 ****l_630 = &g_216;
        int32_t l_643 = (-7L);
        int32_t l_644 = 7L;
        int32_t l_645 = 0x0D5DD471L;
        int32_t l_646 = 0xF25F7B76L;
        int32_t l_647 = 0x64A34CA2L;
        int16_t l_673 = 0xF5EDL;
        uint32_t **l_690[5];
        uint64_t l_702 = 0xE53F1DB6CAE0390CLL;
        int i;
        for (i = 0; i < 5; i++)
            l_690[i] = (void*)0;
        for (g_372 = 11; (g_372 <= 22); g_372 = safe_add_func_int8_t_s_s(g_372, 8))
        { 
            struct S0 l_513 = {88,-10L,9604};
            int8_t *l_541 = &g_206[1];
            int8_t *l_556 = &g_206[1];
            int8_t **l_555 = &l_556;
            int64_t *l_572 = &g_256;
            int32_t l_596 = 0xE96267D3L;
            for (g_74.f1 = 15; (g_74.f1 != (-15)); g_74.f1 = safe_sub_func_int32_t_s_s(g_74.f1, 6))
            { 
                struct S0 l_514 = {217,-1L,8684};
                struct S0 *l_516[1][4][1];
                union U1 *l_519 = &g_74;
                int32_t *l_522[4][5] = {{&g_2,&g_2,&g_2,&g_2,&g_2},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2,&g_2,&g_2,&g_2,&g_2},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_516[i][j][k] = &l_513;
                    }
                }
                l_514 = l_513;
                l_515 = l_515;
                (*g_228) = &l_503[0][5][0];
                (**g_228) = (safe_sub_func_int8_t_s_s(0xA4L, ((((*g_223) != l_519) >= (safe_sub_func_uint8_t_u_u(((g_129[1][0][3] &= (*g_229)) != (p_34 | ((void*)0 == l_523))), p_34))) ^ p_34)));
            }
            if ((((safe_rshift_func_int16_t_s_u((safe_div_func_int16_t_s_s((l_528 , (0x4D1DA18158E5AABBLL || p_34)), (safe_add_func_uint16_t_u_u(((((*l_523) |= p_34) ^ p_34) ^ (safe_sub_func_int32_t_s_s((65535UL | (safe_rshift_func_int8_t_s_s(((((l_535 != l_536) > 0x8AL) == p_34) <= p_34), p_34))), 4294967295UL))), 0x6F47L)))), p_34)) == p_34) || p_34))
            { 
                int8_t **l_542 = &l_541;
                int8_t **l_544 = (void*)0;
                int8_t **l_545 = &l_543;
                int32_t l_552 = 5L;
                uint64_t *l_564 = &g_119;
                uint64_t **l_563[7][2][4] = {{{&l_564,(void*)0,&l_564,&l_564},{&l_564,&l_564,(void*)0,(void*)0}},{{&l_564,&l_564,&l_564,&l_564},{&l_564,&l_564,(void*)0,&l_564}},{{(void*)0,&l_564,(void*)0,(void*)0},{&l_564,&l_564,&l_564,&l_564}},{{&l_564,&l_564,(void*)0,&l_564},{&l_564,&l_564,&l_564,(void*)0}},{{&l_564,&l_564,&l_564,&l_564},{&l_564,(void*)0,(void*)0,&l_564}},{{&l_564,&l_564,(void*)0,&l_564},{&l_564,&l_564,&l_564,&l_564}},{{&l_564,&l_564,&l_564,&l_564},{&l_564,&l_564,(void*)0,&l_564}}};
                struct S0 l_567 = {148,0x6CAA9C52L,20975};
                int i, j, k;
                if ((safe_rshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u((((*l_542) = l_541) == ((*l_545) = l_543)), (safe_div_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((0x6B87L ^ ((((l_552 = (-6L)) , ((safe_lshift_func_int8_t_s_s(0x09L, l_515.f1)) , l_555)) != g_557) , 1UL)) > (*g_558)), p_34)), l_513.f0)), 0xA474L)))), 7)))
                { 
                    const uint16_t l_559 = 2UL;
                    return l_559;
                }
                else
                { 
                    int32_t l_561 = (-5L);
                    uint8_t l_562 = 255UL;
                    uint64_t ***l_565 = &l_563[4][0][3];
                    l_562 &= (+((l_561 | (g_80 != l_528)) & g_432));
                    (*l_565) = l_563[4][0][3];
                    l_567 = l_566;
                }
                for (l_513.f1 = 0; (l_513.f1 == 20); l_513.f1 = safe_add_func_int8_t_s_s(l_513.f1, 9))
                { 
                    int64_t *l_573 = &g_256;
                    int32_t l_574 = 0x71DF659FL;
                    int32_t *l_575[4][4] = {{&g_129[0][1][3],(void*)0,&g_129[0][1][3],(void*)0},{&g_129[0][1][3],(void*)0,&g_129[0][1][3],(void*)0},{&g_129[0][1][3],(void*)0,&g_129[0][1][3],(void*)0},{&g_129[0][1][3],(void*)0,&g_129[0][1][3],(void*)0}};
                    int i, j;
                    l_503[0][6][0] = (l_567.f2 || ((l_513.f1 , (g_348 = (((((safe_div_func_uint8_t_u_u((((((*l_523) = (((l_573 = (l_572 = l_572)) != (void*)0) == l_574)) == 1UL) <= 0x1CL) , p_34), p_34)) , 0x2EL) && 249UL) && 249UL) && 0x6FL))) | 0x5536L));
                }
                for (l_508 = 0; (l_508 != 12); l_508 = safe_add_func_uint8_t_u_u(l_508, 2))
                { 
                    int8_t l_581 = 0xF7L;
                    int32_t *l_582 = &g_129[1][1][4];
                    (*l_582) &= ((*g_224) , ((safe_sub_func_uint8_t_u_u(l_513.f2, g_125)) != ((4294967295UL > ((((~(l_513.f2 | (((g_285 & (4294967294UL || g_63)) <= (-4L)) == g_50[3][0]))) >= 0xD720B62EL) >= 0xE7A5L) , l_581)) <= 0xB013L)));
                }
            }
            else
            { 
                uint32_t l_586 = 4UL;
                int32_t l_589 = 7L;
                int32_t l_590 = 0x2CEB302DL;
                int32_t l_591 = (-9L);
                int32_t l_592 = 0xCCEF97D7L;
                int32_t l_594 = 0xF11AE8B3L;
                int32_t l_595 = (-1L);
                if (((+g_50[2][0]) <= g_74.f1))
                { 
                    int32_t *l_584 = &l_503[0][5][0];
                    int32_t *l_585[5][1] = {{&g_2},{&g_160},{&g_2},{&g_160},{&g_2}};
                    int i, j;
                    --l_586;
                    ++l_597;
                    return (*g_558);
                }
                else
                { 
                    uint32_t ***l_603 = &g_600;
                    (*l_603) = g_600;
                    return (*g_558);
                }
            }
        }
        (*l_523) = (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((l_503[0][4][0] = (((**g_600) = ((safe_mod_func_uint16_t_u_u((255UL && g_206[1]), (((g_348 ^= ((((0x03E8L | ((*l_622) |= ((*l_621) |= (safe_mul_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(l_515.f0, ((5UL ^ p_34) | ((((l_616 == g_618) || (*g_558)) ^ (**g_600)) == 0x0812L)))), l_620)) , (*l_523)), p_34))))) && p_34) & (*l_523)) , p_34)) >= 1L) && p_34))) < 0xE511L)) > (-1L))), 1)), l_508));
        for (l_593 = (-10); (l_593 < 5); l_593 = safe_add_func_int32_t_s_s(l_593, 9))
        { 
            (*g_228) = &l_503[0][4][0];
        }
        (*l_523) ^= (safe_sub_func_int8_t_s_s((((*g_618) = (*l_616)) != &l_597), ((safe_div_func_uint64_t_u_u((l_630 != (void*)0), (safe_sub_func_uint32_t_u_u((&l_528 == &g_348), 0x46E78750L)))) && l_503[0][4][0])));
        for (l_597 = 0; (l_597 < 3); ++l_597)
        { 
            int32_t *l_635 = &l_566.f1;
            int32_t *l_636 = &g_79;
            int32_t l_637 = (-1L);
            int32_t *l_638 = &l_637;
            int32_t *l_639 = (void*)0;
            int32_t *l_640 = &g_63;
            int32_t *l_641 = (void*)0;
            int32_t *l_642[6][6][4] = {{{&l_515.f1,&g_63,&g_63,&g_2},{&g_63,&g_129[0][0][1],&g_2,&l_515.f1},{&g_63,&g_79,&g_63,&g_63},{&l_515.f1,&l_515.f1,(void*)0,&l_637},{&l_593,(void*)0,&g_129[1][1][0],&g_79},{&g_63,&l_593,&l_503[0][5][0],&g_129[1][1][0]}},{{&g_129[1][1][0],&l_593,&l_515.f1,&g_79},{&l_593,(void*)0,&l_593,&l_637},{&g_79,&l_515.f1,&g_63,&g_63},{&g_2,&g_79,&l_637,&l_515.f1},{&g_79,&g_129[0][0][1],&l_637,&g_2},{&g_2,&g_63,&g_63,&g_2}},{{&g_79,&g_79,&l_593,&l_566.f1},{&l_593,&l_566.f1,&l_515.f1,&g_129[0][0][1]},{&g_129[1][1][0],&g_63,&l_503[0][5][0],&g_129[0][0][1]},{&g_63,&l_566.f1,&g_129[1][1][0],&l_566.f1},{&l_593,&g_79,(void*)0,&g_2},{&l_515.f1,&g_63,&g_63,&g_2}},{{&g_63,&g_129[0][0][1],&g_2,&l_515.f1},{&g_63,&g_79,&g_63,&g_63},{&l_515.f1,&l_515.f1,(void*)0,&l_637},{&l_593,(void*)0,&g_129[1][1][0],&g_79},{&g_63,&l_593,&l_503[0][5][0],&g_129[1][1][0]},{&g_129[1][1][0],&l_593,&l_515.f1,&g_79}},{{&l_593,(void*)0,&l_593,&l_637},{&g_79,&l_515.f1,&g_63,&g_63},{&g_2,&g_79,&l_637,&l_515.f1},{&g_79,&g_129[0][0][1],&l_637,&g_2},{&g_2,&g_63,&g_63,&g_2},{&g_79,&g_79,&l_593,&l_566.f1}},{{&l_593,&l_566.f1,&l_515.f1,&g_129[0][0][1]},{&g_129[1][1][0],&g_63,&l_503[0][5][0],&g_129[0][0][1]},{&g_63,&l_566.f1,&g_129[1][1][0],&l_566.f1},{&l_593,&g_79,(void*)0,&g_2},{&l_515.f1,&g_63,&g_63,&g_2},{&g_63,&g_129[0][0][1],&g_2,&l_515.f1}}};
            uint8_t l_651 = 5UL;
            union U1 *l_701 = (void*)0;
            int i, j, k;
            (*g_228) = &l_503[0][4][0];
            ++l_648[0][6];
            ++l_651;
            if (((void*)0 != &g_223))
            { 
                uint8_t l_672 = 255UL;
                int32_t *l_676 = &g_63;
                (*g_229) = ((-1L) ^ (safe_mod_func_int64_t_s_s(((-6L) ^ (((safe_add_func_int16_t_s_s(((((((((*l_523) = (0L && (-6L))) , (((((safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((p_34 & (safe_add_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_s(((*l_622) = (safe_lshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(p_34, 1)), l_672)), p_34))), p_34)) == p_34) >= 0x41A709F019B49C38LL), l_672))), g_2)), 1UL)) | g_432) || l_673) , l_674) != (void*)0)) , p_34) > p_34) | l_648[0][6]) > (*g_229)) || g_675[1][2][4]), 0x7C99L)) || p_34) , 0x4D3720CC9A4695E1LL)), 18446744073709551615UL)));
                (**g_228) ^= (1UL != p_34);
                (*g_228) = &l_637;
                if (p_34)
                    break;
                g_677 = ((*g_228) = l_676);
            }
            else
            { 
                int16_t *l_682 = &g_50[0][0];
                for (l_651 = 0; (l_651 < 52); l_651 = safe_add_func_uint32_t_u_u(l_651, 4))
                { 
                    (*l_635) = ((safe_lshift_func_int8_t_s_u(((((((void*)0 != l_682) || (&g_215 != (void*)0)) | (p_34 ^ (safe_unary_minus_func_int32_t_s((*l_523))))) | p_34) && 3UL), 5)) || g_79);
                    (*g_228) = (((-1L) | (g_129[1][0][3] == (safe_mul_func_uint8_t_u_u(0xECL, g_206[0])))) , (void*)0);
                    return (**g_557);
                }
                for (g_80 = 23; (g_80 > (-17)); --g_80)
                { 
                    uint32_t ***l_691 = &g_600;
                    int32_t ***l_693 = &g_228;
                    int32_t ****l_692[2][1];
                    int32_t *l_697 = &l_515.f1;
                    int32_t ** const l_696 = &l_697;
                    int32_t ** const *l_695[4][4][4] = {{{&l_696,(void*)0,(void*)0,(void*)0},{&l_696,(void*)0,&l_696,&l_696},{&l_696,&l_696,&l_696,&l_696},{(void*)0,(void*)0,&l_696,&l_696}},{{(void*)0,&l_696,&l_696,&l_696},{&l_696,&l_696,&l_696,&l_696},{&l_696,(void*)0,(void*)0,&l_696},{&l_696,&l_696,&l_696,&l_696}},{{&l_696,&l_696,&l_696,(void*)0},{&l_696,&l_696,(void*)0,&l_696},{&l_696,&l_696,&l_696,&l_696},{&l_696,(void*)0,&l_696,&l_696}},{{&l_696,&l_696,&l_696,&l_696},{(void*)0,&l_696,(void*)0,&l_696},{(void*)0,&l_696,&l_696,&l_696},{&l_696,(void*)0,&l_696,&l_696}}};
                    int32_t ** const **l_694[1];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_692[i][j] = &l_693;
                    }
                    for (i = 0; i < 1; i++)
                        l_694[i] = &l_695[1][3][1];
                    (*g_228) = &l_647;
                    (*l_523) = (safe_mul_func_uint8_t_u_u(((-6L) > (((l_690[2] == ((*l_691) = &g_601[1][0])) , l_692[1][0]) != (l_694[0] = (void*)0))), (*g_558)));
                }
            }
            for (l_620 = (-3); (l_620 > 54); l_620++)
            { 
                for (g_40 = 0; (g_40 <= 1); g_40 += 1)
                { 
                    struct S0 *l_700 = &g_165;
                    int i, j, k;
                    l_700 = (*l_505);
                    (*l_523) = l_648[g_40][(g_40 + 1)];
                    if (g_129[g_40][g_40][(g_40 + 2)])
                        continue;
                    (*g_223) = l_701;
                    l_702++;
                }
            }
        }
    }
    else
    { 
        union U1 l_711[2][6] = {{{5UL},{5UL},{5UL},{5UL},{5UL},{5UL}},{{5UL},{5UL},{5UL},{5UL},{5UL},{5UL}}};
        struct S0 *l_724[1];
        uint16_t *l_768 = (void*)0;
        int32_t l_778[4];
        int64_t l_787 = 0x12F7F00D62B6E270LL;
        int64_t * const l_790 = &l_787;
        int64_t * const *l_789 = &l_790;
        const uint32_t l_829 = 0x4A9F1622L;
        int8_t l_838 = 3L;
        int32_t ***l_853 = (void*)0;
        int32_t ****l_852 = &l_853;
        const int8_t l_861 = 0L;
        union U1 ***l_865 = &g_223;
        union U1 ***l_866 = &g_223;
        int16_t l_925 = (-10L);
        int32_t l_929 = 1L;
        const struct S0 **l_944 = &l_504;
        const struct S0 ***l_943 = &l_944;
        const struct S0 ****l_942[5][3] = {{&l_943,&l_943,&l_943},{&l_943,&l_943,&l_943},{&l_943,&l_943,&l_943},{&l_943,&l_943,&l_943},{&l_943,&l_943,&l_943}};
        const struct S0 ***** const l_941 = &l_942[0][2];
        uint64_t **l_979[5];
        int64_t l_993 = 0x6033EABA74CF00DALL;
        uint32_t l_998 = 0xFF2BCC5CL;
        struct S0 ***l_1115[6] = {&g_163[3][0],&g_163[3][0],&g_163[3][0],&g_163[3][0],&g_163[3][0],&g_163[3][0]};
        int16_t l_1188 = 4L;
        const union U1 *l_1193 = &g_1194;
        const union U1 **l_1192 = &l_1193;
        int32_t l_1197 = 0xAD058C1AL;
        struct S0 l_1203 = {-219,0x02655922L,6703};
        int32_t *l_1206[1][1][5];
        int32_t l_1261 = 1L;
        int8_t l_1265 = 0L;
        uint32_t l_1269[6][1] = {{0x8165DC20L},{18446744073709551615UL},{0x8165DC20L},{18446744073709551615UL},{0x8165DC20L},{18446744073709551615UL}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_724[i] = &g_165;
        for (i = 0; i < 4; i++)
            l_778[i] = (-1L);
        for (i = 0; i < 5; i++)
            l_979[i] = &g_619;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 5; k++)
                    l_1206[i][j][k] = (void*)0;
            }
        }
lbl_1001:
        if (p_34)
        { 
            int32_t l_712 = 0x9C8D3A25L;
            uint64_t **l_723 = &g_619;
            struct S0 *****l_726 = &g_215;
            int32_t l_741 = 0x505941A5L;
            uint64_t *l_777 = (void*)0;
            int32_t l_791 = 4L;
            struct S0 l_817 = {26,0xD85CC6D1L,15244};
            if (((((safe_sub_func_uint64_t_u_u((safe_sub_func_int64_t_s_s(5L, 1UL)), (((((safe_div_func_uint64_t_u_u(p_34, 0xA59A547A1DA38CECLL)) && p_34) != ((l_711[0][4] , 0x0A57L) > l_712)) , l_711[0][4].f1) , (-1L)))) , p_34) != 0xAFL) == p_34))
            { 
                uint32_t l_720 = 0x8A5F52C4L;
                struct S0 *l_725 = &l_515;
                int32_t ***l_742 = &g_228;
                uint16_t *l_765 = &l_648[0][6];
                int64_t *l_769 = &l_508;
                uint64_t *l_774 = &g_119;
                int32_t l_792 = (-1L);
lbl_730:
                if (((((~(safe_add_func_uint64_t_u_u((((safe_mul_func_int8_t_s_s((((((l_720 = 1L) >= l_712) ^ (((void*)0 != l_723) < (((**g_557) == (((((l_724[0] != ((*l_505) = l_725)) | l_711[0][4].f0) <= l_712) == p_34) == 65535UL)) > 0xDF87B63F7C74FBCELL))) > p_34) == 0x66D43EF9L), (*g_558))) & 1L) & 0x3F72E9EFL), 0xFBC6E1C55022E693LL))) || (**g_557)) != 8L) , p_34))
                { 
lbl_729:
                    l_726 = (g_727 = l_726);
                    if (l_515.f2)
                        goto lbl_730;
                    return p_34;
                }
                else
                { 
                    (*l_725) = (*l_725);
                    g_129[1][1][5] &= (!p_34);
                    if (g_63)
                        goto lbl_729;
                }
                for (g_602 = 26; (g_602 < 43); g_602 = safe_add_func_int64_t_s_s(g_602, 1))
                { 
                    const union U1 **l_735 = (void*)0;
                    const union U1 ***l_734 = &l_735;
                    const union U1 ****l_733 = &l_734;
                    int8_t *l_740 = &g_74.f1;
                    int32_t ****l_743 = (void*)0;
                    int32_t ****l_744 = (void*)0;
                    int32_t ****l_745 = (void*)0;
                    int32_t ****l_746 = &l_742;
                    struct S0 l_753[3] = {{-162,0L,2638},{-162,0L,2638},{-162,0L,2638}};
                    uint16_t l_760[7][1][5] = {{{3UL,65527UL,0xA76CL,0UL,0UL}},{{65535UL,0xB86EL,65535UL,0xC395L,65535UL}},{{3UL,0UL,65527UL,65527UL,0UL}},{{65534UL,0xC395L,0x6E3EL,0xC395L,65534UL}},{{0UL,65527UL,65527UL,0UL,3UL}},{{65535UL,0xC395L,65535UL,0xB86EL,65535UL}},{{0UL,0UL,0xA76CL,65527UL,3UL}}};
                    int i, j, k;
                    l_741 ^= (((((*l_733) = (void*)0) != (void*)0) | (p_34 , (p_34 || p_34))) > ((safe_div_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s((l_712 , ((*l_740) = ((*g_558) = (-1L)))), p_34)) > p_34), l_712)) , l_720));
                    l_503[0][4][0] &= (((*l_746) = l_742) != (g_761 = (((l_747 , ((((safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((+(l_753[1] , (safe_mul_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(l_712, p_34)), p_34)))), (safe_add_func_int8_t_s_s(p_34, l_711[0][4].f0)))), l_712)) != l_711[0][4].f1) <= l_720) == (**g_600))) == l_760[3][0][0]) , (void*)0)));
                    (**l_505) = (*g_164);
                    if (p_34)
                        break;
                }
                if (((g_85[0][3][4] ^ (((+(((**g_600) , ((*l_765) = p_34)) | ((safe_rshift_func_uint8_t_u_u((l_768 != (void*)0), 2)) ^ ((*l_769) = (((*g_223) = (*g_223)) != (void*)0))))) >= 0x2218L) <= l_711[0][4].f0)) ^ p_34))
                { 
                    uint64_t *l_776 = (void*)0;
                    uint64_t **l_775[3];
                    uint32_t *****l_780 = &g_779;
                    int32_t l_788[7][7][5] = {{{(-1L),0xBF7294F5L,7L,(-8L),0x84157F9BL},{(-1L),(-8L),(-8L),4L,(-8L)},{(-1L),0L,(-1L),0xE13B22FEL,(-1L)},{(-8L),(-8L),0x6D8C586EL,0xD3118F44L,2L},{0x808C8230L,1L,0xA1653473L,0xBF7294F5L,1L},{0x4E67414CL,0x67A9579FL,(-6L),0x24F1D87BL,0xBD78EE09L},{0x3F58FD7EL,1L,(-5L),(-1L),1L}},{{0xC88CB372L,(-8L),0x8F3A324DL,0x5D817CEBL,7L},{0x6D8C586EL,0L,0x3F58FD7EL,2L,8L},{0x84144806L,(-8L),0x0D966461L,0x3195A9BCL,0xC4681E1FL},{0x66D972C3L,0xBF7294F5L,0xC88CB372L,0x569088E3L,0xF59D3220L},{0xA1653473L,0x136A7582L,0xD80A16E2L,0xF59D3220L,1L},{0x83742DEEL,0x4851F038L,0xD3118F44L,1L,1L},{(-8L),0x0D966461L,0x67A9579FL,0L,0xF59D3220L}},{{0xE8220DA9L,0L,(-8L),0x84144806L,0xC4681E1FL},{0L,0x808C8230L,1L,0xFB7CB558L,8L},{0x7BC4E148L,0L,0x3195A9BCL,7L,7L},{0x24F1D87BL,0x5D817CEBL,0x24F1D87BL,0x66D972C3L,(-5L)},{(-7L),0L,0xA1653473L,0x7BC4E148L,0xE13B22FEL},{(-8L),0L,0xA77526DDL,0xB60DF5E6L,0x83742DEEL},{0x5D817CEBL,0xF59D3220L,0xA1653473L,0xE13B22FEL,8L}},{{0L,0x838D4A26L,0L,0x4851F038L,1L},{1L,(-8L),(-1L),1L,0x67A9579FL},{0x77285F3DL,1L,(-5L),0xFB7CB558L,2L},{0x8F3A324DL,0x83742DEEL,0x67A9579FL,(-2L),0xA77526DDL},{8L,0x4E67414CL,0x84157F9BL,(-1L),1L},{(-1L),1L,7L,0xBF7294F5L,0x808C8230L},{(-1L),0xF18C82E4L,0x24F1D87BL,(-1L),0x7BC4E148L}},{{8L,0x77285F3DL,0x4E67414CL,1L,(-1L)},{0x8F3A324DL,0x973B108EL,(-8L),0xBD78EE09L,0x838D4A26L},{0x77285F3DL,0x569088E3L,0xBF7294F5L,0x4E67414CL,0x973B108EL},{1L,7L,7L,1L,(-2L)},{0L,0xB60DF5E6L,0x5D817CEBL,7L,1L},{0x5D817CEBL,0x3F58FD7EL,0x808C8230L,0xA1653473L,0x569088E3L},{(-8L),0x67A9579FL,0L,7L,7L}},{{(-7L),0x7BC4E148L,(-6L),1L,(-8L)},{0L,0x4851F038L,1L,0x4E67414CL,0x0D966461L},{0x9048DC3BL,7L,1L,0xBD78EE09L,0x77285F3DL},{1L,0x1FEC8EB4L,(-1L),1L,7L},{0xC88CB372L,(-1L),(-1L),(-1L),0x6D8C586EL},{0x67A9579FL,0x808C8230L,0L,0xBF7294F5L,0xBD78EE09L},{0xD80A16E2L,0x808C8230L,8L,(-1L),0L}},{{0L,(-1L),0x6D8C586EL,(-2L),0x24F1D87BL},{0x973B108EL,0x1FEC8EB4L,0x838D4A26L,0xFB7CB558L,0xB60DF5E6L},{0x887C86DDL,7L,(-7L),1L,0xF59D3220L},{(-6L),0x4851F038L,(-1L),0x4851F038L,(-6L)},{0x4E67414CL,0x7BC4E148L,0L,0xE13B22FEL,1L},{0xBF7294F5L,0x67A9579FL,0x4851F038L,0xB60DF5E6L,0x3F58FD7EL},{1L,0x3F58FD7EL,0x1FEC8EB4L,0x7BC4E148L,1L}}};
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_775[i] = &l_776;
                    l_778[1] = (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(((((*l_723) = (*g_618)) == (l_777 = (l_774 = l_769))) <= p_34), g_50[2][0])), 6));
                    (*l_780) = g_779;
                    l_792 &= (l_791 &= (((p_34 > ((*l_726) == (*l_726))) || (l_741 |= ((*l_774) ^= (safe_mod_func_int32_t_s_s(((((safe_sub_func_int8_t_s_s(((((safe_mod_func_uint32_t_u_u(((-1L) != (l_787 != (l_720 > 1UL))), l_788[3][1][3])) , (void*)0) != l_789) > p_34), l_597)) , l_778[1]) , g_129[1][1][2]) | l_788[3][1][3]), (**g_600)))))) <= 3L));
                }
                else
                { 
                    const uint16_t l_793 = 0UL;
                    return l_793;
                }
            }
            else
            { 
                int32_t l_813[7] = {0xB33864E6L,0xB33864E6L,0xB33864E6L,0xB33864E6L,0xB33864E6L,0xB33864E6L,0xB33864E6L};
                int i;
                for (g_63 = 0; (g_63 > (-20)); g_63 = safe_sub_func_int16_t_s_s(g_63, 1))
                { 
                    uint64_t *l_801 = (void*)0;
                    uint64_t *l_802 = &g_372;
                    int32_t ***l_811 = &l_674;
                    uint16_t *l_815 = &g_348;
                    int32_t *l_816[1][3][2] = {{{&l_814,&l_814},{&l_778[1],&l_814},{&l_814,&l_778[1]}}};
                    int i, j, k;
                    g_675[1][2][4] = (((safe_mul_func_uint16_t_u_u(((*l_815) = (!((p_34 ^ (((((p_34 != g_256) != ((safe_rshift_func_int8_t_s_s(((((0x4F28L & ((++(*l_802)) != (((safe_sub_func_uint8_t_u_u(0x58L, ((safe_add_func_int16_t_s_s(((((((safe_sub_func_int64_t_s_s(((0x48L && p_34) < l_711[0][4].f0), p_34)) | l_778[0]) > 0x7BB0BF3C72775364LL) , 4294967295UL) , l_811) == &g_228), l_778[3])) & l_711[0][4].f1))) >= l_812[3][4][0]) < p_34))) , 0x79EC07E2L) <= (**g_600)) < p_34), l_813[2])) & l_814)) | 0xCA5FL) ^ 0xE896AB9BL) , 0x594F79F29933584CLL)) && p_34))), 0UL)) == 0x6159L) > l_813[2]);
                }
            }
            l_818[1] = l_817;
        }
        else
        { 
            (*g_223) = (*g_223);
        }
        if (p_34)
        { 
            int32_t * const l_819 = (void*)0;
            int32_t **l_820 = &g_229;
            struct S0 l_823 = {133,0xEB2A6337L,22544};
            int32_t l_837 = 1L;
            int32_t l_839 = 0x2CEFC239L;
            int32_t l_840 = 0xAE414B00L;
            int32_t l_841[3];
            uint32_t ***l_872 = &g_600;
            uint32_t ****l_871[4];
            uint32_t l_888 = 18446744073709551613UL;
            uint32_t l_910 = 18446744073709551614UL;
            uint32_t l_926 = 0x768FECB7L;
            int16_t *l_940[2][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
            int32_t *l_945 = (void*)0;
            int32_t *l_946 = &l_929;
            uint64_t **l_978[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            uint8_t l_986 = 0x74L;
            struct S0 l_1016 = {-169,0x3E05B18DL,10379};
            int i, j;
            for (i = 0; i < 3; i++)
                l_841[i] = 9L;
            for (i = 0; i < 4; i++)
                l_871[i] = &l_872;
            (*l_820) = l_819;
            for (g_348 = 24; (g_348 >= 46); g_348 = safe_add_func_int16_t_s_s(g_348, 9))
            { 
                int32_t *l_826 = (void*)0;
                const union U1 *l_828 = &l_711[0][4];
                int32_t l_833 = 0xB7C1FA82L;
                int32_t l_835[4];
                uint16_t l_859 = 0xD2FCL;
                uint64_t *l_860 = &l_620;
                int i;
                for (i = 0; i < 4; i++)
                    l_835[i] = 0x6A9A318EL;
                for (l_508 = 0; (l_508 <= 0); l_508 += 1)
                { 
                    int i;
                    l_823 = l_823;
                    (*l_820) = &l_778[l_508];
                    (**g_228) |= 1L;
                }
                for (g_372 = 0; (g_372 >= 41); g_372 = safe_add_func_uint16_t_u_u(g_372, 7))
                { 
                    const union U1 *l_827 = &l_711[0][4];
                    l_826 = (*l_820);
                    l_828 = l_827;
                    (*l_536) = (void*)0;
                    (*g_228) = (*l_820);
                    return l_829;
                }
                for (g_119 = 0; (g_119 >= 56); g_119 = safe_add_func_uint16_t_u_u(g_119, 9))
                { 
                    int32_t l_832 = 0L;
                    int32_t *l_834[6] = {&l_503[0][5][0],&l_814,&l_814,&l_503[0][5][0],&l_814,&l_814};
                    int i;
                    l_842--;
                }
                g_845 = l_823;
                if ((((((*l_790) = ((safe_div_func_uint8_t_u_u(((((((safe_mul_func_uint8_t_u_u((l_852 == (void*)0), (((safe_unary_minus_func_uint16_t_u(((((-1L) >= ((safe_mod_func_uint32_t_u_u(((safe_add_func_uint64_t_u_u(((*l_860) ^= (l_859 | ((g_50[1][0] , l_536) != &g_325))), l_861)) , p_34), (*g_763))) || 1L)) , (-6L)) | 0xC808L))) , p_34) , g_50[2][0]))) && 0xDB24967FD05D22DBLL) , p_34) <= p_34) < p_34) & (**g_600)), p_34)) >= p_34)) < 0L) , 0xF839L) & 0x38DDL))
                { 
                    union U1 ***l_864 = &g_223;
                    union U1 ****l_863[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    uint32_t ****l_873[6];
                    uint16_t *l_874 = &l_648[0][6];
                    const int32_t l_876 = 0x900726D9L;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_873[i] = (void*)0;
                    g_63 = (g_372 , ((((((l_862 != (void*)0) | (g_875[0] |= (((l_866 = (l_865 = &g_223)) == (void*)0) && (safe_div_func_int8_t_s_s(((**g_557) = (safe_rshift_func_uint16_t_u_u(((*l_874) = (g_779 != (l_873[1] = l_871[1]))), 6))), 1L))))) || l_876) ^ g_80) > l_836[0]) == g_165.f0));
                    if (p_34)
                        break;
                    l_778[0] = p_34;
                }
                else
                { 
                    int32_t l_877 = 0L;
                    int32_t *l_878 = &l_840;
                    int32_t *l_879 = &g_160;
                    int32_t *l_880 = &l_818[1].f1;
                    int32_t l_881 = 0x55803AA0L;
                    int32_t *l_882 = &l_778[1];
                    int32_t *l_883 = &l_503[0][5][0];
                    int32_t *l_884 = (void*)0;
                    int32_t *l_885 = &g_129[1][0][3];
                    int32_t *l_886 = &l_881;
                    int32_t *l_887[6][2] = {{&l_840,&l_840},{&l_840,&l_840},{&l_840,&l_840},{&l_840,&l_840},{&l_840,&l_840},{&l_840,&l_840}};
                    struct S0 l_891[1] = {{-100,0x435DEDB9L,5987}};
                    int i, j;
                    ++l_888;
                    l_891[0] = l_823;
                    l_891[0] = l_891[0];
                    (*l_879) = ((*l_883) = (**g_762));
                    return p_34;
                }
            }
            if ((safe_rshift_func_int16_t_s_u(g_85[0][3][4], 0)))
            { 
                uint64_t l_900 = 18446744073709551606UL;
                int64_t ***l_913 = &g_325;
                int64_t ****l_914 = &l_536;
                for (l_814 = 0; (l_814 <= 0); l_814 += 1)
                { 
                    uint16_t *l_908 = (void*)0;
                    uint16_t *l_909 = &l_528;
                    int32_t l_911[5][6] = {{0x88842CC8L,0x91239BDDL,0x17705CECL,4L,0x91239BDDL,(-1L)},{1L,(-1L),0x17705CECL,0x88842CC8L,0L,0L},{0xC6BF74B0L,(-1L),(-1L),0xC6BF74B0L,0x91239BDDL,0xF8B569E4L},{0xC6BF74B0L,0x91239BDDL,0xF8B569E4L,0x88842CC8L,(-1L),0xF8B569E4L},{1L,0L,(-1L),4L,(-1L),0L}};
                    int32_t *l_912 = &g_129[1][0][3];
                    int i, j;
                    (*l_912) ^= (safe_mod_func_uint32_t_u_u((((safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(3L, ((((**l_789) = p_34) && l_900) < g_285))), (!0xD3L))) && (**g_762)) && (safe_div_func_uint32_t_u_u((((safe_unary_minus_func_uint16_t_u(((*l_909) &= (g_905[0][5] != (void*)0)))) | (*g_558)) | l_910), l_911[4][3]))), p_34));
                }
                (*l_914) = (l_913 = &g_325);
            }
            else
            { 
                int8_t l_919 = 0L;
                int32_t l_922 = 0xF5C005AAL;
                int32_t l_923[6][7][3] = {{{0x02641813L,(-1L),0xD71FF595L},{0x46FDDE1AL,(-1L),0x46FDDE1AL},{1L,0x02641813L,0xD71FF595L},{1L,1L,0x02641813L},{0x46FDDE1AL,0x02641813L,0x02641813L},{0x02641813L,(-1L),0xD71FF595L},{0x46FDDE1AL,(-1L),0x46FDDE1AL}},{{1L,0x02641813L,0xD71FF595L},{1L,1L,0x02641813L},{0x46FDDE1AL,0x02641813L,0x02641813L},{0x02641813L,(-1L),0xD71FF595L},{0x46FDDE1AL,(-1L),0x46FDDE1AL},{1L,0x02641813L,0xD71FF595L},{1L,1L,0x02641813L}},{{0x46FDDE1AL,0x02641813L,0x02641813L},{0x02641813L,(-1L),0xD71FF595L},{0x46FDDE1AL,(-1L),0x46FDDE1AL},{1L,0x02641813L,0xD71FF595L},{1L,1L,0x02641813L},{0x46FDDE1AL,0x02641813L,0x02641813L},{0x02641813L,(-1L),0xD71FF595L}},{{0x46FDDE1AL,(-1L),0x46FDDE1AL},{1L,0x02641813L,0xD71FF595L},{1L,1L,0x02641813L},{0x46FDDE1AL,0x02641813L,0x02641813L},{0x02641813L,(-1L),0xD71FF595L},{0x46FDDE1AL,(-1L),0x46FDDE1AL},{1L,0x02641813L,0xD71FF595L}},{{1L,1L,0x02641813L},{0x46FDDE1AL,0x02641813L,0x02641813L},{0x02641813L,(-1L),0xD71FF595L},{0x46FDDE1AL,(-1L),0x46FDDE1AL},{1L,0x02641813L,0xD71FF595L},{1L,1L,0x02641813L},{0x46FDDE1AL,0x02641813L,0x02641813L}},{{0x02641813L,(-1L),0xD71FF595L},{0x46FDDE1AL,(-1L),0x46FDDE1AL},{1L,0x02641813L,0xD71FF595L},{1L,1L,0x02641813L},{0x46FDDE1AL,0x02641813L,0x02641813L},{0x02641813L,(-1L),0xD71FF595L},{0x46FDDE1AL,(-1L),0x46FDDE1AL}}};
                int i, j, k;
                for (l_840 = (-21); (l_840 > 5); l_840 = safe_add_func_uint64_t_u_u(l_840, 1))
                { 
                    int8_t l_917 = 0xBCL;
                    int32_t *l_918 = &g_875[0];
                    int32_t *l_920 = &g_875[0];
                    int32_t *l_921[5][4][4] = {{{&l_839,&g_63,(void*)0,&g_63},{&l_841[1],&l_823.f1,&l_515.f1,(void*)0},{&g_63,&l_823.f1,&l_823.f1,&g_63},{&l_823.f1,&g_63,&l_841[1],&l_839}},{{&l_823.f1,&l_841[1],&l_823.f1,&l_515.f1},{&g_63,&l_839,(void*)0,(void*)0},{&l_840,&l_840,&l_841[1],&l_515.f1},{&l_515.f1,&l_823.f1,&l_841[1],&l_823.f1}},{{&l_840,&l_839,(void*)0,&l_841[1]},{&l_823.f1,&l_839,&l_839,&l_823.f1},{&l_839,&l_823.f1,&l_840,&l_515.f1},{&l_839,&l_840,&l_839,(void*)0}},{{&l_823.f1,&l_515.f1,(void*)0,(void*)0},{&l_840,&l_840,&l_841[1],&l_515.f1},{&l_515.f1,&l_823.f1,&l_841[1],&l_823.f1},{&l_840,&l_839,(void*)0,&l_841[1]}},{{&l_823.f1,&l_839,&l_839,&l_823.f1},{&l_839,&l_823.f1,&l_840,&l_515.f1},{&l_839,&l_840,&l_839,(void*)0},{&l_823.f1,&l_515.f1,(void*)0,(void*)0}}};
                    int i, j, k;
                    l_926--;
                    ++l_930;
                    if (l_923[5][0][1])
                        continue;
                    if (p_34)
                        break;
                    if (p_34)
                        continue;
                }
                return p_34;
            }
            if ((safe_mul_func_uint8_t_u_u(g_372, (p_34 <= ((+(safe_add_func_uint64_t_u_u(p_34, ((p_34 <= (0xE86C013CL < (safe_div_func_int32_t_s_s(((((*l_946) = (((g_40 = ((void*)0 == &g_558)) , (void*)0) != l_941)) , p_34) & 9L), p_34)))) ^ p_34)))) && (-1L))))))
            { 
                int16_t l_947 = 6L;
                int32_t *l_963[1];
                uint16_t *l_969[3];
                struct S0 l_971 = {39,-1L,13277};
                int i;
                for (i = 0; i < 1; i++)
                    l_963[i] = &g_875[0];
                for (i = 0; i < 3; i++)
                    l_969[i] = &l_648[1][2];
                (*l_505) = &l_823;
                l_778[1] ^= (l_947 , (safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(((*l_862) = p_34), ((safe_lshift_func_int16_t_s_s(0x431CL, (g_40 = ((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_s(((+((safe_lshift_func_uint16_t_u_u(0x0FA3L, (g_125 && (*g_558)))) && ((safe_mul_func_int16_t_s_s((1UL && p_34), l_947)) <= p_34))) && g_285), 5)) || l_947), p_34)) ^ (*g_558))))) != p_34))), 2)));
                g_129[1][0][3] |= (0x00L <= p_34);
                l_818[1].f1 = (safe_div_func_uint16_t_u_u((p_34 <= ((p_34 && l_966[2]) == (p_34 & (p_34 || (((((safe_rshift_func_uint16_t_u_s((g_348 &= (((void*)0 == &g_906) > 0x1DECF8E1L)), p_34)) | (*g_558)) , 8L) , l_970[0][0][2]) != (void*)0))))), p_34));
                (*g_164) = l_971;
            }
            else
            { 
                (**l_941) = (**l_941);
            }
            if ((p_34 == (((((p_34 | (safe_add_func_int8_t_s_s(((**g_557) = (((safe_add_func_uint64_t_u_u(18446744073709551613UL, ((((((safe_sub_func_int8_t_s_s(((l_978[1] != (l_979[1] = l_979[1])) != (safe_div_func_uint64_t_u_u((((p_34 < (g_119 = (((safe_lshift_func_uint8_t_u_s(((safe_mod_func_int8_t_s_s(((((((**l_789) &= ((l_836[0] < p_34) & p_34)) < p_34) , 0x9FEB578AL) == (-1L)) == 4UL), 9UL)) , g_432), p_34)) ^ p_34) <= (**g_600)))) && 0xD64E277BL) , 0UL), p_34))), 0x2CL)) & 255UL) | p_34) != g_165.f0) && g_875[0]) , g_875[0]))) > 5UL) < l_986)), p_34))) == p_34) > 0x2CL) , g_165.f2) == 0x4B5BL)))
            { 
                uint64_t l_987 = 0x36AFE2F1263308D7LL;
                int32_t l_990 = 0x9556A011L;
                int32_t l_991[2][1];
                int32_t *l_1017 = &l_503[0][5][0];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_991[i][j] = 9L;
                }
                for (l_528 = 0; (l_528 <= 3); l_528 += 1)
                { 
                    int32_t *l_992[1][3][1];
                    int16_t l_994 = 0xB67AL;
                    int32_t l_996 = 0L;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_992[i][j][k] = (void*)0;
                        }
                    }
                    --l_987;
                    ++l_998;
                    l_970[0][0][2] = (void*)0;
                    if (g_165.f2)
                        goto lbl_1001;
                }
                (*g_223) = (**l_866);
                l_818[0] = (((*l_1017) = (p_34 && (safe_mod_func_int16_t_s_s(((0x7BEDL ^ p_34) , ((safe_mod_func_int16_t_s_s((g_285 , (((safe_sub_func_uint64_t_u_u((l_991[1][0] = (((safe_rshift_func_int16_t_s_u((p_34 , (safe_div_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((&l_979[1] != ((safe_lshift_func_int8_t_s_s(((l_1016 , 4294967286UL) || l_987), l_990)) , l_970[0][0][2])) , p_34), p_34)), l_841[0]))), l_991[0][0])) >= 0x5A26L) || g_372)), 7UL)) != (**g_600)) <= p_34)), g_675[1][2][4])) | p_34)), p_34)))) , (***l_943));
                for (l_840 = 20; (l_840 == (-29)); l_840 = safe_sub_func_int8_t_s_s(l_840, 2))
                { 
                    (*l_1017) = p_34;
                    return p_34;
                }
            }
            else
            { 
                uint32_t l_1020 = 0UL;
                uint8_t *l_1037[4][4][6] = {{{&g_85[0][2][5],&g_125,&g_85[0][3][2],&g_125,&g_85[0][2][5],&g_85[0][2][5]},{(void*)0,&g_125,&g_125,(void*)0,&g_85[0][3][4],(void*)0},{(void*)0,&g_85[0][3][4],(void*)0,&g_125,&g_125,(void*)0},{&g_85[0][2][5],&g_85[0][2][5],&g_125,&g_85[0][3][2],&g_125,&g_85[0][2][5]}},{{&g_125,&g_85[0][3][4],&g_85[0][3][2],&g_85[0][3][2],&g_85[0][3][4],&g_125},{&g_85[0][2][5],&g_125,&g_85[0][3][2],&g_125,&g_85[0][2][5],&g_85[0][2][5]},{(void*)0,&g_125,&g_125,(void*)0,&g_85[0][3][4],(void*)0},{(void*)0,&g_85[0][3][4],(void*)0,&g_125,&g_125,(void*)0}},{{&g_85[0][2][5],&g_85[0][2][5],&g_125,&g_85[0][3][2],&g_125,&g_85[0][2][5]},{&g_125,&g_85[0][3][4],&g_85[0][3][2],&g_85[0][3][2],&g_85[0][3][4],&g_125},{&g_85[0][2][5],&g_125,&g_85[0][3][2],&g_125,&g_85[0][2][5],&g_85[0][2][5]},{(void*)0,&g_125,&g_125,(void*)0,&g_85[0][3][4],(void*)0}},{{(void*)0,&g_85[0][3][4],(void*)0,&g_125,&g_125,(void*)0},{&g_85[0][2][5],&g_85[0][2][5],&g_125,&g_85[0][3][2],&g_125,&g_85[0][2][5]},{&g_125,&g_85[0][3][4],&g_85[0][3][2],&g_85[0][3][2],&g_85[0][3][4],&g_125},{&g_85[0][2][5],&g_125,&g_85[0][3][2],&g_125,&g_85[0][2][5],&g_85[0][2][5]}}};
                int32_t *l_1039 = &l_841[0];
                uint64_t * const *l_1050 = &g_619;
                uint64_t * const **l_1049 = &l_1050;
                int i, j, k;
                l_1020 |= (-6L);
                (*l_1039) = (0xFE677D13643E0899LL <= (safe_mul_func_uint16_t_u_u(g_119, ((((((-9L) && p_34) || ((safe_mul_func_uint16_t_u_u(g_432, ((g_50[5][0] && ((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((safe_add_func_uint64_t_u_u((((g_1038[0] = (g_40 |= (safe_rshift_func_uint8_t_u_u((g_125 &= (safe_rshift_func_uint16_t_u_u(g_875[0], p_34))), p_34)))) , 8UL) & p_34), l_1020)) <= p_34), 0x63L)), p_34)) > 255UL)) >= 0x3658B6688924C0E4LL))) > 6UL)) < p_34) && l_1020) && p_34))));
                for (g_40 = 0; (g_40 != 25); ++g_40)
                { 
                    struct S0 *l_1044[3];
                    uint64_t * const ***l_1051 = &l_1049;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1044[i] = &g_845;
                    if (p_34)
                        break;
                    l_823.f0 ^= (((*l_1039) = (((*l_536) = g_325) == g_1042)) , (p_34 , ((*l_1039) = ((((l_1044[1] == (****l_941)) >= (safe_sub_func_int64_t_s_s((safe_div_func_uint8_t_u_u(0x6FL, (p_34 , 0xECL))), p_34))) , 7UL) & 0x7298D297A47B8F3CLL))));
                    (*l_1051) = l_1049;
                    return (*g_558);
                }
            }
        }
        else
        { 
            struct S0 l_1052 = {-132,0x402F6AD9L,3658};
            union U1 * const **l_1059 = &g_907;
            int32_t ** const *l_1071 = &g_762;
            uint64_t l_1086 = 0x9FC45CDD440E7032LL;
            uint32_t **l_1102 = &g_1097;
            l_1052 = l_1052;
            l_1052.f1 |= (0x929B5B4A76A0B41DLL & (l_1052.f0 && p_34));
            l_1052 = l_1052;
            for (g_372 = (-17); (g_372 < 3); g_372 = safe_add_func_int16_t_s_s(g_372, 3))
            { 
                union U1 * const ***l_1060 = &l_1059;
                uint8_t *l_1072 = (void*)0;
                uint8_t *l_1073 = &g_125;
                int32_t l_1074 = 0xE013E41DL;
                int32_t l_1077[2][1][7] = {{{0x0E47A3C5L,0x6ED7BA48L,0x0E47A3C5L,0x6ED7BA48L,0x0E47A3C5L,0x6ED7BA48L,0x0E47A3C5L}},{{0x6F1958CFL,0x6F1958CFL,0x6F1958CFL,0x6F1958CFL,0x6F1958CFL,0x6F1958CFL,0x6F1958CFL}}};
                struct S0 **l_1119 = &g_164;
                int i, j, k;
            }
            (**l_943) = ((*l_505) = (void*)0);
        }
        for (l_924 = 0; (l_924 <= (-11)); l_924--)
        { 
            int32_t ****l_1145 = &l_853;
            int16_t *l_1157 = &l_925;
            int32_t *l_1158 = &l_995[1];
            int16_t l_1159 = 0x8455L;
            uint8_t *l_1160 = &g_85[1][2][0];
            uint8_t *l_1161 = (void*)0;
            uint8_t *l_1162 = (void*)0;
            uint8_t *l_1163 = &l_1156[0][0][1];
            int32_t l_1164 = 0x04E32BB3L;
            int32_t *l_1167[2][7] = {{&l_814,&g_875[0],&g_875[0],&l_814,&l_515.f1,&l_503[0][4][0],&l_515.f1},{&l_814,&g_875[0],&g_875[0],&l_814,&l_515.f1,&l_503[0][4][0],&l_515.f1}};
            struct S0 * const ****l_1186 = (void*)0;
            int i, j;
            l_1164 ^= ((((*l_1163) = ((**g_557) , ((safe_rshift_func_uint16_t_u_s(g_85[0][3][4], p_34)) || (safe_mul_func_uint8_t_u_u(((*l_1160) &= ((safe_lshift_func_int16_t_s_u((((l_1145 != (void*)0) | ((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(p_34, (((safe_rshift_func_int16_t_s_u((((*l_1158) ^= (((safe_div_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((*l_1157) ^= (g_50[2][0] = (p_34 && l_1156[3][3][3]))), p_34)), (-1L))) != 0xAABEC42A722BB603LL) ^ (*g_558))) , p_34), p_34)) <= l_1159) & p_34))), g_40)) , g_160)) & p_34), 10)) != p_34)), (**g_557)))))) | p_34) <= 0L);
        }
        if ((((g_1195 = ((*l_1192) = &l_747)) != (**l_865)) , ((l_1197 = (l_503[0][4][0] != 18446744073709551609UL)) || (safe_mod_func_uint64_t_u_u(((safe_mod_func_int16_t_s_s(((~((((**g_557) = (l_1203 , (*g_558))) >= ((((p_34 = (safe_rshift_func_uint8_t_u_u(((((g_63 = ((void*)0 == g_779)) == (**g_762)) , 0x335BL) != 0x1ACCL), 7))) != 0UL) & l_924) > g_845.f1)) && p_34)) || 1UL), g_125)) ^ g_165.f0), l_995[1])))))
        { 
            int16_t l_1213 = 0xB094L;
            int32_t l_1214 = 0x3B1297FBL;
            uint8_t *l_1215 = &l_1156[3][3][3];
            int32_t l_1222[1][4] = {{0x69277C4CL,0x69277C4CL,0x69277C4CL,0x69277C4CL}};
            const struct S0 l_1235 = {21,0L,736};
            int i, j;
            l_924 &= (l_515.f1 = (safe_lshift_func_uint16_t_u_s(((0xC0L != (((((((safe_div_func_int8_t_s_s(0x47L, (safe_lshift_func_int8_t_s_u(l_1213, 7)))) & (l_1214 <= (((((*l_1215) = 1UL) || (((safe_mul_func_uint16_t_u_u((((safe_add_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u((l_1222[0][3] = 0x787CL), 0)), ((safe_sub_func_uint32_t_u_u((safe_div_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u(((*g_558) , p_34), g_206[1])), p_34)) > 1UL), p_34)), p_34)) > p_34))) == p_34) <= 0L), p_34)) != p_34) , p_34)) | (-10L)) != (*g_763)))) , p_34) < p_34) != p_34) | 0x7E1C8C6CD5A48E74LL) != 0x65L)) , 0xA2DDL), p_34)));
            for (l_924 = (-25); (l_924 < (-13)); l_924 = safe_add_func_uint32_t_u_u(l_924, 5))
            { 
                struct S0 l_1236 = {-2,-8L,19190};
                for (l_528 = (-16); (l_528 < 3); ++l_528)
                { 
                    int64_t l_1237 = 0xA5BDFD9E9194EE4DLL;
                    int32_t l_1238 = 0x5EEAC7EFL;
                    l_1236 = l_1235;
                    l_1236.f1 ^= (l_1238 = l_1237);
                    if (p_34)
                        continue;
                }
                if ((+p_34))
                { 
                    struct S0 l_1240 = {144,-1L,9638};
                    l_1236.f0 |= (l_1240 , ((safe_mul_func_uint8_t_u_u(((*l_1215) = ((((**l_789) = (+((safe_div_func_int64_t_s_s(l_1236.f1, 0x073744E127340167LL)) == p_34))) ^ (safe_mul_func_uint16_t_u_u((((**g_557) = ((*l_862) &= (8UL ^ l_1240.f1))) >= l_1236.f2), 0x11F4L))) , 246UL)), 255UL)) != p_34));
                    return p_34;
                }
                else
                { 
                    const uint32_t l_1248 = 0x1C369ED4L;
                    (*g_228) = &l_1222[0][3];
                    if (p_34)
                        continue;
                    if (l_1248)
                        break;
                }
                if ((*g_763))
                    continue;
            }
            for (g_40 = 0; (g_40 <= 6); g_40 += 1)
            { 
                int64_t l_1250 = (-2L);
                int32_t l_1252[4] = {4L,4L,4L,4L};
                uint32_t l_1256 = 0UL;
                uint8_t l_1262 = 252UL;
                int i;
            }
        }
        else
        { 
            int16_t l_1266 = 0xAEACL;
            int32_t l_1267 = 0x7EC3783CL;
            int32_t l_1268 = 0x107A634BL;
            const union U1 l_1286 = {0x337C394EL};
            struct S0 l_1290 = {207,0xEAE53D18L,6244};
            int32_t l_1297 = 1L;
            int32_t l_1298 = 0L;
            int32_t l_1300 = 0L;
            int32_t l_1301 = (-1L);
            int32_t l_1302[4];
            uint32_t l_1303 = 0xED48B025L;
            int i;
            for (i = 0; i < 4; i++)
                l_1302[i] = 0xCE977D33L;
            ++l_1269[0][0];
            if ((safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(p_34, 3)) > l_1268), ((*g_1195) , (safe_sub_func_uint32_t_u_u((safe_div_func_int64_t_s_s((p_34 & ((g_119 ^= p_34) >= ((safe_add_func_uint64_t_u_u(g_675[1][2][4], (l_1286 , p_34))) | 0x2441L))), p_34)), p_34))))), p_34)))
            { 
                struct S0 l_1289[1][7] = {{{38,-1L,15199},{38,-1L,15199},{38,-1L,15199},{38,-1L,15199},{38,-1L,15199},{38,-1L,15199},{38,-1L,15199}}};
                int i, j;
                for (l_842 = 0; (l_842 > 22); l_842++)
                { 
                    l_1290 = l_1289[0][2];
                }
            }
            else
            { 
                int16_t l_1296 = 6L;
                int32_t l_1299[2];
                int32_t * const *l_1316 = &l_1206[0][0][0];
                int32_t * const **l_1315 = &l_1316;
                int32_t * const ***l_1314 = &l_1315;
                uint64_t l_1324 = 0x0ADE2C5BF699A4D1LL;
                int i;
                for (i = 0; i < 2; i++)
                    l_1299[i] = (-1L);
                for (l_838 = 0; (l_838 <= 1); l_838 += 1)
                { 
                    (*g_228) = ((*g_762) = (*g_762));
                }
                for (l_747.f0 = (-26); (l_747.f0 < 43); l_747.f0 = safe_add_func_int16_t_s_s(l_747.f0, 6))
                { 
                    const union U1 ***l_1294[3][1][5] = {{{&l_1192,&l_1192,&l_1192,&l_1192,&l_1192}},{{&l_1192,&l_1192,&l_1192,&l_1192,&l_1192}},{{&l_1192,&l_1192,&l_1192,&l_1192,&l_1192}}};
                    const union U1 ****l_1293 = &l_1294[2][0][3];
                    int32_t l_1295[7][7][5] = {{{(-1L),(-1L),0x94AADA65L,0L,0x15C04A01L},{(-1L),0x5B301EBFL,0x5B301EBFL,(-1L),0x0CD303DBL},{0x9F87CAA3L,0L,0xE6E90BE1L,0xDD0125FEL,0L},{0x0CD303DBL,0x5B301EBFL,0xB2C33644L,0L,0L},{0L,(-1L),0L,0xDD0125FEL,0x94AADA65L},{0L,(-1L),0L,(-1L),0L},{0L,1L,(-1L),0L,(-1L)}},{{0x0CD303DBL,0x0CD303DBL,0L,0L,0x181C1FF9L},{0x9F87CAA3L,(-5L),0L,1L,(-1L)},{(-1L),0L,0xB2C33644L,0xB2C33644L,0L},{(-1L),(-5L),0xE6E90BE1L,0x45353343L,0x94AADA65L},{0x5B301EBFL,0x0CD303DBL,0x5B301EBFL,0xB2C33644L,0L},{0L,1L,0x94AADA65L,1L,0L},{0x5B301EBFL,(-1L),0x0CD303DBL,0L,0x0CD303DBL}},{{(-1L),(-1L),0x94AADA65L,0L,0x15C04A01L},{(-1L),0x5B301EBFL,0x5B301EBFL,(-1L),0x0CD303DBL},{0x9F87CAA3L,0L,0xE6E90BE1L,0xDD0125FEL,0L},{0x0CD303DBL,0x5B301EBFL,0xB2C33644L,0L,0L},{0L,(-1L),0L,0xDD0125FEL,0x94AADA65L},{0L,(-1L),0L,(-1L),0L},{0L,1L,(-1L),0L,(-1L)}},{{0x0CD303DBL,0x0CD303DBL,0L,0L,0x181C1FF9L},{0x9F87CAA3L,(-5L),0L,1L,(-1L)},{(-1L),0L,0xB2C33644L,0xB2C33644L,0L},{(-1L),(-5L),0xE6E90BE1L,0x45353343L,0x94AADA65L},{0x5B301EBFL,0x0CD303DBL,0x5B301EBFL,0xB2C33644L,0L},{0L,1L,0x94AADA65L,1L,0L},{0x5B301EBFL,(-1L),0x0CD303DBL,0L,0x0CD303DBL}},{{(-1L),(-1L),0x94AADA65L,0L,0x15C04A01L},{(-1L),0x5B301EBFL,0x5B301EBFL,(-1L),0x0CD303DBL},{0x9F87CAA3L,0L,0xE6E90BE1L,0xDD0125FEL,0L},{0x0CD303DBL,0x5B301EBFL,0xB2C33644L,0L,0L},{0L,(-1L),0L,0xDD0125FEL,0x94AADA65L},{0L,(-1L),0L,(-1L),0xB2C33644L},{0L,(-5L),0x15C04A01L,0xDD0125FEL,0x15C04A01L}},{{0x181C1FF9L,0x181C1FF9L,0x0CD303DBL,0xB2C33644L,(-1L)},{0L,0L,0L,(-5L),0x15C04A01L},{0x5B301EBFL,0xB2C33644L,0L,0L,0xB2C33644L},{0x15C04A01L,0L,0x94AADA65L,(-1L),(-1L)},{0L,0x181C1FF9L,0L,0L,0x0CD303DBL},{0xE6E90BE1L,(-5L),(-1L),(-5L),0xE6E90BE1L},{0L,0x5B301EBFL,0x181C1FF9L,0xB2C33644L,0x181C1FF9L}},{{0x15C04A01L,0xCCEB0FA2L,(-1L),0xDD0125FEL,0x9F87CAA3L},{0x5B301EBFL,0L,0L,0x5B301EBFL,0x181C1FF9L},{0L,0xDD0125FEL,0x94AADA65L,0x45353343L,0xE6E90BE1L},{0x181C1FF9L,0L,0L,0x0CD303DBL,0x0CD303DBL},{0L,0xCCEB0FA2L,0L,0x45353343L,(-1L)},{0xB2C33644L,0x5B301EBFL,0x0CD303DBL,0x5B301EBFL,0xB2C33644L},{0L,(-5L),0x15C04A01L,0xDD0125FEL,0x15C04A01L}}};
                    int i, j, k;
                    (*l_1293) = &l_1192;
                    l_1303++;
                    g_675[1][2][4] = ((((-1L) && (l_1299[0] <= (safe_lshift_func_int8_t_s_s((*g_558), 0)))) <= ((void*)0 != l_1314)) & ((safe_lshift_func_int16_t_s_s(p_34, 15)) != (safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((g_845.f0 && 9UL), 0x79C2L)), g_206[1]))));
                    ++l_1324;
                }
            }
        }
    }
    (*l_1331) = (l_1329 = g_1327);
    return (**g_557);
}



static uint64_t  func_43(int16_t * p_44, int8_t  p_45, struct S0  p_46, int32_t  p_47, uint16_t  p_48)
{ 
    uint64_t l_53[1][5] = {{0UL,0UL,0UL,0UL,0UL}};
    int32_t l_56 = (-5L);
    uint64_t l_57[1];
    int32_t *l_62 = &g_63;
    union U1 l_73 = {4294967292UL};
    int8_t l_490 = (-1L);
    int32_t l_491 = 0xD95B5CBEL;
    int32_t l_492 = 0xB7FF9682L;
    int32_t l_493 = 0x13B6E636L;
    int32_t l_494 = 0x830D6909L;
    int32_t l_495 = (-1L);
    int32_t l_496[1][2][6] = {{{1L,0L,(-1L),(-1L),0L,1L},{0x3CA6FA78L,1L,(-1L),1L,0x3CA6FA78L,0x3CA6FA78L}}};
    int32_t l_499 = (-1L);
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_57[i] = 18446744073709551613UL;
    if (((*l_62) = ((((l_53[0][2] | ((safe_mod_func_int64_t_s_s((((l_56 &= l_53[0][2]) <= l_53[0][2]) , (l_57[0] & (safe_lshift_func_uint8_t_u_s(g_50[3][0], 4)))), p_48)) < ((((safe_mul_func_int8_t_s_s(l_53[0][4], p_45)) >= 0L) , 0xAEE481DBL) && 1UL))) | g_50[2][0]) || 4L) >= 0xA04CL)))
    { 
        int16_t * const l_68 = (void*)0;
        uint64_t *l_75 = (void*)0;
        uint64_t *l_76 = (void*)0;
        uint64_t *l_77 = (void*)0;
        uint64_t *l_78[6] = {&l_57[0],&l_57[0],&l_57[0],&l_57[0],&l_57[0],&l_57[0]};
        int32_t l_81 = (-1L);
        int32_t l_82 = 0x041F5FBDL;
        int32_t l_83 = 0xB7762BE9L;
        int32_t l_84 = 0xB13FD1FAL;
        int32_t *l_436[3][3] = {{&l_83,&l_84,&l_83},{&l_56,&l_56,&l_56},{&l_83,&l_84,&l_83}};
        int i, j;
        if ((p_47 |= (safe_rshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((l_68 != (g_431 = func_69(l_73, (g_74 , (--g_85[0][3][4])), &g_50[1][0]))), (safe_lshift_func_int8_t_s_u(p_46.f1, ((!(l_84 || p_46.f2)) < 255UL))))), p_46.f2))))
        { 
            int64_t l_455 = 5L;
            int32_t l_463 = 2L;
            uint8_t l_471 = 0x1CL;
            for (p_47 = 0; (p_47 <= (-8)); p_47--)
            { 
                int16_t l_439 = 0L;
                union U1 l_454 = {0x7F0D4FA2L};
                if (p_48)
                { 
                    uint32_t *l_460 = &l_73.f0;
                    struct S0 **** const l_466 = &g_216;
                    int8_t *l_472 = &g_74.f1;
                    l_439 = 0L;
                    l_455 |= (safe_mul_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((7UL < (safe_add_func_int64_t_s_s((g_80 < (*l_62)), ((safe_div_func_uint8_t_u_u(0x03L, 0xBFL)) , ((g_372 &= 0UL) && (safe_div_func_int64_t_s_s(((safe_sub_func_int32_t_s_s((((*g_224) = l_454) , l_454.f1), p_45)) <= 1UL), g_256))))))), 1)), g_85[1][0][3])) >= p_46.f0) < 0x9EB6L), g_79));
                    p_46 = p_46;
                    p_46.f1 ^= g_165.f0;
                    p_46.f1 = (0x2EL == (safe_rshift_func_int8_t_s_u(((*l_472) = ((safe_div_func_uint64_t_u_u(((&p_46 != &p_46) & ((((*l_460)++) , (((--g_119) & 0x153D8A805F024F15LL) , l_466)) != (((g_50[0][0] , (safe_sub_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s(((((l_454.f1 >= g_63) > l_455) >= p_47) ^ p_46.f0), g_85[0][3][0])) == 1L), g_85[0][3][4]))) || g_63) , (void*)0))), l_471)) , p_47)), 2)));
                }
                else
                { 
                    return g_160;
                }
                (*l_62) ^= (p_46.f1 <= (l_455 > l_439));
            }
        }
        else
        { 
            uint8_t l_473[1];
            int32_t l_476 = (-6L);
            int i;
            for (i = 0; i < 1; i++)
                l_473[i] = 0UL;
            l_473[0]--;
            p_46 = p_46;
            if ((l_476 = (p_46.f0 || p_47)))
            { 
                l_476 = (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(g_85[1][4][4], (safe_mul_func_int16_t_s_s((*p_44), 0xBBAFL)))), 13));
                for (p_46.f1 = (-10); (p_46.f1 <= 0); ++p_46.f1)
                { 
                    l_62 = (*g_228);
                }
            }
            else
            { 
                return l_473[0];
            }
            p_46.f0 &= l_473[0];
        }
    }
    else
    { 
        int32_t *l_485 = &g_160;
        int32_t *l_486 = (void*)0;
        int32_t *l_487 = &g_129[1][0][3];
        int32_t *l_488 = &g_129[1][0][3];
        int32_t *l_489[2];
        int32_t l_497 = 0xFC4D470DL;
        int32_t l_498 = 0L;
        uint32_t l_500 = 0x8B38BB69L;
        int i;
        for (i = 0; i < 2; i++)
            l_489[i] = &g_129[0][1][2];
        --l_500;
    }
    return g_165.f2;
}



static int16_t * func_69(union U1  p_70, uint64_t  p_71, int16_t * p_72)
{ 
    int32_t l_102[5][7] = {{0xA4044A2BL,2L,0xA4044A2BL,0xA4044A2BL,2L,0xA4044A2BL,0xA4044A2BL},{2L,2L,0x47B0CB41L,2L,2L,0x47B0CB41L,2L},{2L,0xA4044A2BL,0xA4044A2BL,2L,0xA4044A2BL,0xA4044A2BL,2L},{0xA4044A2BL,2L,0xA4044A2BL,0xA4044A2BL,2L,0xA4044A2BL,0xA4044A2BL},{2L,2L,0x47B0CB41L,2L,2L,0x47B0CB41L,2L}};
    union U1 l_114[4][1][5] = {{{{0x1A1F9570L},{0x1A1F9570L},{0x1A1F9570L},{0x1A1F9570L},{0x1A1F9570L}}},{{{0x0BB6B9E6L},{0x0BB6B9E6L},{0x0BB6B9E6L},{0x0BB6B9E6L},{0x0BB6B9E6L}}},{{{0x1A1F9570L},{0x1A1F9570L},{0x1A1F9570L},{0x1A1F9570L},{0x1A1F9570L}}},{{{0x0BB6B9E6L},{0x0BB6B9E6L},{0x0BB6B9E6L},{0x0BB6B9E6L},{0x0BB6B9E6L}}}};
    uint32_t l_117[2];
    uint64_t *l_118[6][3] = {{&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119}};
    int32_t l_130[1];
    int32_t l_132 = 0xF5158564L;
    int32_t l_133 = 1L;
    union U1 *l_145 = &l_114[1][0][1];
    int8_t l_205 = 0L;
    int8_t l_208[6] = {0L,0L,0L,0L,0L,0L};
    int16_t l_420 = 0xAD2AL;
    int16_t *l_430 = &g_50[3][0];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_117[i] = 0UL;
    for (i = 0; i < 1; i++)
        l_130[i] = 0x594DF62EL;
    for (g_79 = 0; (g_79 < 22); g_79++)
    { 
        int32_t *l_94 = &g_79;
        uint32_t *l_107 = &g_74.f0;
        uint8_t *l_108 = &g_85[0][3][4];
        uint64_t l_109[3][7][7] = {{{0xC25347F8B30C50D1LL,18446744073709551615UL,0xC25347F8B30C50D1LL,18446744073709551615UL,0xC25347F8B30C50D1LL,18446744073709551615UL,0xC25347F8B30C50D1LL},{18446744073709551615UL,1UL,0xF325EC3E4F79C119LL,4UL,4UL,0xF325EC3E4F79C119LL,1UL},{1UL,18446744073709551615UL,18446744073709551610UL,18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551610UL},{4UL,4UL,0xF325EC3E4F79C119LL,1UL,18446744073709551615UL,18446744073709551615UL,1UL},{0xC25347F8B30C50D1LL,18446744073709551615UL,0xC25347F8B30C50D1LL,18446744073709551615UL,0xC25347F8B30C50D1LL,18446744073709551615UL,0xC25347F8B30C50D1LL},{4UL,1UL,1UL,4UL,18446744073709551615UL,0xF325EC3E4F79C119LL,0xF325EC3E4F79C119LL},{1UL,18446744073709551615UL,18446744073709551610UL,18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551610UL}},{{18446744073709551615UL,4UL,1UL,1UL,4UL,18446744073709551615UL,0xF325EC3E4F79C119LL},{0xC25347F8B30C50D1LL,18446744073709551615UL,0xC25347F8B30C50D1LL,18446744073709551615UL,0xC25347F8B30C50D1LL,18446744073709551615UL,0xC25347F8B30C50D1LL},{18446744073709551615UL,1UL,0xF325EC3E4F79C119LL,4UL,4UL,0xF325EC3E4F79C119LL,1UL},{1UL,18446744073709551615UL,18446744073709551610UL,18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551610UL},{4UL,4UL,0xF325EC3E4F79C119LL,1UL,18446744073709551615UL,18446744073709551615UL,1UL},{0xC25347F8B30C50D1LL,18446744073709551615UL,0xC25347F8B30C50D1LL,18446744073709551615UL,0xC25347F8B30C50D1LL,18446744073709551615UL,0xC25347F8B30C50D1LL},{4UL,1UL,1UL,4UL,18446744073709551615UL,0xF325EC3E4F79C119LL,0xF325EC3E4F79C119LL}},{{1UL,18446744073709551615UL,18446744073709551610UL,18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551610UL},{18446744073709551615UL,4UL,1UL,1UL,4UL,18446744073709551615UL,0xF325EC3E4F79C119LL},{0xC25347F8B30C50D1LL,18446744073709551615UL,0xC25347F8B30C50D1LL,18446744073709551615UL,0xC25347F8B30C50D1LL,18446744073709551615UL,0xC25347F8B30C50D1LL},{18446744073709551615UL,1UL,0xF325EC3E4F79C119LL,4UL,4UL,0xF325EC3E4F79C119LL,1UL},{1UL,18446744073709551615UL,18446744073709551610UL,18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551610UL},{4UL,4UL,0xF325EC3E4F79C119LL,1UL,18446744073709551615UL,18446744073709551615UL,1UL},{0xC25347F8B30C50D1LL,18446744073709551615UL,0xC25347F8B30C50D1LL,18446744073709551615UL,0xC25347F8B30C50D1LL,18446744073709551615UL,0xC25347F8B30C50D1LL}}};
        int32_t *l_110 = (void*)0;
        int32_t *l_111[5][5][1] = {{{&l_102[3][0]},{&g_63},{&l_102[3][6]},{&g_63},{&l_102[3][0]}},{{&l_102[0][3]},{&l_102[3][0]},{&g_63},{&l_102[3][6]},{&g_63}},{{&l_102[3][0]},{&l_102[0][3]},{&l_102[3][0]},{&g_63},{&l_102[3][6]}},{{&g_63},{&l_102[3][0]},{&l_102[0][3]},{&l_102[3][0]},{&g_63}},{{&l_102[3][6]},{&g_63},{&l_102[3][0]},{&l_102[0][3]},{&l_102[3][0]}}};
        int i, j, k;
        if (p_71)
            break;
        l_102[0][3] = ((0x6046L & (safe_sub_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u((l_94 != (void*)0), ((*l_108) |= (safe_div_func_int16_t_s_s(((safe_add_func_int8_t_s_s(((!((*l_107) &= (safe_add_func_uint16_t_u_u(l_102[0][3], (safe_sub_func_uint64_t_u_u((safe_add_func_uint32_t_u_u((g_2 , 0x4A889BFFL), (p_70.f0 &= ((*l_94) || 0xA9L)))), 0UL)))))) || 255UL), g_50[2][0])) ^ 0x275DL), 0x3529L))))) && l_102[0][3]) ^ l_109[1][6][5]), l_102[0][3]))) , g_50[2][0]);
        if (g_85[0][3][4])
            break;
    }
    if ((safe_sub_func_uint16_t_u_u((g_125 = (((((l_114[1][0][0] , 4L) | (safe_mod_func_uint64_t_u_u(l_117[0], (++g_119)))) | g_63) == (safe_unary_minus_func_uint8_t_u((1UL ^ (g_85[0][3][4]--))))) != g_80)), (safe_unary_minus_func_uint8_t_u((l_102[4][3] < p_70.f0))))))
    { 
        int32_t *l_127 = &g_79;
        int32_t *l_128[5];
        int16_t l_131[7][7] = {{0x8B8AL,0xF2F4L,(-7L),(-7L),0xF2F4L,0x8B8AL,(-1L)},{0x8B8AL,0xF2F4L,(-7L),(-7L),0xF2F4L,0x8B8AL,(-1L)},{0x8B8AL,0xF2F4L,(-7L),(-7L),0xF2F4L,0x8B8AL,(-1L)},{0x8B8AL,0xF2F4L,(-1L),(-1L),(-7L),(-1L),0L},{(-1L),(-7L),(-1L),(-1L),(-7L),(-1L),0L},{(-1L),(-7L),(-1L),(-1L),(-7L),(-1L),0L},{(-1L),(-7L),(-1L),(-1L),(-7L),(-1L),0L}};
        uint16_t l_134 = 1UL;
        struct S0 l_139 = {-190,8L,13249};
        union U1 *l_144 = &l_114[1][0][0];
        union U1 **l_143[2][7][4] = {{{&l_144,&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144,&l_144}},{{&l_144,&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144,&l_144}}};
        struct S0 *l_162 = (void*)0;
        struct S0 **l_161[2][7][2] = {{{&l_162,&l_162},{&l_162,&l_162},{&l_162,&l_162},{&l_162,&l_162},{&l_162,&l_162},{&l_162,&l_162},{&l_162,&l_162}},{{&l_162,&l_162},{&l_162,&l_162},{&l_162,&l_162},{&l_162,&l_162},{&l_162,&l_162},{&l_162,&l_162},{&l_162,&l_162}}};
        uint32_t l_181 = 0UL;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_128[i] = &g_79;
        (*l_127) ^= p_71;
        --l_134;
        for (g_63 = 0; (g_63 <= (-25)); g_63--)
        { 
            struct S0 **l_140 = (void*)0;
            struct S0 *l_142 = &l_139;
            struct S0 **l_141 = &l_142;
            if (p_70.f0)
                break;
            (*l_141) = (l_139 , (void*)0);
        }
        l_145 = &g_74;
        for (g_80 = 0; (g_80 >= 8); g_80++)
        { 
            struct S0 ***l_166 = (void*)0;
            struct S0 **l_168 = &g_164;
            struct S0 ***l_167 = &l_168;
            uint32_t l_180 = 0xAC69C330L;
            g_165.f1 &= (safe_mod_func_int16_t_s_s((safe_mod_func_int64_t_s_s(((((safe_add_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((g_160 = l_117[0]), ((g_163[2][0] = l_161[0][3][0]) != ((*l_167) = &l_162)))), 0L)), p_70.f1)) , (safe_add_func_uint64_t_u_u((((((((safe_lshift_func_uint8_t_u_u((((safe_add_func_int32_t_s_s((+(safe_div_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(0x7EL, ((g_129[1][0][3] > l_180) || 0x8FBE7E21723561A8LL))), 1UL))), p_70.f0)) & g_80) | 0L), p_70.f0)) , (void*)0) != (void*)0) && 3L) , (*p_72)) <= g_80) , l_181), 18446744073709551615UL))), g_74.f0)) ^ l_180) ^ (*l_127)) , p_71), 5UL)), 0x51E3L));
        }
    }
    else
    { 
        union U1 **l_182 = (void*)0;
        union U1 *l_183[1][1];
        int32_t l_184 = 0x77547228L;
        uint32_t *l_185 = &l_114[1][0][0].f0;
        int32_t l_199 = 0x5B194EF1L;
        int32_t l_200[1][5][4] = {{{0x2BF3D79FL,0x2BF3D79FL,0x3D45A5B2L,0x3D45A5B2L},{0x2BF3D79FL,0x2BF3D79FL,0x3D45A5B2L,0x3D45A5B2L},{0x2BF3D79FL,0x2BF3D79FL,0x3D45A5B2L,0x3D45A5B2L},{0x2BF3D79FL,0x2BF3D79FL,0x3D45A5B2L,0x3D45A5B2L},{0x2BF3D79FL,0x2BF3D79FL,0x3D45A5B2L,0x3D45A5B2L}}};
        int32_t *l_213 = (void*)0;
        int32_t **l_230 = &l_213;
        struct S0 l_298 = {-154,-1L,10736};
        uint8_t l_321 = 255UL;
        int16_t l_370 = 0x3ADAL;
        int32_t *l_429 = &g_79;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_183[i][j] = &l_114[1][0][2];
        }
        l_183[0][0] = &p_70;
        l_184 = (((l_184 , (0xBB5D6DC47B37152BLL & ((void*)0 == l_185))) <= (~((p_70.f1 < (0x4C40L | (safe_mod_func_uint8_t_u_u(p_71, l_117[0])))) & p_71))) > l_184);
        if ((l_184 <= (safe_rshift_func_int16_t_s_s((&l_184 == (void*)0), (*p_72)))))
        { 
            int32_t *l_193[7][1] = {{(void*)0},{&g_129[0][1][2]},{(void*)0},{(void*)0},{&g_129[0][1][2]},{(void*)0},{(void*)0}};
            int8_t l_204 = (-2L);
            union U1 ***l_254 = &l_182;
            int64_t *l_255[6][7] = {{(void*)0,&g_256,(void*)0,&g_256,&g_256,(void*)0,&g_256},{&g_256,&g_256,&g_256,&g_256,&g_256,&g_256,&g_256},{(void*)0,&g_256,&g_256,(void*)0,&g_256,(void*)0,&g_256},{&g_256,&g_256,&g_256,&g_256,&g_256,&g_256,&g_256},{(void*)0,&g_256,(void*)0,&g_256,(void*)0,(void*)0,&g_256},{&g_256,&g_256,&g_256,&g_256,&g_256,&g_256,&g_256}};
            struct S0 *****l_272 = &g_215;
            int32_t l_282[2][2] = {{0x1DA92B66L,0x1DA92B66L},{0x1DA92B66L,0x1DA92B66L}};
            struct S0 *****l_336 = &g_215;
            int i, j;
lbl_327:
            for (l_133 = 0; l_133 < 1; l_133 += 1)
            {
                for (l_184 = 0; l_184 < 1; l_184 += 1)
                {
                    l_183[l_133][l_184] = &l_114[0][0][0];
                }
            }
            l_184 &= (+(!0x96878594L));
            for (g_160 = 23; (g_160 > (-11)); --g_160)
            { 
                int64_t l_201 = 1L;
                int32_t l_202[5][2] = {{8L,8L},{8L,8L},{8L,8L},{8L,8L},{8L,8L}};
                uint32_t l_209 = 0x6969B8EBL;
                int32_t **l_212[3];
                union U1 **l_221 = &l_183[0][0];
                int32_t l_231 = 0L;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_212[i] = &l_193[6][0];
                for (g_80 = 11; (g_80 != (-7)); g_80 = safe_sub_func_int32_t_s_s(g_80, 6))
                { 
                    int64_t l_198 = 0xA85B44177A3353FALL;
                    int32_t l_203[6][2] = {{(-4L),3L},{(-4L),(-4L)},{3L,(-4L)},{(-4L),3L},{(-4L),(-4L)},{3L,(-4L)}};
                    int32_t l_207 = 0x089151E2L;
                    int i, j;
                    l_209--;
                }
                l_213 = l_193[1][0];
                for (l_184 = 0; (l_184 <= 1); l_184 += 1)
                { 
                    int32_t *l_214[4][6][4] = {{{&g_165.f1,&g_165.f1,(void*)0,&g_2},{(void*)0,&g_2,&g_165.f1,&l_133},{&l_133,&l_200[0][3][0],&g_165.f1,&g_165.f1},{(void*)0,&l_200[0][3][0],&g_79,&l_133},{&l_200[0][3][0],&g_2,&l_199,&g_2},{(void*)0,&g_165.f1,(void*)0,&l_199}},{{&l_199,(void*)0,&g_2,&l_200[0][0][1]},{&l_199,&g_2,&l_200[0][3][0],(void*)0},{&l_199,(void*)0,&g_2,&l_199},{&l_199,(void*)0,(void*)0,&l_199},{(void*)0,&l_133,&l_199,&l_200[0][1][3]},{&l_200[0][3][0],&l_199,&g_79,&g_79}},{{(void*)0,&l_200[0][0][1],&g_165.f1,&g_79},{&l_133,&l_199,&g_165.f1,&l_200[0][1][3]},{(void*)0,&l_133,(void*)0,&l_199},{&g_165.f1,(void*)0,&l_199,&l_199},{&g_79,(void*)0,&l_200[0][1][3],(void*)0},{&g_2,&g_2,&l_200[0][1][3],&l_200[0][0][1]}},{{&g_79,(void*)0,&l_199,&l_199},{&g_165.f1,&g_165.f1,(void*)0,&g_2},{(void*)0,&g_2,&g_165.f1,&l_133},{&l_133,&l_200[0][3][0],&g_165.f1,&g_165.f1},{(void*)0,&l_200[0][3][0],&g_79,&l_133},{&l_200[0][3][0],&g_2,&l_199,&g_2}}};
                    struct S0 *****l_217 = &g_215;
                    uint8_t *l_218 = &g_125;
                    union U1 ***l_222[4][4][4] = {{{&l_182,&l_182,&l_221,&l_221},{&l_182,&l_182,&l_182,&l_182},{&l_182,&l_221,&l_182,&l_221},{&l_182,&l_182,&l_182,&l_182}},{{&l_182,&l_182,&l_182,&l_221},{&l_182,&l_221,&l_221,&l_182},{&l_182,&l_182,&l_182,&l_221},{&l_182,&l_182,&l_182,&l_182}},{{&l_182,&l_221,&l_221,&l_182},{&l_182,&l_221,&l_182,&l_182},{&l_182,&l_182,&l_182,&l_182},{&l_182,&l_221,&l_182,&l_182}},{{&l_182,&l_221,&l_182,&l_182},{&l_182,&l_182,&l_221,&l_221},{&l_182,&l_182,&l_182,&l_182},{&l_182,&l_221,&l_182,&l_221}}};
                    int i, j, k;
                    l_214[0][1][2] = (void*)0;
                    (*l_217) = g_215;
                    l_231 = (((*l_218) = 1UL) <= (safe_mul_func_uint16_t_u_u(0xC90EL, ((((l_182 = l_221) == (g_223 = g_223)) , p_71) >= (p_70.f0 > (safe_mul_func_uint16_t_u_u((((*l_185) = (~((g_228 == l_230) > p_71))) == g_206[0]), (*p_72))))))));
                    g_63 |= (safe_mod_func_int16_t_s_s(((p_70.f1 || ((****g_215) , 4294967294UL)) , (safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u(p_70.f1, (g_74.f0 = ((*l_185) = (safe_lshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s(1L, ((safe_add_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s((l_214[1][3][2] == (((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((&g_223 == l_254) >= 255UL), 14)), 2)) , 0x10L) , g_229)), 65532UL)), g_165.f1)) != (-5L)), p_71)) , p_70.f1))), l_130[0])))))), 1)), 4294967294UL))), p_71));
                }
            }
            if ((l_132 ^= ((l_102[4][5] ^= p_70.f1) <= (p_71 = p_70.f1))))
            { 
                struct S0 ****l_260 = &g_216;
                int32_t l_267 = (-10L);
                int32_t *l_292 = &l_200[0][1][3];
                int16_t *l_322 = &g_50[5][0];
                l_184 ^= ((safe_lshift_func_uint8_t_u_u(((((~(((void*)0 != l_260) | (((safe_mod_func_uint8_t_u_u(p_71, (safe_add_func_int32_t_s_s((safe_div_func_int8_t_s_s(l_267, (safe_lshift_func_int8_t_s_s(g_160, (((p_71 && (safe_lshift_func_uint8_t_u_s((((((void*)0 == l_272) , p_71) , l_118[5][1]) != &g_256), 6))) || p_70.f1) == 0x2F24E1A288EE34ADLL))))), l_267)))) >= g_256) || p_70.f1))) != g_206[1]) > g_129[1][0][3]) ^ p_70.f0), 5)) ^ p_70.f0);
                g_165.f0 = 0x26C057EFL;
                (*g_228) = (*g_228);
                if ((g_79 |= (safe_rshift_func_uint16_t_u_u(((void*)0 == (****l_272)), (safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((**g_223) , (!(p_70.f1 < 0x61DE9766L))), ((*p_72) = 0xE1FDL))), 0x2FL))))))
                { 
                    uint64_t l_295 = 18446744073709551611UL;
                    uint8_t *l_296 = &g_125;
                    uint32_t l_297 = 18446744073709551615UL;
                    l_267 = ((g_119 = ((g_256 , l_254) != (((l_282[1][1] = (p_70.f1 && (safe_mul_func_int8_t_s_s(p_70.f0, l_267)))) == (safe_div_func_int16_t_s_s(((void*)0 != g_229), 0x44C7L))) , (void*)0))) >= p_70.f1);
                    (*l_292) = (((p_71 > g_285) || (safe_sub_func_int16_t_s_s((((*l_296) = ((g_160 != (safe_sub_func_uint32_t_u_u(((((safe_add_func_int32_t_s_s((g_129[1][0][5] &= ((g_256 &= (&l_267 == l_292)) != g_285)), (safe_rshift_func_uint8_t_u_s((((**l_260) != (void*)0) && 0xA6L), p_70.f0)))) >= g_63) | 65534UL) == g_285), l_295))) != 0x11L)) < p_70.f0), p_70.f0))) , l_297);
                    (*g_164) = (g_285 , l_298);
                    (*l_292) = (safe_mul_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(0x73L, (+p_70.f0))), ((!(((safe_div_func_int32_t_s_s((*l_292), (safe_lshift_func_uint16_t_u_s((((((safe_mod_func_int16_t_s_s(((safe_div_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((l_295 == (p_71 && (((g_285 & (g_119 = (((*l_296) ^= (safe_sub_func_uint64_t_u_u(g_256, 0x9BE460AEE66FE87BLL))) | p_70.f0))) , g_285) < 0xEF39D5B40FBC4B30LL))), 1)), 0x8F1AD1F4B11E6578LL)) , (*p_72)), 0x5E20L)) & g_206[0]) , g_74.f1) ^ (*l_292)) || 0x7B4B9699L), g_129[0][1][2])))) <= l_132) ^ l_321)) != 1UL))) == 0xAAL), 0xBCA0L));
                }
                else
                { 
                    (*g_228) = (*l_230);
                    return l_322;
                }
            }
            else
            { 
                uint64_t l_332[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_332[i] = 0xC693CCDD7182D5CALL;
                (*g_228) = (*g_228);
                for (g_256 = 7; (g_256 >= 4); --g_256)
                { 
                    int64_t ***l_326 = &g_325;
                    (*l_230) = (*g_228);
                    (*l_326) = g_325;
                    if (l_132)
                        goto lbl_327;
                }
                for (l_204 = 26; (l_204 == 15); l_204--)
                { 
                    int32_t ***l_331[3];
                    int32_t ****l_330 = &l_331[0];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_331[i] = &g_228;
                    (*l_330) = &g_228;
                    (*g_228) = (((***g_216) = (l_332[1] , (***g_216))) , (***l_330));
                    if (p_70.f0)
                        break;
                }
                for (l_133 = 6; (l_133 == (-22)); l_133--)
                { 
                    (*l_230) = &l_282[1][1];
                    if (p_70.f0)
                        break;
                }
            }
            for (g_74.f0 = 0; (g_74.f0 <= 0); g_74.f0 += 1)
            { 
                int64_t l_335 = 6L;
                l_335 &= (((((void*)0 != (*g_223)) > (((void*)0 == &l_114[1][0][0]) || (-5L))) , g_129[1][0][0]) || (((g_79 ^= ((l_114[1][0][0].f0 <= (-5L)) , 0L)) <= p_70.f0) != p_71));
                if (((void*)0 != l_336))
                { 
                    uint16_t *l_347 = &g_348;
                    int32_t l_349 = 0xCA34C7E3L;
                    if (p_70.f0)
                        break;
                    l_349 |= (safe_div_func_int8_t_s_s((safe_add_func_int8_t_s_s((0x11L | p_71), l_208[2])), (safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((g_50[0][0] ^ (18446744073709551615UL ^ (safe_mod_func_uint16_t_u_u(((*l_347) = ((l_130[0] , 0x0040A6EF0F44265ALL) > 1L)), (*p_72))))), g_85[0][3][4])) | p_71), g_256))));
                    if (l_335)
                        continue;
                    (*g_228) = (*g_228);
                }
                else
                { 
                    int64_t l_359 = 0x87B174B1A32B1D57LL;
                    uint32_t l_366 = 18446744073709551615UL;
                    int8_t *l_371[2];
                    uint64_t l_377[4];
                    int32_t l_378 = 8L;
                    uint64_t **l_379 = &l_118[2][0];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_371[i] = &l_208[5];
                    for (i = 0; i < 4; i++)
                        l_377[i] = 4UL;
                    g_79 |= ((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u((((((g_206[0] ^ (g_372 ^= ((+(((((safe_add_func_int64_t_s_s(((g_50[0][0] ^ (safe_sub_func_uint8_t_u_u(((((((l_359 >= (((safe_lshift_func_int16_t_s_s((safe_div_func_int32_t_s_s(((l_359 && (((safe_div_func_uint16_t_u_u(((l_366 != (((~(safe_mul_func_int8_t_s_s((((p_71 || ((((l_272 != l_336) , l_335) > g_74.f0) > l_359)) > g_165.f0) <= p_71), g_206[1]))) , (*p_72)) | 65533UL)) | l_335), 0x4ABDL)) >= p_71) == g_85[0][3][4])) , p_71), p_70.f0)), 11)) ^ g_165.f2) != l_335)) & p_71) <= 0x2B99L) && g_50[2][0]) < 1L) , 0x5AL), p_70.f0))) , p_70.f0), p_70.f0)) < l_370) != l_335) <= 65528UL) != g_74.f1)) == 250UL))) , 0UL) < l_117[1]) , l_335) != p_71), 6UL)), 0UL)) > 0xD6864CFC305E64F4LL);
                    (*l_230) = (*g_228);
                    l_378 = (safe_mul_func_int8_t_s_s((((((g_325 == g_325) ^ (((((((*l_185) = g_372) <= (((((p_70.f1 > (safe_mod_func_int16_t_s_s((-1L), ((&g_216 != ((*l_336) = (*l_336))) ^ (*p_72))))) > g_119) | l_335) <= l_377[1]) != g_74.f1)) , p_70.f0) == l_335) > g_206[0]) , 1L)) >= l_117[0]) <= 0x43L) > (*p_72)), 0x2AL));
                    g_63 = 1L;
                    (*l_272) = ((((*l_379) = &p_71) == &p_71) , (*l_336));
                }
                for (l_132 = 0; (l_132 <= 0); l_132 += 1)
                { 
                    int32_t *l_380 = &g_129[0][0][2];
                    l_380 = ((*l_230) = ((*g_228) = (void*)0));
                    if (p_70.f0)
                        break;
                }
                for (g_80 = 0; (g_80 <= 0); g_80 += 1)
                { 
                    uint16_t l_381 = 0UL;
                    --l_381;
                    l_193[1][0] = &l_132;
                }
            }
        }
        else
        { 
            int32_t *l_384 = &g_160;
            int32_t *l_385 = (void*)0;
            int32_t *l_386 = &g_129[0][1][2];
            int32_t *l_387 = &l_199;
            int32_t *l_388 = &g_165.f1;
            int32_t *l_389 = &l_200[0][1][3];
            int32_t *l_390[6];
            uint8_t l_391 = 1UL;
            int32_t ***l_416 = (void*)0;
            int32_t ****l_415 = &l_416;
            uint16_t *l_417 = (void*)0;
            uint16_t *l_418 = &g_348;
            int64_t *l_419 = (void*)0;
            int i;
            for (i = 0; i < 6; i++)
                l_390[i] = &l_200[0][4][2];
            l_391--;
            for (l_132 = (-24); (l_132 >= 7); l_132 = safe_add_func_int64_t_s_s(l_132, 9))
            { 
                uint32_t l_398 = 18446744073709551606UL;
                (*l_384) = (safe_mul_func_uint16_t_u_u(((p_71 > 0xB0L) ^ p_70.f1), l_398));
                for (l_205 = 0; (l_205 >= 0); l_205 -= 1)
                { 
                    int16_t *l_399 = (void*)0;
                    return l_399;
                }
            }
            (*l_384) = (safe_add_func_int64_t_s_s((+p_71), (safe_div_func_int16_t_s_s((g_165.f0 == (((((*l_185) = (safe_rshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s((((0x0B8D3732L <= 9L) || (l_132 |= (l_102[0][3] &= ((safe_mod_func_uint16_t_u_u(((*l_418) &= (safe_sub_func_int64_t_s_s((((safe_mul_func_int8_t_s_s(g_256, (((void*)0 != l_415) || (-8L)))) , g_165.f2) , 0L), 0x42F16BC517993B2FLL))), p_70.f0)) , p_71)))) | l_420), g_85[1][2][5])), g_85[1][1][4]))) >= p_70.f1) <= 0L) != p_70.f1)), l_117[0]))));
        }
        (*l_429) &= ((!(safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(247UL, (((*l_185) = ((((g_129[0][1][1] <= ((-1L) >= g_129[1][0][3])) == (safe_sub_func_int16_t_s_s(g_165.f2, g_50[4][0]))) && (!g_285)) || p_70.f0)) > 0x9E975092L))), p_71))) | g_80);
        return &g_50[5][0];
    }
    return l_430;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_50[i][j], "g_50[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_74.f0, "g_74.f0", print_hash_value);
    transparent_crc(g_74.f1, "g_74.f1", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_85[i][j][k], "g_85[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_129[i][j][k], "g_129[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_165.f0, "g_165.f0", print_hash_value);
    transparent_crc(g_165.f1, "g_165.f1", print_hash_value);
    transparent_crc(g_165.f2, "g_165.f2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_206[i], "g_206[i]", print_hash_value);

    }
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_432, "g_432", print_hash_value);
    transparent_crc(g_602, "g_602", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_675[i][j][k], "g_675[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_845.f0, "g_845.f0", print_hash_value);
    transparent_crc(g_845.f1, "g_845.f1", print_hash_value);
    transparent_crc(g_845.f2, "g_845.f2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_875[i], "g_875[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1038[i], "g_1038[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1104[i][j], "g_1104[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1194.f0, "g_1194.f0", print_hash_value);
    transparent_crc(g_1194.f1, "g_1194.f1", print_hash_value);
    transparent_crc(g_1196.f0, "g_1196.f0", print_hash_value);
    transparent_crc(g_1196.f1, "g_1196.f1", print_hash_value);
    transparent_crc(g_1259, "g_1259", print_hash_value);
    transparent_crc(g_1405, "g_1405", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1440[i], "g_1440[i]", print_hash_value);

    }
    transparent_crc(g_1552, "g_1552", print_hash_value);
    transparent_crc(g_1617, "g_1617", print_hash_value);
    transparent_crc(g_1618, "g_1618", print_hash_value);
    transparent_crc(g_1635, "g_1635", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_1655[i][j], "g_1655[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
