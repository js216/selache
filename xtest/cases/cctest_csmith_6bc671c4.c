// SPDX-License-Identifier: MIT
// cctest_csmith_6bc671c4.c --- cctest case csmith_6bc671c4 (csmith seed 1808167364)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf5882791 */

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

// Options:   -s 1808167364 -o /tmp/csmith_gen_y93zgh68/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
   uint32_t  f1;
   int64_t  f2;
};
#pragma pack(pop)

union U1 {
   struct S0  f0;
   const int8_t  f1;
   const uint64_t  f2;
};

union U2 {
   uint16_t  f0;
   int32_t  f1;
   uint32_t  f2;
   int8_t * f3;
};


static int32_t g_2 = 0x405B4019L;
static uint32_t g_6[5][3] = {{18446744073709551615UL,0x990069F3L,18446744073709551615UL},{18446744073709551615UL,0x990069F3L,18446744073709551615UL},{18446744073709551615UL,0x990069F3L,18446744073709551615UL},{18446744073709551615UL,0x990069F3L,18446744073709551615UL},{18446744073709551615UL,0x990069F3L,18446744073709551615UL}};
static int32_t g_7 = 0x3EDFA831L;
static int32_t g_10 = 0xE5A9864BL;
static int32_t g_13 = 7L;
static int32_t g_21 = (-1L);
static uint8_t g_23 = 255UL;
static int8_t g_56[1] = {(-3L)};
static int64_t g_63 = 0xC1418E8DCE9DB3FALL;
static const union U1 g_70 = {{65535UL,0x874D2D97L,0x6EB5C50EC31937DALL}};
static int16_t g_72 = 0x61EBL;
static uint32_t g_74 = 18446744073709551610UL;
static int8_t g_84 = (-9L);
static uint16_t g_85[4] = {0x6AADL,0x6AADL,0x6AADL,0x6AADL};
static union U2 g_89 = {8UL};
static uint8_t g_94 = 0xC4L;
static int16_t g_98 = 0x21D6L;
static int8_t g_135 = 0x3DL;
static int32_t g_140 = 0L;
static uint8_t g_141 = 0x1DL;
static struct S0 g_145 = {1UL,0x0514B5F7L,0L};
static int32_t g_165 = 0xC9FAB1CFL;
static uint8_t g_170[1] = {248UL};
static int32_t * const g_184[6][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
static int32_t * const *g_183[7] = {&g_184[0][2],&g_184[0][2],&g_184[0][2],&g_184[0][2],&g_184[0][2],&g_184[0][2],&g_184[0][2]};
static uint64_t g_203 = 0UL;
static uint16_t g_297[7][1] = {{0x8928L},{0x8928L},{0xE9CBL},{0x8928L},{0x8928L},{0xE9CBL},{0x8928L}};
static uint32_t g_356[1][7][5] = {{{0xBD182D7CL,4UL,4UL,0xBD182D7CL,4UL},{0xBD182D7CL,0xBD182D7CL,5UL,0xBD182D7CL,0xBD182D7CL},{4UL,0xBD182D7CL,4UL,4UL,0xBD182D7CL},{0xBD182D7CL,4UL,4UL,0xBD182D7CL,4UL},{0xBD182D7CL,0xBD182D7CL,5UL,0xBD182D7CL,0xBD182D7CL},{4UL,0xBD182D7CL,4UL,4UL,0xBD182D7CL},{0xBD182D7CL,4UL,4UL,0xBD182D7CL,4UL}}};
static const uint64_t **g_407 = (void*)0;
static const uint64_t ***g_406 = &g_407;
static union U1 g_530 = {{65532UL,18446744073709551615UL,0x7C5F5D95B5CBE758LL}};
static union U1 *g_529 = &g_530;
static union U1 g_532 = {{0UL,0x75F2979FL,0x3BF33BBEA4214613LL}};
static int32_t *g_539 = &g_140;
static int8_t *g_544 = &g_135;
static int8_t **g_543 = &g_544;
static struct S0 * const g_553 = &g_145;
static struct S0 * const *g_552 = &g_553;
static struct S0 * const **g_551 = &g_552;
static uint64_t g_593 = 0x80DE5A271C4F8FA2LL;
static int32_t g_622 = 5L;
static int64_t * const g_820 = &g_63;
static int64_t * const *g_819 = &g_820;
static uint64_t *g_870 = &g_593;
static uint64_t **g_869 = &g_870;
static int64_t *g_877[7][4] = {{&g_145.f2,&g_145.f2,&g_145.f2,&g_145.f2},{&g_145.f2,&g_145.f2,&g_145.f2,&g_145.f2},{&g_145.f2,&g_145.f2,&g_145.f2,&g_145.f2},{&g_145.f2,&g_145.f2,&g_145.f2,&g_145.f2},{&g_145.f2,&g_145.f2,&g_145.f2,&g_145.f2},{&g_145.f2,&g_145.f2,&g_145.f2,&g_145.f2},{&g_145.f2,&g_145.f2,&g_145.f2,&g_145.f2}};
static int64_t **g_876 = &g_877[0][3];
static uint16_t *g_959 = &g_85[1];
static uint16_t **g_958 = &g_959;
static uint16_t g_1050 = 0x8B82L;
static const uint16_t *g_1057 = (void*)0;
static const uint16_t **g_1056 = &g_1057;
static uint32_t g_1078 = 4294967295UL;
static uint16_t **g_1121 = &g_959;
static int32_t g_1138[5] = {0xE72D1F75L,0xE72D1F75L,0xE72D1F75L,0xE72D1F75L,0xE72D1F75L};
static int64_t g_1156 = (-1L);
static uint64_t **g_1177 = &g_870;
static const int32_t *g_1285[7][7][1] = {{{&g_1138[2]},{&g_1138[4]},{&g_10},{&g_21},{&g_10},{(void*)0},{&g_10}},{{&g_21},{&g_10},{&g_1138[4]},{&g_1138[2]},{&g_2},{&g_1138[4]},{&g_13}},{{(void*)0},{&g_10},{&g_1138[4]},{&g_10},{(void*)0},{&g_13},{&g_1138[4]}},{{&g_2},{&g_1138[2]},{&g_1138[4]},{&g_10},{&g_21},{&g_10},{(void*)0}},{{&g_10},{&g_21},{&g_10},{&g_1138[4]},{&g_1138[2]},{&g_2},{&g_1138[4]}},{{&g_13},{(void*)0},{&g_10},{&g_1138[4]},{&g_10},{(void*)0},{&g_13}},{{&g_1138[4]},{&g_2},{&g_1138[2]},{&g_1138[4]},{&g_10},{&g_21},{&g_10}}};
static int64_t g_1298[2][6][7] = {{{0L,0L,0xF31D276EF28772CALL,5L,0x1847C42B8B32F010LL,5L,0xF31D276EF28772CALL},{8L,8L,0x7F60039E20933450LL,0x2BDEA27482B56168LL,0xF2FC5F6AFED48B02LL,0x2BDEA27482B56168LL,0x7F60039E20933450LL},{0L,0L,0xF31D276EF28772CALL,5L,0x1847C42B8B32F010LL,5L,0xF31D276EF28772CALL},{8L,8L,0x7F60039E20933450LL,0x2BDEA27482B56168LL,0xF2FC5F6AFED48B02LL,0x2BDEA27482B56168LL,0x7F60039E20933450LL},{0L,0L,0xF31D276EF28772CALL,5L,0x1847C42B8B32F010LL,5L,0xF31D276EF28772CALL},{8L,8L,0x7F60039E20933450LL,0x2BDEA27482B56168LL,0xF2FC5F6AFED48B02LL,0x2BDEA27482B56168LL,0x7F60039E20933450LL}},{{0L,0L,0xF31D276EF28772CALL,5L,0x1847C42B8B32F010LL,5L,0xF31D276EF28772CALL},{8L,8L,0x7F60039E20933450LL,0x2BDEA27482B56168LL,0xF2FC5F6AFED48B02LL,0x2BDEA27482B56168LL,0x7F60039E20933450LL},{0L,0L,0xF31D276EF28772CALL,5L,0x1847C42B8B32F010LL,5L,0xF31D276EF28772CALL},{8L,8L,0x7F60039E20933450LL,0x2BDEA27482B56168LL,(-9L),0xBCFC133B68A7BD61LL,8L},{0x1847C42B8B32F010LL,0x1847C42B8B32F010LL,0L,0xA971992C6A0270C7LL,1L,0xA971992C6A0270C7LL,0L},{0xF2FC5F6AFED48B02LL,0xF2FC5F6AFED48B02LL,8L,0xBCFC133B68A7BD61LL,(-9L),0xBCFC133B68A7BD61LL,8L}}};
static uint64_t g_1306 = 18446744073709551611UL;
static uint16_t g_1310 = 65534UL;
static const uint16_t **g_1327 = &g_1057;
static const uint16_t *** const g_1326 = &g_1327;
static int32_t g_1399[1] = {0L};
static uint8_t g_1426 = 0x7AL;
static int32_t g_1446 = 0x5C55B570L;
static uint8_t g_1489 = 1UL;
static int8_t g_1511[7] = {0xFDL,0xFDL,0xFDL,0xFDL,0xFDL,0xFDL,0xFDL};



static uint32_t  func_1(void);
static uint8_t  func_26(uint16_t  p_27);
static uint64_t  func_42(union U1  p_43, uint16_t  p_44, int32_t * p_45, int16_t  p_46);
static uint32_t  func_49(int32_t ** p_50);
static int32_t ** func_51(uint64_t * p_52, const int8_t * p_53);
static int32_t  func_66(int64_t * p_67, const union U1  p_68, union U1  p_69);
static union U2 * func_77(uint32_t  p_78);
static int32_t * func_104(int64_t  p_105, int64_t * p_106, union U2  p_107);




static uint32_t  func_1(void)
{ 
    uint32_t l_14 = 18446744073709551615UL;
    int32_t l_22 = 0x38EB16E2L;
    uint16_t **l_1324 = &g_959;
    uint16_t ***l_1323[4][7][3] = {{{(void*)0,&l_1324,&l_1324},{(void*)0,&l_1324,&l_1324},{&l_1324,&l_1324,&l_1324},{&l_1324,&l_1324,&l_1324},{&l_1324,&l_1324,(void*)0},{&l_1324,&l_1324,&l_1324},{&l_1324,&l_1324,&l_1324}},{{&l_1324,&l_1324,&l_1324},{&l_1324,&l_1324,&l_1324},{&l_1324,&l_1324,&l_1324},{&l_1324,&l_1324,&l_1324},{(void*)0,&l_1324,(void*)0},{&l_1324,(void*)0,&l_1324},{(void*)0,&l_1324,&l_1324}},{{&l_1324,&l_1324,&l_1324},{&l_1324,&l_1324,&l_1324},{&l_1324,&l_1324,&l_1324},{&l_1324,&l_1324,&l_1324},{&l_1324,&l_1324,&l_1324},{&l_1324,(void*)0,&l_1324},{&l_1324,&l_1324,&l_1324}},{{&l_1324,&l_1324,&l_1324},{&l_1324,&l_1324,&l_1324},{(void*)0,&l_1324,&l_1324},{(void*)0,&l_1324,&l_1324},{&l_1324,&l_1324,&l_1324},{&l_1324,&l_1324,&l_1324},{&l_1324,&l_1324,(void*)0}}};
    int32_t l_1351 = (-5L);
    uint8_t l_1353 = 8UL;
    int32_t l_1394 = 0x583DE696L;
    int32_t l_1397[4];
    uint16_t l_1402 = 65535UL;
    uint32_t l_1422[6][3][7] = {{{6UL,4294967286UL,3UL,0xA87C6259L,4294967295UL,0x45FE9008L,4294967290UL},{0x3663DDE8L,2UL,5UL,5UL,2UL,0x3663DDE8L,8UL},{4294967290UL,0xD5124DC6L,0UL,0x791D64C2L,0x62F57657L,0x71593848L,4294967295UL}},{{4294967295UL,0x519A913CL,0x5C2E3FF7L,0xA9113987L,0x177374FEL,0x617E7F09L,0x6843336CL},{0x791D64C2L,0xD5124DC6L,0UL,0x6F71D1ACL,0UL,4294967295UL,0x476DC0D1L},{0UL,2UL,0x8DFDBEF2L,0xAF2E120DL,0x8DFDBEF2L,2UL,0UL}},{{1UL,4294967286UL,4294967290UL,0x71593848L,0x6F71D1ACL,0x62F57657L,6UL},{0UL,0x3663DDE8L,0xA9113987L,4294967287UL,0xE61C6CCDL,0x177374FEL,0xD0F3C122L},{0x62F57657L,4294967287UL,4294967290UL,0x2C6B9A0EL,0x3ED47487L,0UL,0x3725BAE8L}},{{4294967295UL,0x5C2E3FF7L,0x8DFDBEF2L,0UL,0UL,0x8DFDBEF2L,0x5C2E3FF7L},{8UL,4294967295UL,0UL,0xD38BDC67L,0x3725BAE8L,0x6F71D1ACL,4294967286UL},{1UL,0x617E7F09L,0x5C2E3FF7L,4294967295UL,0xAAEFD627L,0UL,0UL}},{{0xB96CFCE7L,0x043A1019L,4294967290UL,4294967295UL,4294967287UL,0x3725BAE8L,0x45FE9008L},{0x177374FEL,0UL,0xAAEFD627L,0x6A55008BL,0xA9113987L,0x6A55008BL,0xAAEFD627L},{0x71593848L,0x71593848L,0UL,0x043A1019L,8UL,0xB96CFCE7L,6UL}},{{0x01244938L,2UL,4294967295UL,0x617E7F09L,0x3663DDE8L,0xAAEFD627L,4294967295UL},{0UL,0UL,0xA87C6259L,0xD38BDC67L,8UL,4294967287UL,0x71593848L},{0UL,5UL,0xD0F3C122L,0UL,0xA9113987L,0xA9113987L,0UL}}};
    uint64_t ***l_1476 = (void*)0;
    struct S0 *l_1482 = &g_530.f0;
    struct S0 **l_1483 = &l_1482;
    uint32_t l_1586 = 0x07CB2ED4L;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1397[i] = (-1L);
    for (g_2 = 0; (g_2 != (-18)); g_2 = safe_sub_func_uint32_t_u_u(g_2, 6))
    { 
        int32_t *l_5[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        uint64_t *l_1354 = (void*)0;
        int32_t l_1356 = 0x9833B89FL;
        int32_t l_1383 = 0L;
        int8_t l_1384[1];
        int8_t l_1423 = 0xDFL;
        uint64_t ***l_1478 = &g_869;
        int i;
        for (i = 0; i < 1; i++)
            l_1384[i] = (-6L);
        g_6[4][2] &= g_2;
        if (g_6[0][1])
            continue;
        for (g_7 = 0; (g_7 == 13); g_7++)
        { 
            int32_t l_1328[3];
            int i;
            for (i = 0; i < 3; i++)
                l_1328[i] = (-1L);
            for (g_10 = (-30); (g_10 >= 25); g_10++)
            { 
                uint32_t l_17 = 0xF9F7C8B1L;
                struct S0 *l_1329[2][1];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1329[i][j] = &g_530.f0;
                }
                for (g_13 = 0; (g_13 <= 3); g_13 += 1)
                { 
                    uint64_t *l_16[5];
                    int32_t l_20 = 0x40A98CEEL;
                    uint16_t ****l_1325 = &l_1323[0][1][1];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_16[i] = (void*)0;
                    l_14 &= (-4L);
                    l_20 = (!(++l_17));
                    g_23++;
                }
                g_530.f0 = (g_532.f0 = ((*g_553) = (*g_553)));
            }
        }
        for (g_1078 = 0; (g_1078 <= 3); g_1078 += 1)
        { 
            int i;
            return g_1138[(g_1078 + 1)];
        }
        for (g_84 = 0; (g_84 <= 0); g_84 += 1)
        { 
            int16_t l_1350[2][4] = {{1L,(-3L),(-3L),1L},{(-3L),1L,(-3L),(-3L)}};
            union U1 l_1352 = {{0xA491L,6UL,0x4B966DE4220CBCCCLL}};
            uint8_t *l_1355 = &g_23;
            int32_t l_1390 = 0x77EC533AL;
            int32_t l_1391 = 0x2DE35403L;
            int32_t l_1392[5] = {1L,1L,1L,1L,1L};
            int i, j;
            if ((*g_539))
                break;
            if ((safe_div_func_int8_t_s_s((safe_add_func_int8_t_s_s(0x1DL, ((*g_553) , (safe_lshift_func_int8_t_s_s((safe_div_func_int32_t_s_s((0x18L && (((*g_544) <= (((safe_div_func_int64_t_s_s((*g_820), (safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((*l_1355) ^= ((**g_869) && ((((safe_mul_func_int16_t_s_s((((((safe_mod_func_int64_t_s_s((((*g_539) = l_1350[0][2]) & 0x11D0E399L), l_1351)) | 0x9C1B659ED868F41ELL) , l_1352) , (void*)0) == (**g_551)), l_1353)) , (void*)0) != l_1354) != 0UL))), l_1351)), (-7L))))) || l_22) , l_1352.f0.f1)) || (**g_1177))), 0x3F8D26AFL)), l_1356))))), g_70.f0.f2)))
            { 
                int8_t l_1366[6];
                int64_t l_1367[3];
                union U2 *l_1381 = (void*)0;
                union U2 **l_1380 = &l_1381;
                int64_t *l_1382 = &g_1298[1][2][4];
                int i;
                for (i = 0; i < 6; i++)
                    l_1366[i] = (-4L);
                for (i = 0; i < 3; i++)
                    l_1367[i] = 0x1DF7D7A78793F9A4LL;
                (*g_539) = (l_1366[1] = (safe_rshift_func_int16_t_s_u((safe_add_func_int64_t_s_s(l_1352.f2, (((safe_rshift_func_int8_t_s_u(l_1350[0][2], 1)) , ((**g_876) |= (*g_820))) ^ (safe_div_func_int8_t_s_s((g_70.f1 != 0xAF9F8296L), ((safe_unary_minus_func_uint32_t_u(((3UL > 0xAC3002D2L) ^ l_1353))) && l_22)))))), 12)));
                l_1384[0] |= (((**g_819) <= (((*l_1382) ^= (l_1367[1] != (safe_sub_func_uint64_t_u_u(((safe_mod_func_uint64_t_u_u((*g_870), (*g_820))) != (g_70.f1 != ((((safe_rshift_func_int8_t_s_u(((**g_543) ^= (((safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((((safe_div_func_int64_t_s_s((*g_820), l_1367[1])) & l_1352.f0.f2) < (*g_539)), l_1350[0][2])), g_140)) ^ 0x6E4549A787AF2363LL) >= (**g_876))), 2)) , (void*)0) != l_1380) >= g_532.f0.f0))), 0UL)))) > (*g_870))) && l_1383);
            }
            else
            { 
                uint32_t l_1386 = 18446744073709551615UL;
                int32_t l_1389 = (-1L);
                int32_t l_1396[2];
                uint64_t ***l_1434 = &g_869;
                uint64_t ****l_1433[1][3];
                uint64_t *****l_1432 = &l_1433[0][1];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_1396[i] = 0xEB194046L;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_1433[i][j] = &l_1434;
                }
                if (l_1352.f0.f2)
                { 
                    int32_t **l_1385 = &l_5[0];
                    int32_t l_1393 = 0xBFCE00D6L;
                    int32_t l_1395 = 0xC50C4DDCL;
                    int32_t l_1398 = 0x042F0D43L;
                    int32_t l_1400 = 0x27C4CE2DL;
                    int8_t l_1401 = 0x80L;
                    int16_t *l_1424 = &g_98;
                    uint8_t *l_1425 = &g_141;
                    (*l_1385) = (void*)0;
                    l_1386++;
                    l_1402--;
                    (*g_539) = (((*l_1425) = (g_6[4][2] >= (l_14 != ((safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(((*l_1355) ^= (4294967294UL >= (safe_sub_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(l_1350[1][3], (((((safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u(l_1396[0])), ((**g_876) , ((*l_1424) = (((safe_sub_func_uint16_t_u_u(((((safe_lshift_func_uint16_t_u_s((*g_959), 1)) >= l_1422[0][1][1]) & l_1353) , 0x496DL), (**g_1121))) != l_1423) ^ 0x16CBDF9EL))))) , l_1352.f0) , g_70.f0.f0) == 4294967290UL) == (*g_820)))), (**g_958))) , 1UL), l_1397[3])))), l_1422[0][1][1])), (**g_1121))) && (*g_870))))) & 1UL);
                    g_1426--;
                }
                else
                { 
                    union U2 *l_1431 = &g_89;
                    uint32_t *l_1447 = &g_356[0][3][3];
                    if ((*g_539))
                        break;
                    (*g_539) = (safe_add_func_int64_t_s_s((**g_876), (((g_56[0] ^= (((*l_1431) = g_89) , (**g_543))) < l_22) , ((void*)0 == l_1432))));
                    (*g_539) &= (-1L);
                    l_1397[3] = ((*g_870) , (g_622 != ((*l_1447) = ((safe_sub_func_int8_t_s_s((-1L), (((safe_div_func_uint16_t_u_u((+(safe_div_func_uint8_t_u_u(g_70.f2, 250UL))), 0xEA97L)) != (safe_div_func_int64_t_s_s((safe_lshift_func_int16_t_s_u(0x7838L, (**g_1121))), 18446744073709551607UL))) <= 0x829A9A4EL))) != g_1446))));
                }
            }
            for (g_1426 = 0; (g_1426 <= 0); g_1426 += 1)
            { 
                uint32_t *l_1473 = &g_356[0][2][0];
                uint64_t ****l_1477 = &l_1476;
                uint32_t l_1479 = 0x8D1C8AB4L;
                uint32_t *l_1480 = &g_1078;
                int8_t l_1481 = 0L;
                int i, j, k;
                (*g_539) ^= (safe_lshift_func_uint16_t_u_u((((0x0536L || g_165) , 0x15EE62B1A07D3B7ALL) | 5UL), 5));
                l_1391 = (safe_add_func_uint64_t_u_u(((**g_869) = (**g_869)), (safe_sub_func_int64_t_s_s(((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(((**g_543) & (((((safe_sub_func_int32_t_s_s((((*l_1480) = (safe_add_func_int16_t_s_s(((!l_1397[3]) | (safe_add_func_uint32_t_u_u(((*l_1473) = (l_1392[4] &= l_1350[0][2])), (safe_rshift_func_uint8_t_u_u((((l_1352.f0.f0 ^ 0x8890L) || (((*l_1477) = l_1476) != l_1478)) && 0L), l_1479))))), (**g_1121)))) >= l_1422[3][0][0]), g_13)) > (**g_958)) <= 0x172FL) >= (*g_544)) < (**g_958))), 6)), 0xA41351E7L)) ^ g_6[4][2]), l_1481)), 3)), l_1353)) & 7L), 9UL))));
            }
        }
    }
    (*g_553) = (**g_552);
    (*l_1483) = l_1482;
    (***g_551) = ((*l_1482) = (**g_552));
    for (g_1078 = 0; (g_1078 <= 6); g_1078 = safe_add_func_int64_t_s_s(g_1078, 7))
    { 
        const union U2 *l_1487 = &g_89;
        const union U2 **l_1486 = &l_1487;
        int32_t l_1488 = 0x397B8FF0L;
        union U1 **l_1497 = &g_529;
        int64_t l_1532 = 0xEE0AC933ECF7DDA5LL;
        int32_t l_1533 = 0x436F6E21L;
        int32_t l_1534 = 1L;
        int32_t l_1535 = 0xF099664DL;
        int8_t l_1567[2];
        int i;
        for (i = 0; i < 2; i++)
            l_1567[i] = (-1L);
        l_1486 = l_1486;
        for (g_98 = 0; (g_98 <= 2); g_98 += 1)
        { 
            uint32_t l_1490 = 6UL;
            union U1 l_1498 = {{0xC7B2L,1UL,-1L}};
            int32_t l_1525[3][7] = {{0x8B3D1FFCL,(-7L),0xE822E50EL,1L,(-7L),1L,0xE822E50EL},{(-7L),(-7L),6L,0x9C8A216FL,(-4L),6L,(-4L)},{0x9C8A216FL,0xE822E50EL,0xE822E50EL,0x9C8A216FL,1L,0x8B3D1FFCL,0x9C8A216FL}};
            int8_t l_1566 = 0x3EL;
            int32_t l_1597 = 0xFD10CB40L;
            int i, j;
            for (l_1394 = 0; (l_1394 <= 0); l_1394 += 1)
            { 
                int i, j, k;
                g_1285[(l_1394 + 1)][(g_98 + 1)][l_1394] = g_1285[(l_1394 + 4)][(g_98 + 4)][l_1394];
                if (l_1488)
                    break;
                (*g_539) &= g_1489;
            }
            for (g_1310 = 0; (g_1310 <= 2); g_1310 += 1)
            { 
                const int32_t l_1508 = (-1L);
                int32_t l_1530 = 0x45AE1397L;
                int32_t l_1531 = 0x58F5277AL;
                uint64_t l_1536 = 0x50404E261904481BLL;
                uint8_t *l_1540 = &g_170[0];
                uint16_t ***l_1551 = (void*)0;
                uint16_t ****l_1552 = &l_1323[1][2][1];
            }
        }
        if (l_1402)
            continue;
    }
    return g_530.f0.f2;
}



static uint8_t  func_26(uint16_t  p_27)
{ 
    uint64_t *l_54 = (void*)0;
    union U1 l_822 = {{0x7B43L,0x006563F9L,0x16A5F51594F92550LL}};
    int32_t *l_823 = (void*)0;
    const int8_t l_828 = 0xFBL;
    const int64_t *l_847 = &g_145.f2;
    const int64_t * const *l_846[6][3][1] = {{{&l_847},{&l_847},{&l_847}},{{&l_847},{&l_847},{&l_847}},{{&l_847},{&l_847},{&l_847}},{{&l_847},{&l_847},{&l_847}},{{&l_847},{&l_847},{&l_847}},{{&l_847},{&l_847},{&l_847}}};
    int32_t l_851 = 0x2E4D7D86L;
    union U1 l_852 = {{65526UL,18446744073709551612UL,0x238F820D8DB6AF7ALL}};
    int32_t l_862 = (-3L);
    int32_t l_872 = 0x126A4615L;
    const struct S0 *l_915 = &g_530.f0;
    const struct S0 **l_914 = &l_915;
    int32_t l_916 = 1L;
    int32_t l_921[3][5][7] = {{{0xFEEE45F3L,0xE6214135L,0x16B18542L,0x9A448D14L,0x9A448D14L,0x16B18542L,0xE6214135L},{0xA2B36F76L,0x3CE0660BL,(-1L),0x3CE0660BL,0xA2B36F76L,0x3CE0660BL,(-1L)},{0x9A448D14L,0x9A448D14L,0x16B18542L,0xE6214135L,0xFEEE45F3L,0xFEEE45F3L,0xE6214135L},{0xD92431C1L,0x7DCE2E7DL,0xD92431C1L,0x3CE0660BL,0xD92431C1L,0x7DCE2E7DL,0xD92431C1L},{0x9A448D14L,0xE6214135L,0xE6214135L,0x9A448D14L,0xFEEE45F3L,0x16B18542L,0x16B18542L}},{{0xA2B36F76L,0x7DCE2E7DL,(-1L),0x7DCE2E7DL,0xA2B36F76L,0x7DCE2E7DL,(-1L)},{0xFEEE45F3L,0x9A448D14L,0xE6214135L,0xE6214135L,0x9A448D14L,0xFEEE45F3L,0x16B18542L},{0xD92431C1L,0x3CE0660BL,0xD92431C1L,0x7DCE2E7DL,0xD92431C1L,0x3CE0660BL,0xD92431C1L},{0xFEEE45F3L,0xE6214135L,0x16B18542L,0x9A448D14L,0x9A448D14L,0x16B18542L,0xE6214135L},{0xA2B36F76L,0x3CE0660BL,(-1L),0x3CE0660BL,0xA2B36F76L,0x3CE0660BL,(-1L)}},{{0x9A448D14L,0x9A448D14L,0x16B18542L,0xE6214135L,0xFEEE45F3L,0xFEEE45F3L,0xE6214135L},{0xD92431C1L,0x7DCE2E7DL,0xD92431C1L,0x3CE0660BL,0xD92431C1L,0x7DCE2E7DL,0xD92431C1L},{0x9A448D14L,0xE6214135L,0xE6214135L,0x9A448D14L,0xFEEE45F3L,0x16B18542L,0x16B18542L},{0xA2B36F76L,0x7DCE2E7DL,(-1L),0x7DCE2E7DL,0xA2B36F76L,0x7DCE2E7DL,(-1L)},{0xFEEE45F3L,0x9A448D14L,0xE6214135L,0xE6214135L,0x9A448D14L,0xFEEE45F3L,0x16B18542L}}};
    union U2 l_947 = {0x0E09L};
    int32_t ** const *l_967[2];
    int32_t **l_969 = (void*)0;
    int32_t ***l_968 = &l_969;
    union U2 * const l_1044 = &l_947;
    union U2 * const *l_1043[2];
    uint32_t l_1074 = 0x8F0454FAL;
    int32_t l_1077 = (-2L);
    int32_t l_1117 = 7L;
    uint8_t *l_1125 = (void*)0;
    uint8_t **l_1124 = &l_1125;
    int16_t l_1146[1][7] = {{(-7L),0x23DFL,(-7L),(-7L),0x23DFL,(-7L),(-7L)}};
    int32_t l_1169 = (-2L);
    const int32_t *l_1199[1][2];
    const int32_t **l_1200 = &l_1199[0][0];
    int64_t l_1302 = 0x148A41FF0B90F24ELL;
    int64_t l_1303 = 0x068FB1AE4189BAF6LL;
    uint32_t l_1320 = 18446744073709551615UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_967[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_1043[i] = &l_1044;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_1199[i][j] = &g_7;
    }
    for (p_27 = 0; (p_27 <= 2); p_27 += 1)
    { 
        uint16_t l_826 = 65535UL;
        const int32_t l_827 = 0x09FE119CL;
        union U2 l_833 = {0x1F26L};
        struct S0 *l_837 = &g_532.f0;
        struct S0 **l_836 = &l_837;
        struct S0 ***l_835[1][6][5] = {{{&l_836,&l_836,&l_836,&l_836,&l_836},{&l_836,(void*)0,&l_836,&l_836,&l_836},{&l_836,&l_836,(void*)0,&l_836,(void*)0},{&l_836,&l_836,&l_836,&l_836,&l_836},{&l_836,&l_836,&l_836,&l_836,&l_836},{&l_836,&l_836,(void*)0,&l_836,&l_836}}};
        struct S0 ****l_834 = &l_835[0][3][4];
        uint16_t l_843 = 0UL;
        int32_t *l_849[5][5][7] = {{{&g_13,(void*)0,(void*)0,(void*)0,(void*)0,&g_13,&g_13},{&g_2,&g_7,&g_10,&g_10,&g_7,(void*)0,&g_13},{&g_13,&g_7,(void*)0,&g_140,(void*)0,&g_7,&g_13},{&g_21,&g_7,&g_13,&g_10,&g_7,(void*)0,(void*)0},{&g_13,(void*)0,(void*)0,(void*)0,(void*)0,&g_13,&g_13}},{{&g_2,&g_7,&g_10,&g_10,&g_7,(void*)0,&g_13},{&g_13,&g_7,(void*)0,&g_140,(void*)0,&g_7,&g_13},{&g_21,&g_7,&g_13,&g_10,&g_7,(void*)0,(void*)0},{&g_13,(void*)0,(void*)0,(void*)0,(void*)0,&g_13,&g_13},{&g_2,&g_7,&g_10,&g_10,&g_7,(void*)0,&g_13}},{{&g_13,&g_7,(void*)0,&g_140,(void*)0,&g_7,&g_13},{&g_21,&g_7,&g_13,&g_10,&g_7,(void*)0,(void*)0},{&g_13,(void*)0,(void*)0,(void*)0,(void*)0,&g_13,&g_13},{&g_2,&g_7,&g_10,&g_10,&g_7,(void*)0,&g_13},{&g_13,&g_7,(void*)0,&g_140,(void*)0,&g_7,&g_13}},{{&g_21,&g_7,&g_13,&g_10,&g_7,(void*)0,(void*)0},{&g_13,(void*)0,(void*)0,(void*)0,(void*)0,&g_13,&g_13},{&g_2,&g_7,&g_10,&g_10,&g_7,(void*)0,&g_13},{&g_13,&g_7,(void*)0,&g_140,(void*)0,&g_7,&g_13},{&g_21,&g_7,&g_13,&g_10,&g_7,(void*)0,&g_10}},{{&g_13,&g_140,&g_13,&g_13,&g_140,&g_13,&g_21},{&g_13,&g_10,&g_13,&g_21,&g_10,(void*)0,&g_140},{&g_13,(void*)0,&g_13,(void*)0,&g_140,&g_21,&g_21},{&g_21,&g_10,(void*)0,&g_21,&g_13,(void*)0,&g_10},{&g_13,&g_140,&g_13,&g_13,&g_140,&g_13,&g_21}}};
        int64_t * const l_854 = &l_822.f0.f2;
        int64_t *l_855 = &l_822.f0.f2;
        uint32_t l_864 = 0x085DAFA8L;
        const union U1 l_878 = {{0x9EA6L,18446744073709551615UL,-1L}};
        int64_t l_920 = 0xC0418DEF213D0198LL;
        uint16_t *l_953[4] = {&g_145.f0,&g_145.f0,&g_145.f0,&g_145.f0};
        int32_t ** const *l_965[3];
        uint8_t l_978 = 1UL;
        union U2 **l_1042 = (void*)0;
        const uint16_t *l_1054 = &g_85[2];
        const uint16_t **l_1053[1][5][4] = {{{&l_1054,&l_1054,&l_1054,&l_1054},{&l_1054,&l_1054,&l_1054,&l_1054},{&l_1054,(void*)0,&l_1054,&l_1054},{&l_1054,(void*)0,(void*)0,&l_1054},{(void*)0,&l_1054,&l_1054,&l_1054}}};
        int8_t l_1070 = 0xB9L;
        int16_t l_1080 = 0x05A6L;
        uint32_t l_1085 = 18446744073709551615UL;
        uint32_t l_1086 = 18446744073709551611UL;
        int8_t l_1107 = 0xB1L;
        int64_t l_1133 = (-4L);
        const uint64_t l_1135[4] = {0UL,0UL,0UL,0UL};
        int32_t l_1175 = (-1L);
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_965[i] = (void*)0;
        for (g_23 = 0; (g_23 <= 2); g_23 += 1)
        { 
            int32_t *l_28 = &g_21;
            int32_t **l_29 = &l_28;
            const int8_t *l_55 = &g_56[0];
            union U1 l_821[5] = {{{0x5565L,4UL,9L}},{{0x5565L,4UL,9L}},{{0x5565L,4UL,9L}},{{0x5565L,4UL,9L}},{{0x5565L,4UL,9L}}};
            uint8_t *l_825[5][2][5] = {{{&g_23,(void*)0,(void*)0,&g_23,(void*)0},{&g_23,&g_23,&g_23,&g_23,&g_23}},{{(void*)0,&g_23,(void*)0,(void*)0,&g_23},{&g_23,&g_23,&g_23,&g_23,&g_23}},{{&g_23,&g_23,&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23,&g_23,&g_23}},{{&g_23,(void*)0,(void*)0,&g_23,(void*)0},{&g_23,&g_23,&g_23,&g_23,&g_23}},{{(void*)0,&g_23,(void*)0,(void*)0,&g_23},{&g_23,&g_23,&g_23,&g_23,&g_23}}};
            uint64_t **l_838 = (void*)0;
            int i, j, k;
            (*l_29) = l_28;
            if ((safe_sub_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(p_27, (safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((p_27 != ((safe_unary_minus_func_uint8_t_u((l_826 &= ((safe_unary_minus_func_int64_t_s(p_27)) , (0xF7L ^ ((safe_lshift_func_int16_t_s_u(g_10, 9)) ^ func_42(((((safe_lshift_func_int8_t_s_s(0x83L, (func_49(func_51(l_54, l_55)) , 0xF3L))) , (-5L)) , l_821[2]) , l_822), g_10, l_823, p_27))))))) == p_27)), l_827)), l_828)))), 0L)))
            { 
                int64_t *l_829 = (void*)0;
                for (g_532.f0.f0 = 0; (g_532.f0.f0 <= 2); g_532.f0.f0 += 1)
                { 
                    int32_t *l_830 = &g_2;
                    int64_t **l_831 = (void*)0;
                    int64_t **l_832 = &l_829;
                    (*l_29) = (g_593 , l_830);
                    (*l_29) = func_104((*l_28), ((*l_832) = &g_63), l_833);
                    if (p_27)
                        continue;
                }
                if (((*g_820) & (l_834 != &g_551)))
                { 
                    return p_27;
                }
                else
                { 
                    uint64_t ***l_839[6][7][6] = {{{&l_838,&l_838,(void*)0,&l_838,(void*)0,&l_838},{&l_838,(void*)0,&l_838,(void*)0,(void*)0,(void*)0},{(void*)0,&l_838,(void*)0,(void*)0,&l_838,&l_838},{(void*)0,(void*)0,&l_838,&l_838,&l_838,(void*)0},{&l_838,&l_838,&l_838,&l_838,&l_838,(void*)0},{(void*)0,(void*)0,&l_838,(void*)0,&l_838,&l_838},{&l_838,(void*)0,&l_838,(void*)0,&l_838,&l_838}},{{&l_838,&l_838,&l_838,&l_838,&l_838,(void*)0},{&l_838,(void*)0,&l_838,&l_838,&l_838,(void*)0},{&l_838,&l_838,(void*)0,&l_838,(void*)0,(void*)0},{&l_838,(void*)0,(void*)0,&l_838,(void*)0,&l_838},{&l_838,&l_838,(void*)0,(void*)0,&l_838,&l_838},{(void*)0,&l_838,(void*)0,&l_838,&l_838,(void*)0},{(void*)0,&l_838,(void*)0,&l_838,(void*)0,&l_838}},{{&l_838,&l_838,(void*)0,(void*)0,&l_838,&l_838},{&l_838,&l_838,&l_838,&l_838,&l_838,&l_838},{&l_838,&l_838,&l_838,&l_838,&l_838,&l_838},{&l_838,(void*)0,&l_838,&l_838,&l_838,&l_838},{&l_838,&l_838,&l_838,&l_838,&l_838,&l_838},{&l_838,&l_838,&l_838,&l_838,&l_838,&l_838},{&l_838,&l_838,&l_838,&l_838,&l_838,&l_838}},{{&l_838,&l_838,&l_838,&l_838,(void*)0,&l_838},{&l_838,&l_838,&l_838,&l_838,&l_838,&l_838},{&l_838,&l_838,&l_838,(void*)0,(void*)0,&l_838},{&l_838,&l_838,&l_838,&l_838,&l_838,&l_838},{&l_838,&l_838,&l_838,(void*)0,(void*)0,&l_838},{&l_838,(void*)0,&l_838,&l_838,(void*)0,(void*)0},{&l_838,&l_838,(void*)0,&l_838,&l_838,&l_838}},{{&l_838,(void*)0,(void*)0,&l_838,&l_838,(void*)0},{&l_838,&l_838,&l_838,&l_838,&l_838,&l_838},{&l_838,&l_838,&l_838,&l_838,&l_838,&l_838},{&l_838,(void*)0,&l_838,&l_838,(void*)0,(void*)0},{&l_838,&l_838,&l_838,&l_838,&l_838,&l_838},{&l_838,(void*)0,&l_838,&l_838,&l_838,&l_838},{&l_838,(void*)0,&l_838,(void*)0,(void*)0,&l_838}},{{&l_838,&l_838,(void*)0,&l_838,&l_838,&l_838},{(void*)0,(void*)0,&l_838,&l_838,&l_838,&l_838},{(void*)0,(void*)0,&l_838,&l_838,&l_838,(void*)0},{(void*)0,&l_838,&l_838,&l_838,&l_838,&l_838},{&l_838,&l_838,&l_838,&l_838,(void*)0,&l_838},{(void*)0,&l_838,&l_838,&l_838,(void*)0,&l_838},{&l_838,&l_838,&l_838,&l_838,&l_838,&l_838}}};
                    int i, j, k;
                    if (p_27)
                        break;
                    l_838 = l_838;
                    l_821[2].f0 = ((**l_836) = l_821[2].f0);
                    (*l_29) = (void*)0;
                }
            }
            else
            { 
                union U2 *l_841[4];
                union U2 **l_840 = &l_841[1];
                int i;
                for (i = 0; i < 4; i++)
                    l_841[i] = &l_833;
                (*l_29) = l_823;
                (*l_840) = (void*)0;
            }
            for (g_622 = 0; (g_622 <= 2); g_622 += 1)
            { 
                if (l_822.f0.f0)
                    break;
            }
            for (l_826 = 0; (l_826 <= 2); l_826 += 1)
            { 
                int i, j;
                for (l_822.f0.f2 = 2; (l_822.f0.f2 >= 0); l_822.f0.f2 -= 1)
                { 
                    int64_t l_842 = 0x14CC9D27530D4F14LL;
                    int i;
                    l_842 ^= ((void*)0 == &g_544);
                    if (g_85[(l_826 + 1)])
                        break;
                    ++l_843;
                }
                for (g_72 = 0; (g_72 >= 0); g_72 -= 1)
                { 
                    const int64_t * const **l_848 = &l_846[3][0][0];
                    int32_t **l_850 = &g_539;
                    (*l_848) = l_846[1][2][0];
                    (*l_850) = ((*l_29) = l_849[4][0][4]);
                }
                l_851 ^= g_6[(g_23 + 1)][g_23];
            }
        }
        if ((((((l_852 , (p_27 == p_27)) , ((*g_544) ^ (+(((*g_544) , l_854) != l_855)))) , p_27) || 7UL) > (-7L)))
        { 
            int32_t l_856 = 0L;
            int32_t l_861[7] = {4L,4L,4L,4L,4L,4L,4L};
            int i;
            l_851 = p_27;
            l_856 = p_27;
            for (g_622 = 0; (g_622 <= 3); g_622 += 1)
            { 
                int i;
                return g_85[g_622];
            }
            for (g_593 = 0; (g_593 <= 2); g_593 += 1)
            { 
                const uint16_t *l_857 = &g_145.f0;
                uint16_t *l_858 = &g_532.f0.f0;
                uint16_t **l_859 = (void*)0;
                uint16_t **l_860 = &l_858;
                int32_t l_863[3][2];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_863[i][j] = 0x9B330266L;
                }
                l_851 = (p_27 , (l_857 != ((*l_860) = l_858)));
                --l_864;
                for (l_843 = 0; (l_843 <= 2); l_843 += 1)
                { 
                    int i, j;
                    return g_6[(p_27 + 2)][l_843];
                }
            }
            for (l_852.f0.f0 = 0; (l_852.f0.f0 <= 2); l_852.f0.f0 += 1)
            { 
                l_861[2] ^= (~(!0xBFFDL));
            }
        }
        else
        { 
            uint64_t ***l_871 = &g_869;
            int32_t l_886[1];
            uint32_t l_923[4][3][4] = {{{0x4F44AD44L,4UL,0UL,0xAC51FD14L},{4294967295UL,1UL,1UL,4294967295UL},{4294967295UL,0x33895DF2L,0UL,4UL}},{{4294967294UL,4294967295UL,0UL,0x4F44AD44L},{0xAC51FD14L,0xE6AD8782L,0xAC51FD14L,0x4F44AD44L},{0UL,4294967295UL,4294967294UL,4UL}},{{0UL,0x33895DF2L,4294967295UL,4294967295UL},{1UL,1UL,4294967295UL,0xAC51FD14L},{0UL,0xFEB578A8L,4294967294UL,0x33895DF2L}},{{0UL,4294967294UL,0xAC51FD14L,4294967294UL},{0xAC51FD14L,4294967294UL,0UL,0x33895DF2L},{4294967294UL,0xFEB578A8L,0UL,0xAC51FD14L}}};
            uint16_t *l_952 = &l_947.f0;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_886[i] = 0xFE98CF24L;
            l_872 ^= (((*l_871) = g_869) != (*g_406));
            for (g_532.f0.f1 = 0; (g_532.f0.f1 <= 2); g_532.f0.f1 += 1)
            { 
                uint32_t l_873[7] = {0x265FE91DL,0x265FE91DL,0x265FE91DL,0x265FE91DL,0x265FE91DL,0x265FE91DL,0x265FE91DL};
                int32_t l_918[3];
                int32_t l_922 = 0L;
                uint16_t l_926 = 65535UL;
                struct S0 **l_951 = &l_837;
                int32_t ***l_970 = &l_969;
                const uint64_t * const l_1006 = (void*)0;
                const uint64_t * const *l_1005[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_918[i] = 0x636744B6L;
                for (i = 0; i < 3; i++)
                    l_1005[i] = &l_1006;
                --l_873[5];
                if (((g_876 = (void*)0) != &g_877[0][3]))
                { 
                    struct S0 l_883 = {65533UL,0xEC807DEFL,-7L};
                    int32_t *l_889 = (void*)0;
                    int32_t **l_890 = (void*)0;
                    int32_t **l_891 = &g_539;
                    int16_t *l_905 = (void*)0;
                    int16_t *l_906 = &g_98;
                    int32_t l_917[4][1][1];
                    int32_t l_919 = (-7L);
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_917[i][j][k] = (-1L);
                        }
                    }
                    (*l_891) = ((l_878 , ((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(0x48L, (0L == (((*g_553) = l_883) , p_27)))), (safe_lshift_func_uint8_t_u_u((l_886[0] > (safe_div_func_int64_t_s_s(l_886[0], 18446744073709551615UL))), g_21)))) , p_27)) , l_889);
                    l_917[2][0][0] ^= (safe_rshift_func_int8_t_s_s(((safe_add_func_int64_t_s_s(((*l_855) = (~((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(p_27, (safe_mul_func_int16_t_s_s((p_27 >= ((*l_906) = 0x9FF5L)), (safe_sub_func_uint64_t_u_u((l_886[0] = 1UL), ((~((safe_mod_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u((*g_870), ((void*)0 == l_914))) <= l_873[6]), g_530.f0.f2)) , 0x9BDEL)) <= l_873[5]))))))), p_27)) || 0x35F73A014DABBC6DLL), 4)) && p_27))), l_916)) | 0x367A321DL), 0));
                    l_923[0][2][3]--;
                    if (l_873[5])
                        continue;
                }
                else
                { 
                    int32_t **l_927 = &l_849[4][0][4];
                    struct S0 l_934 = {0x554EL,18446744073709551615UL,0x7FC183C46EBE022BLL};
                    union U1 **l_950[4];
                    int16_t *l_954 = (void*)0;
                    int16_t *l_955[4][4][1];
                    uint32_t l_956[3][6];
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_950[i] = &g_529;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 4; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_955[i][j][k] = (void*)0;
                        }
                    }
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 6; j++)
                            l_956[i][j] = 0UL;
                    }
                    l_926 |= p_27;
                    (*l_927) = (void*)0;
                    if (l_873[4])
                        break;
                    l_921[0][4][5] |= (safe_rshift_func_int8_t_s_s(p_27, ((safe_rshift_func_uint16_t_u_u(65534UL, g_145.f1)) <= (0x28057BBA9E74A5C3LL || (safe_add_func_uint16_t_u_u(65535UL, (l_934 , p_27)))))));
                    l_886[0] |= (safe_sub_func_int8_t_s_s(((((safe_mod_func_int8_t_s_s(((g_72 ^= (safe_rshift_func_int8_t_s_u(((l_953[2] = ((((*g_870)--) == ((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((l_947 , (safe_lshift_func_uint16_t_u_u((l_950[1] != &g_529), ((((*g_544) && (**g_543)) , (l_951 == &l_915)) && (**g_543))))), 9)), g_70.f2)) | 0x4F94F721B6F26953LL)) , l_952)) != &g_297[0][0]), p_27))) , l_956[2][3]), (**g_543))) , p_27) , p_27) ^ p_27), g_145.f1));
                }
                for (l_920 = 2; (l_920 >= 0); l_920 -= 1)
                { 
                    int32_t ** const **l_966[4][4] = {{&l_965[1],(void*)0,&l_965[1],&l_965[1]},{(void*)0,(void*)0,&l_965[1],(void*)0},{(void*)0,&l_965[1],&l_965[1],(void*)0},{&l_965[1],(void*)0,&l_965[1],&l_965[1]}};
                    int32_t l_977 = (-1L);
                    uint32_t l_979 = 18446744073709551615UL;
                    int16_t *l_985[3];
                    uint8_t *l_990[2][1][4] = {{{&g_23,&g_23,&g_170[0],&g_23}},{{&g_23,(void*)0,(void*)0,&g_23}}};
                    int64_t *l_1007 = (void*)0;
                    int64_t *l_1008 = &g_145.f2;
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_985[i] = &g_72;
                    l_979 &= (+(((void*)0 != g_958) | (safe_mod_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(((**l_951) , (safe_lshift_func_int8_t_s_u((((l_967[1] = l_965[0]) == (l_970 = l_968)) & ((safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((l_918[2] ^ g_297[0][0]), p_27)), (-9L))), l_977)) | (**g_958))), g_297[0][0]))))), l_978))));
                    l_918[1] |= ((safe_sub_func_int64_t_s_s(((*l_855) = ((*g_820) &= (-1L))), (safe_add_func_uint64_t_u_u(((**g_869) = ((!p_27) || (l_886[0] &= ((g_98 = 0L) > (safe_mod_func_int64_t_s_s(((*l_1008) = (safe_mod_func_uint8_t_u_u((g_141--), (safe_div_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(1L, 15)), (g_356[0][3][4] != (((safe_lshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u((((((*g_406) = (*g_406)) != (l_1005[1] = (void*)0)) <= p_27) & l_923[0][2][3]), (**g_958))), 14)) & 0UL) ^ p_27)))), 1L)), 4UL))))), 18446744073709551613UL)))))), p_27)))) > p_27);
                    l_886[0] ^= (safe_add_func_uint8_t_u_u(p_27, 0xC0L));
                    if (p_27)
                        continue;
                }
            }
            return g_63;
        }
        for (l_822.f0.f1 = 0; (l_822.f0.f1 <= 2); l_822.f0.f1 += 1)
        { 
            uint8_t l_1011 = 4UL;
            uint8_t *l_1031 = &l_1011;
            uint32_t l_1045 = 0x71FF6A01L;
            int32_t *l_1046[4][1][6] = {{{&g_140,&l_921[0][2][1],&g_10,&l_921[0][2][1],&g_140,&g_140}},{{(void*)0,&l_921[0][2][1],&l_921[0][2][1],(void*)0,&l_921[2][4][0],(void*)0}},{{(void*)0,&l_921[2][4][0],(void*)0,&l_921[0][2][1],&l_921[0][2][1],(void*)0}},{{&g_140,&g_140,&l_921[0][2][1],&g_10,&l_921[0][2][1],&g_140}}};
            uint8_t l_1099 = 1UL;
            int64_t *l_1134[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1134[i] = &l_822.f0.f2;
            l_1011++;
            if (((safe_lshift_func_uint8_t_u_u((+(safe_add_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(((p_27 <= (safe_mul_func_uint8_t_u_u(((((g_89 , (1UL >= (safe_rshift_func_uint8_t_u_s(((*l_1031) = g_530.f0.f1), (safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((((*g_544) != (safe_rshift_func_uint16_t_u_u(p_27, (g_297[0][0] = ((safe_add_func_int8_t_s_s((safe_div_func_uint16_t_u_u((g_145.f0 = ((*g_959) = ((((l_1042 = (void*)0) == l_1043[0]) , (*g_870)) != p_27))), g_74)), g_530.f0.f2)) || p_27))))) == 0x8F0672C4L) | 0x3EFC0F4D6B0B1042LL), p_27)), 5)))))) , p_27) , p_27) < g_70.f0.f2), g_70.f0.f2))) <= l_1045), p_27)) == 0x8A1B8727L), g_532.f0.f1)) , g_84), (**g_543))) <= 0x8947F872L), p_27)) && p_27), 1L))), p_27)) , p_27))
            { 
                return l_1045;
            }
            else
            { 
                g_539 = l_1046[0][0][4];
            }
            for (l_978 = 0; (l_978 <= 2); l_978 += 1)
            { 
                uint16_t * const l_1049 = &g_1050;
                uint16_t * const *l_1048 = &l_1049;
                uint16_t * const *l_1052 = &l_1049;
                uint16_t * const **l_1051 = &l_1052;
                const uint16_t ***l_1055[6][2][5] = {{{&l_1053[0][2][1],(void*)0,(void*)0,&l_1053[0][2][1],&l_1053[0][2][1]},{(void*)0,&l_1053[0][2][1],&l_1053[0][2][1],&l_1053[0][0][0],(void*)0}},{{(void*)0,&l_1053[0][2][1],&l_1053[0][2][1],&l_1053[0][2][1],(void*)0},{&l_1053[0][2][1],&l_1053[0][2][1],&l_1053[0][3][1],&l_1053[0][0][0],(void*)0}},{{&l_1053[0][3][1],&l_1053[0][2][1],&l_1053[0][2][1],&l_1053[0][2][1],&l_1053[0][2][1]},{&l_1053[0][2][1],&l_1053[0][2][1],(void*)0,&l_1053[0][2][1],(void*)0}},{{&l_1053[0][2][1],&l_1053[0][2][1],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1053[0][2][1],&l_1053[0][2][1],(void*)0}},{{&l_1053[0][2][1],(void*)0,&l_1053[0][3][1],&l_1053[0][2][1],&l_1053[0][2][1]},{&l_1053[0][2][1],&l_1053[0][3][0],&l_1053[0][2][1],(void*)0,&l_1053[0][0][0]}},{{&l_1053[0][3][1],(void*)0,&l_1053[0][2][1],&l_1053[0][2][1],&l_1053[0][0][0]},{&l_1053[0][2][1],(void*)0,(void*)0,&l_1053[0][2][1],&l_1053[0][2][1]}}};
                int32_t l_1073 = 0x6036E4EBL;
                int32_t l_1079 = 7L;
                uint32_t * const l_1098 = &g_356[0][5][4];
                int32_t l_1113 = (-1L);
                int32_t l_1140 = 0xC575F4CEL;
                int32_t l_1141[5][6][3] = {{{6L,0x897C9F89L,0x81DF117FL},{0x9FB6A911L,0x50CE68DCL,0xA71C1CE5L},{0x98F2F8FDL,6L,0x81DF117FL},{0xB87494F5L,0x948D06CBL,0x9FB6A911L},{0xE9956EF1L,0xEF7171E4L,0xE9956EF1L},{0x5FF572E5L,1L,(-9L)}},{{0L,0L,5L},{1L,0xA71C1CE5L,0x4A44B7C9L},{2L,5L,0xB6DC83E2L},{1L,0x3B66BED2L,0xA7B13F09L},{0L,(-1L),(-1L)},{0x3B66BED2L,4L,0x4A44B7C9L}},{{0x8B8CBDBCL,0L,6L},{0xD22F81A7L,0x5FF572E5L,0x9FB6A911L},{9L,0x81DF117FL,0x98F2F8FDL},{(-9L),0x5FF572E5L,0xB87494F5L},{2L,0L,0xE9956EF1L},{4L,4L,0x5FF572E5L}},{{0x98F2F8FDL,(-1L),0L},{(-7L),0xA7B13F09L,1L},{0L,0x2E8D77B6L,2L},{0x06A6C739L,(-7L),1L},{0xB6DC83E2L,1L,0L},{0x5FF572E5L,0x50CE68DCL,0x5FF572E5L}},{{0x897C9F89L,5L,0xE9956EF1L},{0x2028D4B6L,0xD3C07C53L,0xB87494F5L},{5L,2L,0x98F2F8FDL},{0x9437BE01L,0xB87494F5L,0x9FB6A911L},{5L,1L,6L},{0x2028D4B6L,0x4A44B7C9L,0x4A44B7C9L}}};
                int64_t l_1142 = (-1L);
                int i, j, k;
                if ((p_27 ^ (~((((*l_1051) = (l_1048 = &l_953[0])) == (g_1056 = l_1053[0][2][1])) | p_27))))
                { 
                    const uint8_t l_1075 = 255UL;
                    int8_t *l_1076[5][5] = {{&g_84,&g_56[0],&g_84,&g_84,&g_56[0]},{&g_56[0],&g_84,&g_84,&g_56[0],&g_84},{&g_56[0],&g_56[0],&g_56[0],&g_56[0],&g_56[0]},{&g_84,&g_56[0],&g_84,&g_84,&g_56[0]},{&g_56[0],&g_84,&g_84,&g_56[0],&g_84}};
                    int i, j;
                    l_1079 &= ((((**g_869) = (safe_mod_func_uint32_t_u_u(((*g_870) != (safe_lshift_func_uint16_t_u_s((p_27 & (((-8L) ^ (((safe_div_func_int64_t_s_s((safe_div_func_uint64_t_u_u(((g_84 |= ((g_6[(p_27 + 2)][l_978] = (((safe_rshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u(g_2, (g_135 , l_1070))), ((safe_mul_func_int16_t_s_s((p_27 != (**g_876)), 1L)) == l_1073))) ^ l_1074) >= l_1075)) , p_27)) || p_27), p_27)), l_1077)) & g_72) > g_1078)) , 0x44CF3FB4L)), g_203))), g_593))) < 0x03EC8F2A61B46DE4LL) && l_1075);
                    if (p_27)
                        continue;
                    if (l_1080)
                        break;
                }
                else
                { 
                    int64_t l_1083 = 1L;
                    int8_t **l_1084 = &g_544;
                    l_1086 = (l_1079 |= (1UL & ((l_1083 ^ g_84) , (l_1085 = (0x8FC87EA9FE65F315LL != ((void*)0 != l_1084))))));
                }
                for (l_1073 = (-11); (l_1073 == 27); ++l_1073)
                { 
                    uint32_t *l_1096 = &g_356[0][1][2];
                    int16_t *l_1097 = &l_1080;
                    int32_t l_1100[4][3] = {{0xACC0F239L,0x56D9ABA2L,0xACC0F239L},{1L,1L,1L},{0xACC0F239L,0x56D9ABA2L,0xACC0F239L},{1L,1L,1L}};
                    int32_t l_1101 = 0x2FF2BCC5L;
                    int i, j;
                    l_1101 &= (((safe_sub_func_int64_t_s_s((*g_820), ((safe_unary_minus_func_uint64_t_u((safe_add_func_int64_t_s_s((g_532.f0.f0 != ((safe_mod_func_uint64_t_u_u(5UL, (((((*l_1096) |= (g_89 , g_141)) , ((((*l_1097) = p_27) , ((l_1098 == (void*)0) & 0x91F3L)) || p_27)) || 0xBC08L) & l_1079))) , 0x94L)), p_27)))) == l_1099))) < 4294967295UL) && l_1100[1][2]);
                }
                l_1073 = ((!((safe_mod_func_int16_t_s_s((g_1078 ^ 0x7911L), (safe_sub_func_int32_t_s_s((l_1107 && (((safe_rshift_func_int16_t_s_s(((~(((safe_div_func_uint16_t_u_u((p_27 , ((l_1113 = (g_70.f2 != (p_27 || ((-1L) < 8L)))) || g_85[0])), p_27)) != g_85[1]) ^ p_27)) , p_27), 7)) , (void*)0) == (void*)0)), l_1073)))) | 0xDD7788CF12132D2BLL)) , 0xDECAD861L);
                for (g_145.f2 = 0; (g_145.f2 <= 6); ++g_145.f2)
                { 
                    int32_t *l_1116 = (void*)0;
                    uint16_t ***l_1120 = &g_958;
                    uint32_t l_1136 = 0x224A603BL;
                    uint16_t l_1137 = 0xFECDL;
                    int32_t l_1139[6] = {0xB6928E1EL,0xB6928E1EL,0xB6928E1EL,0xB6928E1EL,0xB6928E1EL,0xB6928E1EL};
                    uint64_t l_1143 = 18446744073709551615UL;
                    int i;
                    g_539 = l_1116;
                    l_1079 = ((((p_27 <= (l_1117 = 0xD415C91840E22740LL)) || (safe_add_func_int64_t_s_s(((g_1121 = ((*l_1120) = &g_959)) != (void*)0), (-1L)))) | (safe_rshift_func_uint16_t_u_u(((void*)0 != l_1124), 10))) && p_27);
                    l_1137 = ((safe_sub_func_int8_t_s_s(0x49L, ((safe_unary_minus_func_uint64_t_u((safe_lshift_func_int16_t_s_u(((((((l_1133 &= (!(safe_unary_minus_func_uint8_t_u(0xDEL)))) , l_1134[1]) != (*g_876)) | (0UL && 0xD4L)) , g_622) , l_1135[0]), p_27)))) , p_27))) | l_1136);
                    --l_1143;
                    return l_1146[0][1];
                }
                g_539 = &l_1141[4][4][2];
            }
            for (l_1085 = (-24); (l_1085 == 28); l_1085 = safe_add_func_int8_t_s_s(l_1085, 7))
            { 
                int16_t l_1157 = (-5L);
                int32_t l_1159 = 6L;
                int32_t l_1160 = 0xEDADD2F4L;
                int32_t l_1161 = 0xACE134A1L;
                int32_t l_1162[1];
                int64_t l_1165[2];
                int8_t l_1168 = 0x22L;
                int32_t l_1170[7][1];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_1162[i] = 8L;
                for (i = 0; i < 2; i++)
                    l_1165[i] = 9L;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1170[i][j] = (-10L);
                }
                for (g_530.f0.f0 = 28; (g_530.f0.f0 == 58); g_530.f0.f0 = safe_add_func_int8_t_s_s(g_530.f0.f0, 9))
                { 
                    uint16_t **l_1151[2][1];
                    int32_t l_1152 = 0x9BE35010L;
                    int32_t l_1153 = 0L;
                    int32_t l_1154 = (-1L);
                    int32_t l_1155 = 0xD1532B36L;
                    int32_t l_1158 = (-4L);
                    int32_t l_1163 = 1L;
                    int32_t l_1164 = 0x161203BCL;
                    int32_t l_1166[5][7][3] = {{{5L,0xF1E8BEBFL,0x4AB30A3FL},{(-9L),(-1L),(-9L)},{(-5L),0x7E44CF1BL,(-9L)},{(-5L),0x611DD72CL,0xFD27A093L},{0x72867C2CL,0x4268EE76L,5L},{0x67428D07L,0xAA494E05L,0xAA494E05L},{0x72867C2CL,(-1L),5L}},{{(-5L),0x478231ACL,(-8L)},{(-5L),0xFAF17685L,0x72867C2CL},{(-9L),0xFD27A093L,(-3L)},{5L,0xFAF17685L,0x11BE490FL},{(-1L),0x478231ACL,0xD784AB53L},{0xC718BE16L,(-1L),9L},{(-8L),0xAA494E05L,0x478231ACL}},{{9L,0x4268EE76L,9L},{0x15276383L,0x611DD72CL,0xD784AB53L},{1L,0x7E44CF1BL,0x11BE490FL},{0xAA494E05L,(-1L),(-3L)},{0L,0xF1E8BEBFL,0x72867C2CL},{0xAA494E05L,0xC1FD6332L,(-8L)},{1L,0L,5L}},{{0x15276383L,(-8L),0xAA494E05L},{9L,0x15C7AB7CL,5L},{(-8L),(-8L),0xFD27A093L},{0xC718BE16L,0L,(-9L)},{(-1L),0xC1FD6332L,(-9L)},{5L,0xF1E8BEBFL,0x4AB30A3FL},{(-9L),(-1L),(-9L)}},{{(-5L),0x7E44CF1BL,(-9L)},{(-5L),0x611DD72CL,(-1L)},{0L,0xAA077712L,1L},{(-8L),0x67428D07L,0x67428D07L},{0L,2L,0x11BE490FL},{(-9L),0xAA494E05L,0xFD27A093L},{(-1L),0x15C7AB7CL,0L}}};
                    int32_t l_1167[4];
                    uint64_t l_1171 = 0x02A6227FC9A7E1E5LL;
                    int32_t *l_1174 = &l_1163;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1151[i][j] = &g_959;
                    }
                    for (i = 0; i < 4; i++)
                        l_1167[i] = 0xBDCD6AA2L;
                    g_1121 = l_1151[0][0];
                    ++l_1171;
                    if (p_27)
                        break;
                    l_1174 = &l_1162[0];
                }
                if (l_1175)
                { 
                    uint64_t ***l_1176[5] = {&g_869,&g_869,&g_869,&g_869,&g_869};
                    int32_t l_1196 = 2L;
                    int i;
                    g_1177 = (g_869 = (void*)0);
                    l_1196 &= (g_532 , ((l_1165[0] != l_1165[0]) ^ (safe_add_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((l_1162[0] && (safe_add_func_int64_t_s_s((2UL & (((safe_sub_func_uint16_t_u_u((**g_1121), (safe_mul_func_int16_t_s_s(p_27, l_1162[0])))) & p_27) <= l_1161)), p_27))), 0x1FL)), g_63)) , 255UL), l_1162[0])) <= p_27), (*g_959))) > g_532.f0.f0), 0xDAL)) >= p_27), g_70.f0.f2))));
                    return p_27;
                }
                else
                { 
                    union U1 *l_1197 = &l_822;
                    union U1 **l_1198 = &l_1197;
                    (*l_1198) = l_1197;
                }
                return p_27;
            }
        }
    }
    return l_1320;
}



static uint64_t  func_42(union U1  p_43, uint16_t  p_44, int32_t * p_45, int16_t  p_46)
{ 
    uint32_t l_824 = 0x573731EFL;
    return l_824;
}



static uint32_t  func_49(int32_t ** p_50)
{ 
    int32_t l_805 = 0x8D6F9847L;
    int32_t l_808 = 0L;
    uint64_t *l_809 = &g_593;
    uint8_t *l_814 = &g_141;
    uint32_t l_815 = 0UL;
    int32_t *l_816 = &g_21;
    int64_t * const l_818[1] = {&g_530.f0.f2};
    int64_t * const *l_817 = &l_818[0];
    int i;
    (*l_816) = ((((((safe_mul_func_int8_t_s_s(l_805, (safe_div_func_int64_t_s_s((l_808 | ((((*l_814) = (((++(*l_809)) <= (safe_sub_func_int8_t_s_s(l_805, (*g_544)))) , (((void*)0 == &g_297[0][0]) > 0x6F307F5AL))) || g_85[1]) != l_805)), 0xD898618BDEB6867ALL)))) , l_808) || l_815) , g_530.f0.f1) <= l_808) <= l_808);
    g_819 = l_817;
    return (*l_816);
}



static int32_t ** func_51(uint64_t * p_52, const int8_t * p_53)
{ 
    int64_t *l_61 = (void*)0;
    int64_t *l_62 = &g_63;
    const int32_t *l_65 = &g_2;
    const int32_t **l_64 = &l_65;
    int32_t l_692 = (-1L);
    int32_t l_696[3];
    int32_t l_703 = 1L;
    uint16_t l_704 = 0x4FC1L;
    int32_t l_723 = (-9L);
    int16_t l_740 = 0xF968L;
    uint32_t l_748 = 0xE419C084L;
    uint64_t *l_786 = &g_203;
    union U2 l_797 = {0x312AL};
    int32_t *l_798 = &g_140;
    int32_t **l_801 = &l_798;
    int32_t **l_802 = &g_539;
    int i;
    for (i = 0; i < 3; i++)
        l_696[i] = 0x81BD6250L;
    if ((((safe_sub_func_int64_t_s_s(((*l_62) ^= (safe_sub_func_uint32_t_u_u(g_21, g_23))), 0xE724D257E7E5FF1FLL)) , (l_692 &= ((g_63 <= ((l_64 == (void*)0) || (func_66(&g_63, g_70, g_70) , g_23))) , g_297[0][0]))) <= (*l_65)))
    { 
        int32_t *l_693 = &g_7;
        int32_t *l_694 = &g_140;
        int32_t *l_695 = &g_21;
        int32_t l_697 = 0xD02EF308L;
        int32_t *l_698 = (void*)0;
        int32_t *l_699 = &l_696[2];
        int32_t *l_700 = &l_697;
        int32_t *l_701[3][6][6] = {{{&g_7,&g_10,(void*)0,(void*)0,&g_10,&g_7},{&g_21,&g_7,&g_140,&g_10,&g_140,&g_7},{&g_140,&g_21,(void*)0,&g_140,&g_140,(void*)0},{&g_140,&g_140,&g_140,&g_10,(void*)0,&g_10},{&g_21,&g_140,&g_21,(void*)0,&g_140,&g_140},{&g_7,&g_21,&g_21,&g_7,&g_140,&g_10}},{{&g_10,&g_7,&g_140,&g_7,&g_10,(void*)0},{&g_7,&g_10,(void*)0,(void*)0,&g_10,&g_7},{&g_21,&g_7,&g_140,&g_10,&g_140,&g_7},{&g_140,&g_21,(void*)0,&g_140,&g_140,(void*)0},{&g_140,&g_140,&g_140,&g_10,(void*)0,&g_10},{&g_21,&g_140,&g_21,(void*)0,&g_140,&g_140}},{{&g_7,&g_21,&g_21,&g_7,&g_140,&g_10},{&g_10,&g_7,&g_140,&g_7,&g_10,(void*)0},{&g_7,&g_10,(void*)0,(void*)0,&g_10,&g_7},{&g_21,&g_7,&g_140,&g_10,&g_140,&g_7},{&g_140,&g_21,(void*)0,&g_140,&g_140,(void*)0},{&g_140,&g_140,&g_140,&g_10,(void*)0,&g_10}}};
        int8_t l_702 = (-10L);
        uint64_t *l_709[6][4];
        uint64_t **l_708[3][6] = {{&l_709[0][2],&l_709[0][2],&l_709[0][2],&l_709[0][2],&l_709[0][2],&l_709[0][2]},{&l_709[0][2],&l_709[0][2],&l_709[0][2],&l_709[0][2],&l_709[0][2],&l_709[0][2]},{&l_709[0][2],&l_709[0][2],&l_709[0][2],&l_709[0][2],&l_709[0][2],&l_709[0][2]}};
        uint64_t ***l_707 = &l_708[0][4];
        uint16_t *l_712 = &g_297[5][0];
        int16_t *l_720 = &g_98;
        uint16_t *l_721[5];
        uint8_t l_722[1];
        int32_t l_741 = 0x565973ADL;
        uint32_t l_742[2][7][1] = {{{4294967295UL},{0x46159BD7L},{0x594F79F2L},{0x594F79F2L},{0x46159BD7L},{4294967295UL},{0x46159BD7L}},{{0x594F79F2L},{0x594F79F2L},{0x46159BD7L},{4294967295UL},{0x46159BD7L},{0x594F79F2L},{0x594F79F2L}}};
        struct S0 l_767 = {0x2DB7L,18446744073709551615UL,0x5354EA9B65E176B1LL};
        int i, j, k;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 4; j++)
                l_709[i][j] = (void*)0;
        }
        for (i = 0; i < 5; i++)
            l_721[i] = &g_85[1];
        for (i = 0; i < 1; i++)
            l_722[i] = 255UL;
        (*l_64) = l_693;
        (*l_694) &= 0x3E32FF46L;
        ++l_704;
        l_723 = ((*l_699) = ((((void*)0 != l_707) , (((*l_712) ^= (safe_mod_func_int16_t_s_s(g_356[0][6][0], (**l_64)))) || (*l_65))) < (l_722[0] = ((safe_mod_func_int64_t_s_s((safe_add_func_uint64_t_u_u((safe_div_func_int16_t_s_s(((safe_unary_minus_func_int16_t_s(((*l_720) = g_70.f0.f0))) , g_70.f1), 0xBF49L)), (*l_695))), 0xDD92F7861562FDBBLL)) != 0x1D03EC80L))));
        for (g_530.f0.f2 = 0; (g_530.f0.f2 < 15); g_530.f0.f2 = safe_add_func_uint16_t_u_u(g_530.f0.f2, 7))
        { 
            int64_t l_726 = 1L;
            int32_t l_727 = 0xDD5BED25L;
            int32_t l_730 = (-1L);
            int32_t l_735 = (-3L);
            int32_t l_736 = 0L;
            int32_t l_737 = 0x8A5259D2L;
            int32_t l_738 = 0x2F7A4480L;
            int32_t l_739[4] = {(-9L),(-9L),(-9L),(-9L)};
            int i;
            for (g_140 = 0; (g_140 <= 0); g_140 += 1)
            { 
                int32_t l_728 = 9L;
                int32_t l_729 = 0L;
                int32_t l_731 = 0x65A7623FL;
                int32_t l_732 = 0xA2611FECL;
                int32_t l_733 = 0x33887C86L;
                int32_t l_734[2];
                uint32_t l_751 = 0xF88FF19EL;
                int i;
                for (i = 0; i < 2; i++)
                    l_734[i] = 0L;
                ++l_742[0][3][0];
            }
            for (g_145.f0 = 0; (g_145.f0 != 20); ++g_145.f0)
            { 
                struct S0 *l_768 = &g_532.f0;
                union U2 *l_769[2][4] = {{&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,&g_89}};
                union U2 *l_771 = &g_89;
                union U2 **l_770 = &l_771;
                int i, j;
                (*l_700) &= (safe_rshift_func_int16_t_s_u((((*l_62) = (&p_53 == &p_53)) , (**l_64)), 3));
                (*l_768) = l_767;
                (*l_770) = (l_769[1][1] = l_769[1][0]);
            }
        }
    }
    else
    { 
        uint64_t *l_776 = &g_593;
        uint8_t *l_777 = &g_170[0];
        uint8_t *l_778 = &g_141;
        union U2 l_781 = {0x1418L};
        int32_t *l_782 = &g_21;
        int32_t *l_783 = &l_723;
        (*l_783) ^= ((((g_145.f1 || (safe_rshift_func_uint8_t_u_s((((*l_776) = (safe_lshift_func_int16_t_s_s(0x5998L, 8))) , (((*l_782) ^= (((*p_53) & ((*l_777) = 1UL)) >= (((*l_778)--) < (g_56[0] , (l_696[2] = (&g_297[6][0] != (l_781 , (void*)0))))))) == 4294967289UL)), (*g_544)))) != 0xAF2222F2L) >= 4294967288UL) >= (*l_65));
    }
    (*l_798) &= ((safe_mod_func_int32_t_s_s((0UL != ((((*l_786) = (*l_65)) && (safe_sub_func_uint16_t_u_u((*l_65), ((safe_lshift_func_uint16_t_u_u((*l_65), ((**l_64) >= (((((((**l_64) , (safe_mod_func_uint16_t_u_u((safe_div_func_int32_t_s_s(((l_797 , 0x4AL) >= 0xC2L), 0x579220B8L)), 1UL))) <= g_530.f0.f0) | (*l_65)) == 1L) && g_532.f0.f2) <= (*l_65))))) > 0x8FL)))) >= g_530.f0.f1)), (*l_65))) || (*l_65));
    (*l_798) = (safe_mul_func_uint16_t_u_u(65531UL, (*l_798)));
    return l_802;
}



static int32_t  func_66(int64_t * p_67, const union U1  p_68, union U1  p_69)
{ 
    int32_t *l_71 = &g_21;
    int32_t *l_73 = &g_21;
    union U2 *l_90 = &g_89;
    int32_t *l_91 = &g_21;
    int32_t *l_92 = &g_21;
    int32_t *l_93[1][2];
    int8_t *l_502 = &g_56[0];
    int32_t l_516[4] = {0x2EC22270L,0x2EC22270L,0x2EC22270L,0x2EC22270L};
    int32_t l_554 = (-1L);
    int32_t l_562 = 0xBA0C6560L;
    int32_t l_563 = 9L;
    int64_t l_591[5];
    struct S0 l_637 = {65535UL,18446744073709551615UL,0xCB29F8A6068D32DALL};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_93[i][j] = &g_21;
    }
    for (i = 0; i < 5; i++)
        l_591[i] = 0L;
    --g_74;
    l_90 = func_77(p_69.f0.f0);
    ++g_94;
    for (g_21 = 0; (g_21 >= 0); g_21 -= 1)
    { 
        int32_t **l_97 = &l_93[0][0];
        int8_t *l_109[7] = {&g_56[0],&g_56[0],&g_56[0],&g_56[0],&g_56[0],&g_56[0],&g_56[0]};
        union U2 l_495 = {65535UL};
        uint32_t l_503 = 0x138B69AAL;
        union U2 l_504 = {0xC68AL};
        int32_t l_513 = 0x44300B70L;
        int32_t l_514[7] = {0x886FD044L,1L,1L,0x886FD044L,1L,0x6D67BE51L,1L};
        union U1 *l_531 = &g_532;
        uint32_t l_545 = 0UL;
        int8_t l_548[4];
        struct S0 * const **l_549[1][3][3];
        uint32_t l_564[6] = {0xDF4E7BBAL,0xC097CB20L,0xDF4E7BBAL,0xDF4E7BBAL,0xC097CB20L,0xDF4E7BBAL};
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_548[i] = 0x70L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 3; k++)
                    l_549[i][j][k] = (void*)0;
            }
        }
        for (p_69.f0.f2 = 0; (p_69.f0.f2 >= 0); p_69.f0.f2 -= 1)
        { 
            int16_t l_100 = 0x3412L;
            union U2 *l_112 = (void*)0;
            int32_t l_501 = 0x406AF33DL;
            int64_t *l_506 = &g_63;
            int32_t l_515 = 1L;
            int32_t l_517[5] = {0x3FBBA899L,0x3FBBA899L,0x3FBBA899L,0x3FBBA899L,0x3FBBA899L};
            int8_t l_525 = 0xF8L;
            uint32_t *l_546[2];
            uint8_t *l_547[3];
            int i;
            for (i = 0; i < 2; i++)
                l_546[i] = &g_356[0][3][4];
            for (i = 0; i < 3; i++)
                l_547[i] = (void*)0;
            if ((l_97 == (void*)0))
            { 
                union U2 l_113[1][6][6] = {{{{0xD423L},{65535UL},{65535UL},{0xD423L},{65535UL},{65535UL}},{{0xD423L},{65535UL},{65535UL},{0xD423L},{65535UL},{65535UL}},{{0xD423L},{65535UL},{65535UL},{0xD423L},{65535UL},{65535UL}},{{0xD423L},{65535UL},{65535UL},{0xD423L},{65535UL},{65535UL}},{{0xD423L},{65535UL},{65535UL},{0xD423L},{65535UL},{65535UL}},{{0xD423L},{65535UL},{65535UL},{0xD423L},{65535UL},{65535UL}}}};
                uint16_t *l_496 = &l_495.f0;
                int32_t *l_505 = &l_501;
                int i, j, k;
                if ((g_56[g_21] , (-1L)))
                { 
                    int32_t l_99[5][7][3] = {{{(-9L),4L,1L},{(-10L),(-10L),0x490A06BCL},{(-1L),4L,4L},{0x490A06BCL,4L,9L},{(-1L),0x9BE98DF1L,(-1L)},{(-10L),0x490A06BCL,9L},{(-9L),(-9L),4L}},{{(-1L),0x490A06BCL,0x490A06BCL},{4L,0x9BE98DF1L,1L},{(-1L),4L,(-1L)},{(-9L),4L,1L},{(-10L),(-10L),0x490A06BCL},{(-1L),4L,4L},{0x490A06BCL,4L,9L}},{{(-1L),0x9BE98DF1L,(-1L)},{(-10L),0x490A06BCL,9L},{(-9L),(-9L),4L},{(-1L),0x490A06BCL,0x490A06BCL},{4L,0x9BE98DF1L,1L},{(-1L),4L,(-1L)},{(-9L),4L,1L}},{{(-10L),(-10L),0x490A06BCL},{(-1L),4L,4L},{0x490A06BCL,4L,9L},{(-1L),0x9BE98DF1L,(-1L)},{(-10L),0x490A06BCL,9L},{(-9L),(-9L),4L},{(-1L),0x490A06BCL,0x490A06BCL}},{{4L,0x9BE98DF1L,1L},{(-1L),4L,(-1L)},{(-9L),4L,1L},{(-10L),(-10L),0x490A06BCL},{(-1L),4L,4L},{0x490A06BCL,4L,9L},{(-1L),0x9BE98DF1L,(-1L)}}};
                    uint64_t l_101 = 0xEF6D7B3CACAAAB22LL;
                    int8_t **l_108[1][3];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_108[i][j] = (void*)0;
                    }
                    if (g_6[(g_21 + 1)][p_69.f0.f2])
                        break;
                    if (g_10)
                        break;
                    --l_101;
                    (*l_97) = func_104((((l_109[3] = (void*)0) == &g_56[g_21]) == (((g_56[0] < (**l_97)) > (safe_add_func_int16_t_s_s((&g_89 != l_112), 0x1A1FL))) == l_99[1][4][2])), &g_63, l_113[0][1][2]);
                }
                else
                { 
                    int64_t l_486 = 0xD541766392DA13B4LL;
                    l_486 = l_100;
                }
                l_505 = func_104((g_70.f0 , (((*l_73) >= (((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(g_56[g_21], (safe_lshift_func_int8_t_s_s((((l_495 , ((*l_496)++)) < ((safe_lshift_func_int8_t_s_u((l_501 = 0xC2L), 1)) || 255UL)) | p_69.f1), 2)))), g_170[0])), g_135)) , l_109[5]) != l_502)) >= l_503)), p_67, l_504);
                return l_501;
            }
            else
            { 
                uint64_t l_509 = 0x0A4E952225C9D430LL;
                int32_t l_512[7] = {0x5AA65B52L,0x5AA65B52L,0x5AA65B52L,0x5AA65B52L,0x5AA65B52L,0x5AA65B52L,0x5AA65B52L};
                struct S0 *l_526 = &g_145;
                uint8_t l_536[2][1];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_536[i][j] = 0xF6L;
                }
                for (l_503 = 0; (l_503 <= 0); l_503 += 1)
                { 
                    union U2 l_507 = {0x7FA4L};
                    int32_t l_508[1][3];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_508[i][j] = (-1L);
                    }
                    (*l_97) = func_104(g_85[(g_21 + 2)], l_506, l_507);
                    l_509--;
                }
                for (g_145.f2 = 2; (g_145.f2 >= 0); g_145.f2 -= 1)
                { 
                    uint16_t l_518 = 65535UL;
                    ++l_518;
                    return p_68.f0.f1;
                }
                (*l_526) = (((*l_502) = ((safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((g_89.f0 = ((g_70 , (void*)0) == l_71)), (l_504 , ((0L == (g_356[0][0][4] != l_525)) , l_501)))), (-1L))) | 0x96A243F9L)) , g_145);
                if (l_512[3])
                { 
                    union U1 *l_528 = (void*)0;
                    union U1 **l_527[4] = {&l_528,&l_528,&l_528,&l_528};
                    int32_t l_533 = 0xBA92FB13L;
                    int i;
                    l_531 = (g_529 = (void*)0);
                    l_533 &= l_509;
                }
                else
                { 
                    int32_t l_534 = 7L;
                    int32_t l_535 = (-4L);
                    ++l_536[1][0];
                    g_539 = &l_512[3];
                }
            }
            l_513 = (((safe_div_func_uint64_t_u_u((~(((*l_502) = (-7L)) == ((((((4294967295UL && 1UL) && (g_543 != ((l_517[4] &= (((g_89 , (**l_97)) ^ (((g_356[0][3][4] |= (((l_545 & l_525) ^ (**l_97)) ^ 0xE4A19302L)) == l_525) || 4294967294UL)) && 0xD40EL)) , &l_109[5]))) , p_69.f0.f0) | p_68.f0.f2) , l_525) | p_69.f2))), 18446744073709551615UL)) >= l_548[0]) >= p_68.f0.f1);
            if (p_68.f0.f0)
                break;
        }
        for (l_503 = 0; (l_503 <= 0); l_503 += 1)
        { 
            struct S0 * const ***l_550 = &l_549[0][1][2];
            int i;
            g_551 = ((g_56[l_503] , g_203) , ((*l_550) = l_549[0][1][1]));
        }
        for (g_145.f2 = 0; (g_145.f2 <= 0); g_145.f2 += 1)
        { 
            int32_t l_555 = (-6L);
            int32_t l_556 = 0x372F8FF0L;
            int32_t l_557 = 1L;
            int32_t l_558 = 1L;
            int32_t l_559 = 8L;
            int32_t l_560 = 0x1214D2D5L;
            int32_t l_561[2][4][6] = {{{(-9L),(-9L),0xAA5F7B42L,0xBF76B567L,0x84F9C39CL,0x7E161472L},{0xEF0DF48AL,(-9L),0x076FE6D0L,1L,0L,0xAA5F7B42L},{(-4L),0xEF0DF48AL,0x076FE6D0L,(-4L),(-9L),0x7E161472L},{0xBF76B567L,(-4L),0xAA5F7B42L,(-4L),0xBF76B567L,(-1L)}},{{(-4L),0xBF76B567L,0L,0L,7L,0xEF0DF48AL},{0L,0x89FFE2D3L,0x84F9C39CL,7L,0xF2B03CB5L,0xEF0DF48AL},{0xF2B03CB5L,0L,0L,(-10L),(-10L),0L},{0xF2B03CB5L,0xF2B03CB5L,(-9L),7L,0xB90CDE8AL,1L}}};
            int i, j, k;
            l_554 &= (g_170[g_145.f2] >= l_516[g_21]);
            l_564[0]--;
        }
        (*l_97) = &l_554;
        (**g_552) = (**g_552);
    }
    for (g_21 = 0; (g_21 <= 0); g_21 += 1)
    { 
        const uint8_t l_567[3][1] = {{0x80L},{0x80L},{0x80L}};
        const struct S0 *l_574 = &g_70.f0;
        int32_t l_595 = 0L;
        int32_t l_596 = 0x6857F960L;
        int32_t l_597 = 9L;
        int32_t l_599[7][1];
        int16_t l_603 = 7L;
        int32_t l_608 = 1L;
        int32_t l_669 = 0x86073746L;
        uint64_t l_670 = 0x6BD9B00E596D2A9BLL;
        int i, j;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 1; j++)
                l_599[i][j] = (-8L);
        }
        if (l_567[1][0])
            break;
        for (g_203 = 0; (g_203 <= 0); g_203 += 1)
        { 
            int16_t l_575 = 0x2706L;
            int32_t l_576 = 0xCF894E0EL;
            int8_t l_579 = (-6L);
            int32_t l_601 = (-9L);
            int32_t l_604 = 0x8127225BL;
            int32_t l_607 = 0xF6179BACL;
            int32_t l_611 = 0x197FCA04L;
            uint8_t *l_635 = &g_141;
            uint8_t **l_634[1];
            union U1 l_666[2] = {{{8UL,0x8D83E939L,0x77C14590DDAAEED7LL}},{{8UL,0x8D83E939L,0x77C14590DDAAEED7LL}}};
            int i;
            for (i = 0; i < 1; i++)
                l_634[i] = &l_635;
            l_576 = (p_69.f1 <= ((safe_sub_func_int32_t_s_s(((g_89 , 0x7AL) < (*g_544)), (safe_mul_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((((&g_297[0][0] == &g_297[0][0]) , l_574) != (void*)0), l_575)) , (-1L)), g_530.f1)))) | g_356[0][4][4]));
            if ((safe_rshift_func_uint8_t_u_u(l_579, ((safe_rshift_func_uint8_t_u_s(((safe_add_func_uint64_t_u_u((!0xB0D86ED1L), 0x4EDECB8ED33932CELL)) < 4294967286UL), 5)) , (safe_unary_minus_func_int16_t_s(p_69.f0.f1))))))
            { 
                uint64_t *l_592 = &g_593;
                int32_t l_598 = 0xE16BA210L;
                int32_t l_600 = 0x86F55BEAL;
                int32_t l_602 = 0xA4CB8232L;
                int32_t l_606 = 0x551D13A1L;
                const int32_t *l_617 = &l_602;
                const int32_t **l_616 = &l_617;
                const int32_t ***l_615 = &l_616;
                if (((+((*l_592) |= (safe_mul_func_uint8_t_u_u((p_68.f0.f1 == ((safe_sub_func_int32_t_s_s((((void*)0 == &g_544) & g_56[0]), (*l_71))) , (l_576 = (l_591[3] | ((**g_543) ^= 0x08L))))), (*l_73))))) > 1UL))
                { 
                    int32_t l_594 = 0xFB179F14L;
                    int32_t l_605 = 1L;
                    int32_t l_609 = (-9L);
                    int32_t l_610[7] = {0xEBEF66C9L,0x45BB18CEL,0xEBEF66C9L,0xEBEF66C9L,0x45BB18CEL,0xEBEF66C9L,0xEBEF66C9L};
                    uint64_t l_612 = 6UL;
                    const int32_t ****l_618 = &l_615;
                    int i, j;
                    l_612++;
                    if ((*l_92))
                        break;
                    if (l_607)
                        break;
                    l_596 ^= 0xC5277430L;
                    (*l_618) = l_615;
                }
                else
                { 
                    const struct S0 l_619 = {0x0009L,2UL,6L};
                    (*l_616) = &l_596;
                    (**g_552) = l_619;
                }
                for (g_532.f0.f0 = (-20); (g_532.f0.f0 > 24); g_532.f0.f0 = safe_add_func_uint16_t_u_u(g_532.f0.f0, 4))
                { 
                    if (p_68.f0.f0)
                        break;
                    l_604 &= g_622;
                }
                l_599[6][0] ^= 0x16A9039EL;
                l_596 |= (safe_sub_func_int32_t_s_s(((~l_576) < 0UL), (l_600 &= 0xD9A6EB9AL)));
            }
            else
            { 
                const uint32_t l_636[1][1][5] = {{{0UL,0UL,0UL,0UL,0UL}}};
                int i, j, k;
                for (g_165 = 0; (g_165 < 2); g_165++)
                { 
                    uint8_t *l_631 = &g_170[0];
                    uint8_t **l_630 = &l_631;
                    int32_t **l_638 = (void*)0;
                    int32_t **l_639 = &l_91;
                    l_576 |= (((safe_lshift_func_uint8_t_u_u((((p_68.f0.f1 > p_68.f0.f2) , (void*)0) != ((*l_630) = l_502)), p_69.f1)) && ((safe_div_func_int64_t_s_s(((l_634[0] == &l_635) <= l_575), l_636[0][0][1])) > 0x37L)) && g_135);
                    p_69.f0 = l_637;
                    (*l_639) = &l_607;
                }
            }
            for (l_607 = 0; (l_607 > (-3)); l_607--)
            { 
                union U2 **l_642 = &l_90;
                (*l_642) = &g_89;
            }
            for (p_69.f0.f2 = 0; (p_69.f0.f2 != 8); ++p_69.f0.f2)
            { 
                uint32_t *l_647[7][4] = {{&g_356[0][5][3],&g_356[0][4][4],&g_356[0][5][3],&g_356[0][5][3]},{&g_356[0][4][4],&g_356[0][4][4],(void*)0,&g_356[0][4][4]},{&g_356[0][4][4],&g_356[0][5][3],&g_356[0][5][3],&g_356[0][4][4]},{&g_356[0][5][3],&g_356[0][4][4],&g_356[0][5][3],&g_356[0][5][3]},{&g_356[0][4][4],&g_356[0][4][4],(void*)0,&g_356[0][4][4]},{&g_356[0][4][4],&g_356[0][5][3],&g_356[0][5][3],&g_356[0][4][4]},{&g_356[0][5][3],&g_356[0][4][4],&g_356[0][5][3],&g_356[0][5][3]}};
                const int32_t l_668 = 0L;
                int32_t l_673 = 8L;
                int32_t l_691 = 1L;
                int i, j;
                for (g_84 = 18; (g_84 < (-3)); g_84 = safe_sub_func_int64_t_s_s(g_84, 1))
                { 
                    int16_t l_648 = 0x0FC5L;
                    uint64_t *l_667[5][7][1] = {{{&g_593},{&g_593},{&g_593},{&g_593},{&g_593},{&g_593},{&g_593}},{{&g_593},{&g_593},{&g_593},{&g_593},{&g_593},{&g_593},{&g_593}},{{&g_593},{&g_593},{&g_593},{&g_593},{&g_593},{&g_593},{&g_593}},{{&g_593},{&g_593},{&g_593},{&g_593},{&g_593},{&g_593},{&g_593}},{{&g_593},{&g_593},{&g_593},{&g_593},{&g_593},{&g_593},{&g_593}}};
                    int i, j, k;
                    l_648 = (l_71 != l_647[1][1]);
                    l_597 ^= ((safe_lshift_func_int16_t_s_u(((safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((((safe_add_func_int32_t_s_s((((~((p_69.f2 & (((safe_rshift_func_uint8_t_u_s(((*l_635) = ((l_567[1][0] , (p_68.f0 , (void*)0)) != (void*)0)), 3)) & (((safe_rshift_func_uint16_t_u_u(0UL, (safe_mul_func_int16_t_s_s(((safe_div_func_uint64_t_u_u((g_593 &= (l_666[0] , p_68.f1)), 0x4634595D0F35A1BDLL)) && l_648), 0xCFEAL)))) , l_648) | l_596)) , g_145.f1)) ^ g_356[0][3][4])) < l_599[3][0]) , l_603), l_607)) | (-1L)) , 0x38D9DDB1C0CBD3D9LL), 5UL)), l_668)) <= g_84), 12)) && g_7);
                }
                l_669 &= (l_666[0].f0 , (p_69 , (l_607 = p_68.f0.f0)));
                --l_670;
                for (l_554 = 0; (l_554 >= 0); l_554 -= 1)
                { 
                    int16_t *l_674[1][2][4];
                    int32_t **l_688[5][1][4] = {{{&l_73,&l_93[0][0],&l_93[0][1],&l_93[0][1]}},{{&l_91,&l_73,&l_91,&l_73}},{{&l_73,&l_93[0][1],&l_73,&l_73}},{{&l_73,&l_73,&l_93[0][1],&l_93[0][1]}},{{&l_93[0][0],&l_93[0][0],&l_91,&l_91}}};
                    int32_t ***l_687 = &l_688[1][0][1];
                    uint32_t l_689 = 4294967292UL;
                    union U2 *l_690 = (void*)0;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 4; k++)
                                l_674[i][j][k] = &l_603;
                        }
                    }
                    if (p_68.f0.f0)
                        break;
                    l_691 = (((l_673 = 0x727C718BL) , (g_98 = g_297[1][0])) > (safe_lshift_func_uint16_t_u_u(((((((!(((g_72 ^= (safe_rshift_func_int16_t_s_s(l_668, 10))) == (safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int32_t_s(p_68.f1)), (*g_544)))) && (((safe_mod_func_int16_t_s_s((l_607 = (((l_687 == &g_183[2]) , 0x28B1B04EL) , p_69.f2)), l_689)) != 0x530F1FE9L) != (*g_544)))) | 0xF495D51EL) < 0xCBC0CD18L) , &g_89) == l_690) & p_68.f1), 12)));
                    if (l_666[0].f1)
                        break;
                }
            }
        }
    }
    return (*l_92);
}



static union U2 * func_77(uint32_t  p_78)
{ 
    int32_t *l_79 = &g_21;
    int32_t l_80 = 1L;
    int32_t *l_81 = &g_21;
    int32_t l_82 = 0x86CD98C7L;
    int32_t *l_83[2];
    union U2 *l_88[2];
    int i;
    for (i = 0; i < 2; i++)
        l_83[i] = &g_21;
    for (i = 0; i < 2; i++)
        l_88[i] = &g_89;
    --g_85[1];
    return l_88[0];
}



static int32_t * func_104(int64_t  p_105, int64_t * p_106, union U2  p_107)
{ 
    uint32_t l_116[2][5][5] = {{{0xA9085362L,0x818A95D6L,0x2BE98DEBL,0xE06325DDL,0xF1A1B615L},{0x2BE98DEBL,0x818A95D6L,0xA9085362L,0xA9085362L,0x818A95D6L},{0xF730A6A1L,0x726045FFL,18446744073709551615UL,0x818A95D6L,0xF1A1B615L},{0x726045FFL,0xA9085362L,18446744073709551615UL,0UL,18446744073709551615UL},{0xF1A1B615L,0xF1A1B615L,0xA9085362L,0xF730A6A1L,0x046A17DAL}},{{0x726045FFL,0x046A17DAL,0x2BE98DEBL,0xF730A6A1L,0xF730A6A1L},{0xF730A6A1L,18446744073709551610UL,0xF730A6A1L,0UL,0xE06325DDL},{0x2BE98DEBL,0x046A17DAL,0x726045FFL,0x818A95D6L,0xE06325DDL},{0xA9085362L,0xF1A1B615L,0xF1A1B615L,0xA9085362L,0xF730A6A1L},{18446744073709551615UL,0xA9085362L,0x726045FFL,0xE06325DDL,0x046A17DAL}}};
    union U2 *l_117 = &g_89;
    const int32_t *l_124 = &g_13;
    const int32_t **l_123 = &l_124;
    uint16_t *l_125 = (void*)0;
    int32_t l_126 = 0L;
    uint32_t l_127 = 4294967295UL;
    int32_t l_128 = 0xB80643A2L;
    struct S0 *l_155 = (void*)0;
    int32_t l_251 = 0L;
    int64_t l_269 = 0x5E86104DD2CD3992LL;
    int32_t l_276 = 0L;
    int32_t l_277 = 0x92D6FB60L;
    uint64_t *l_287 = (void*)0;
    uint32_t l_289 = 1UL;
    int8_t l_343 = (-3L);
    uint16_t l_382[2][6][6] = {{{0xFC10L,0xA92BL,0UL,0xA92BL,0xFC10L,65533UL},{0xFC10L,1UL,0xA92BL,65535UL,0x07F1L,0x07F1L},{1UL,65529UL,65529UL,1UL,0UL,0x07F1L},{0x0C54L,0xFC10L,0x7251L,1UL,0x07F1L,1UL},{65533UL,65535UL,65533UL,0xA92BL,0x07F1L,0x0C54L},{0x7251L,0xFC10L,0UL,65533UL,65533UL,0UL}},{{0UL,0UL,65529UL,65533UL,0xFC10L,0xA92BL},{0x7251L,65529UL,0x0C54L,0xA92BL,0x0C54L,65529UL},{65533UL,0x7251L,0x0C54L,1UL,0UL,0xA92BL},{0UL,1UL,65529UL,65529UL,1UL,0UL},{65529UL,1UL,0UL,0x07F1L,0UL,0x0C54L},{0x0C54L,0x7251L,65533UL,0x7251L,0x0C54L,1UL}}};
    int32_t l_422 = 4L;
    int32_t l_423 = (-5L);
    int32_t l_454 = 0xE3E9FBA8L;
    int64_t l_457 = 0L;
    int32_t l_461[3][7];
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
            l_461[i][j] = 7L;
    }
    if ((p_105 == ((safe_lshift_func_uint8_t_u_u((l_128 = (l_127 = ((l_116[1][2][2] , (l_117 == &g_89)) ^ (l_126 = (safe_rshift_func_int8_t_s_u(((safe_add_func_uint16_t_u_u(((safe_unary_minus_func_int32_t_s((l_123 != &l_124))) , (g_70.f2 || 0x0E0566CBL)), p_105)) && (**l_123)), g_85[3])))))), p_107.f0)) & g_56[0])))
    { 
        uint32_t l_132 = 4294967295UL;
        int32_t l_138 = 0x4E362F14L;
        int32_t l_139 = 1L;
        int32_t l_166 = 0x4ADEF71BL;
        int32_t l_167 = (-3L);
        int32_t l_169[7][3];
        int32_t *l_186 = (void*)0;
        int32_t **l_185 = &l_186;
        uint16_t **l_222 = &l_125;
        struct S0 *l_245 = &g_145;
        struct S0 **l_246 = &l_155;
        int64_t *l_250[2][6] = {{(void*)0,&g_145.f2,(void*)0,&g_145.f2,(void*)0,&g_145.f2},{(void*)0,&g_145.f2,(void*)0,&g_145.f2,(void*)0,&g_145.f2}};
        uint32_t l_280[3][5] = {{0xEFE8F5AFL,0xEFE8F5AFL,5UL,0xEFE8F5AFL,0xEFE8F5AFL},{7UL,0xEFE8F5AFL,7UL,7UL,0xEFE8F5AFL},{0xEFE8F5AFL,7UL,7UL,0xEFE8F5AFL,7UL}};
        uint8_t l_338 = 0x03L;
        int16_t l_351[2][2] = {{0x1B62L,0x1B62L},{0x1B62L,0x1B62L}};
        int64_t l_364[4][4] = {{(-1L),(-8L),(-8L),(-1L)},{(-8L),(-1L),(-8L),(-8L)},{(-1L),(-1L),0x61207DE155A03945LL,(-1L)},{(-1L),(-8L),(-8L),(-1L)}};
        uint64_t l_365 = 18446744073709551615UL;
        uint32_t l_424 = 1UL;
        uint16_t l_428 = 0x43A2L;
        int64_t l_463 = (-9L);
        uint32_t l_467[2][4] = {{0xCF88593EL,1UL,0xCF88593EL,0xCF88593EL},{1UL,1UL,0x8905081CL,1UL}};
        uint64_t l_476 = 0UL;
        int i, j;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 3; j++)
                l_169[i][j] = 0L;
        }
lbl_206:
        for (g_84 = 19; (g_84 != (-8)); g_84 = safe_sub_func_uint32_t_u_u(g_84, 9))
        { 
            int32_t *l_131[5][4] = {{&g_10,&l_126,&l_126,&g_10},{&g_10,&l_126,&l_126,&g_10},{&g_10,&l_126,&l_126,&g_10},{&g_10,&l_126,&l_126,&g_10},{&g_10,&l_126,&l_126,&g_10}};
            struct S0 **l_156 = &l_155;
            uint16_t *l_159 = &g_85[1];
            int i, j;
            l_132 ^= 0xBBF0A6BBL;
            for (l_127 = (-14); (l_127 > 60); l_127++)
            { 
                const uint16_t *l_137 = (void*)0;
                const uint16_t **l_136 = &l_137;
                struct S0 *l_144 = &g_145;
                g_135 = 0L;
                l_126 ^= ((g_70.f0 , (void*)0) != ((*l_136) = l_125));
                l_126 |= g_7;
                g_141--;
                (*l_144) = g_70.f0;
            }
            g_140 &= (safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s(p_107.f0, ((safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((((~(((*l_156) = l_155) == (void*)0)) , g_56[0]) | ((void*)0 == &g_56[0])) < (safe_lshift_func_uint16_t_u_s(((l_159 != l_125) == p_105), g_135))), 1L)), 0xBEL)) , g_2))), p_107.f0));
            for (g_98 = 0; (g_98 != 0); g_98 = safe_add_func_uint64_t_u_u(g_98, 6))
            { 
                (*l_123) = l_131[1][3];
            }
        }
        (*l_123) = &g_13;
        for (l_139 = 0; (l_139 >= (-21)); --l_139)
        { 
            int32_t *l_164[5] = {&l_138,&l_138,&l_138,&l_138,&l_138};
            int8_t l_168 = 0x3FL;
            struct S0 *l_177 = &g_145;
            int32_t l_199 = 0x13449171L;
            int i;
            g_170[0]--;
            for (g_84 = 0; (g_84 != (-10)); g_84--)
            { 
                int64_t l_187[7] = {0x2D848D3DA17F8C63LL,0L,0x2D848D3DA17F8C63LL,0x2D848D3DA17F8C63LL,0L,0x2D848D3DA17F8C63LL,0x2D848D3DA17F8C63LL};
                uint16_t *l_188 = &g_85[3];
                int32_t l_198[4][4][6] = {{{0xE36BB2ABL,7L,7L,0xE36BB2ABL,0xE36BB2ABL,7L},{0xE36BB2ABL,0xE36BB2ABL,7L,7L,0xE36BB2ABL,0xE36BB2ABL},{0xE36BB2ABL,7L,7L,0xE36BB2ABL,0xE36BB2ABL,7L},{0xE36BB2ABL,0xE36BB2ABL,7L,7L,0xE36BB2ABL,0xE36BB2ABL}},{{0xE36BB2ABL,7L,7L,0xE36BB2ABL,0xE36BB2ABL,7L},{0xE36BB2ABL,0xE36BB2ABL,7L,7L,0xE36BB2ABL,0xE36BB2ABL},{0xE36BB2ABL,7L,7L,0xE36BB2ABL,0xE36BB2ABL,7L},{0xE36BB2ABL,0xE36BB2ABL,7L,7L,0xE36BB2ABL,0xE36BB2ABL}},{{0xE36BB2ABL,7L,7L,0xE36BB2ABL,0xE36BB2ABL,7L},{0xE36BB2ABL,0xE36BB2ABL,7L,7L,0xE36BB2ABL,0xE36BB2ABL},{0xE36BB2ABL,7L,7L,0xE36BB2ABL,0xE36BB2ABL,7L},{0xE36BB2ABL,0xE36BB2ABL,7L,7L,0xE36BB2ABL,0xE36BB2ABL}},{{0xE36BB2ABL,7L,7L,0xE36BB2ABL,0xE36BB2ABL,7L},{0xE36BB2ABL,0xE36BB2ABL,7L,7L,0xE36BB2ABL,0xE36BB2ABL},{0xE36BB2ABL,7L,7L,0xE36BB2ABL,0xE36BB2ABL,7L},{0xE36BB2ABL,0xE36BB2ABL,7L,7L,0xE36BB2ABL,0xE36BB2ABL}}};
                uint64_t *l_237 = &g_203;
                uint64_t **l_236 = &l_237;
                uint64_t ***l_238 = &l_236;
                int i, j, k;
                l_187[3] = ((((65535UL > (g_70.f0 , ((safe_rshift_func_uint8_t_u_s((((g_70.f1 , l_177) != ((((((+(safe_mul_func_int16_t_s_s(g_140, (safe_lshift_func_int8_t_s_u(((((((g_183[2] == (l_185 = (g_89 , l_185))) == 0xA6L) || (-4L)) < 0x1C9DL) < l_167) , g_165), 7))))) & 0x0C22E8BE43F028F5LL) , 0x5EC714A4L) | g_94) , p_107.f0) , l_155)) & p_105), p_105)) , (-1L)))) == (*p_106)) > (*p_106)) , p_105);
                l_169[6][2] |= (l_166 = (p_107.f0 < ((*l_188)++)));
                if (p_107.f0)
                { 
                    uint32_t *l_195 = &l_127;
                    int32_t l_196 = 1L;
                    union U2 *l_197 = (void*)0;
                    int32_t l_200 = 0L;
                    int32_t l_201 = (-1L);
                    int32_t l_202[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_202[i] = 0L;
                    l_198[3][1][5] &= ((safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(0x35E637F3L, 1UL)), 2)) , (((*l_195) = (g_74 > 0x2A451E7E789F1A27LL)) , (l_196 , ((((((g_70 , func_77(l_196)) != l_197) <= p_105) , (void*)0) == l_125) >= g_165))));
                    if (l_196)
                        continue;
                    g_203++;
                    if (l_200)
                        break;
                    if (g_70.f0.f1)
                        goto lbl_206;
                }
                else
                { 
                    uint64_t *l_215 = &g_203;
                    uint8_t *l_234 = &g_170[0];
                    int32_t l_235 = (-1L);
                    l_169[5][0] ^= ((void*)0 != &p_107);
                    l_198[2][3][4] = (((p_105 , (18446744073709551615UL < ((*l_215) |= ((~p_105) > ((g_85[1] != ((safe_rshift_func_uint8_t_u_u((!(((g_140 > ((safe_add_func_int64_t_s_s(((safe_mod_func_uint8_t_u_u(0xF3L, p_105)) < l_198[3][1][5]), 4UL)) , 0xA6B5CAA7L)) , 65527UL) | (**l_123))), p_107.f0)) > g_84)) == (*l_124)))))) == p_107.f0) >= p_107.f0);
                    l_235 ^= (safe_rshift_func_uint8_t_u_s((((*l_234) |= (safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((p_107 , l_222) != (void*)0), 0)), (+(safe_mod_func_int32_t_s_s((l_198[0][1][4] = p_105), (safe_sub_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u(((p_107.f0 ^ (((((safe_mod_func_uint64_t_u_u((((*l_215) = (p_105 , (p_107.f0 || p_105))) != 0x13274FA118B2DAAALL), p_105)) , 0x212CL) , g_72) || g_84) <= p_105)) , 0x87E9L), g_10)) , g_70.f0.f2) & g_70.f2), g_72)), g_94)))))))) < g_165), 3));
                }
                (*l_238) = l_236;
            }
        }
        if (((~(g_145.f2 = ((safe_add_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u(((l_126 = p_105) ^ ((((*p_106) , ((((*l_246) = l_245) == (void*)0) , ((~((((1L <= ((((((l_251 |= (l_128 ^= (safe_sub_func_uint32_t_u_u(((void*)0 == (*l_185)), (*l_124))))) && 0x49F8A7C91920B7C3LL) || 18446744073709551612UL) | p_105) <= 0x17A6D678DD13CF1FLL) > g_165)) && 247UL) , g_89) , p_105)) <= 1UL))) , &g_203) != (void*)0)))), p_107.f0)) || 0x99F1L), p_107.f0)) || 65535UL))) <= 0x62L))
        { 
            const int32_t *l_254 = &l_169[3][2];
            int32_t l_262 = (-1L);
            int32_t l_273 = 0xA21A5E6AL;
            int32_t l_274[5][4] = {{0xEDCD1CE3L,0x745BCA5CL,(-1L),(-1L)},{1L,1L,0xEDCD1CE3L,(-1L)},{0xAEFC0E63L,0x745BCA5CL,0xAEFC0E63L,0xEDCD1CE3L},{0xAEFC0E63L,0xEDCD1CE3L,0xEDCD1CE3L,0xAEFC0E63L},{1L,0xEDCD1CE3L,(-1L),0xEDCD1CE3L}};
            uint64_t *l_286 = &g_203;
            uint32_t *l_296[4];
            uint16_t l_319 = 1UL;
            uint64_t l_340 = 18446744073709551615UL;
            const struct S0 l_410 = {0x9739L,1UL,0L};
            union U2 *l_427 = (void*)0;
            uint32_t l_441[1][4] = {{1UL,1UL,1UL,1UL}};
            int i, j;
            for (i = 0; i < 4; i++)
                l_296[i] = &l_289;
            (*l_123) = (*l_123);
            for (g_74 = (-28); (g_74 <= 7); g_74 = safe_add_func_uint64_t_u_u(g_74, 6))
            { 
                int8_t l_275[7][3][1] = {{{1L},{0L},{0xAFL}},{{6L},{0xAFL},{0L}},{{1L},{1L},{0L}},{{0xAFL},{6L},{0xAFL}},{{0L},{1L},{1L}},{{0L},{0xAFL},{6L}},{{0xAFL},{0L},{1L}}};
                int32_t l_278 = 8L;
                int32_t l_279 = 0xBDAC9935L;
                int32_t *l_288 = &l_279;
                int i, j, k;
                l_254 = (void*)0;
                for (p_105 = (-23); (p_105 == (-14)); ++p_105)
                { 
                    int32_t *l_257 = &l_169[5][0];
                    int32_t *l_258 = &l_169[5][0];
                    int32_t *l_259 = &l_167;
                    int32_t *l_260 = (void*)0;
                    int32_t *l_261 = (void*)0;
                    int32_t *l_263 = &g_140;
                    int32_t *l_264 = &g_140;
                    int32_t *l_265 = (void*)0;
                    int32_t *l_266 = &l_138;
                    int32_t *l_267 = &l_138;
                    int32_t *l_268 = (void*)0;
                    int32_t *l_270 = &l_166;
                    int32_t *l_271 = &l_169[0][1];
                    int32_t *l_272[1];
                    uint8_t l_283 = 255UL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_272[i] = &l_251;
                    (*l_185) = (void*)0;
                    --l_280[2][0];
                    (*l_123) = &l_274[4][2];
                    (*l_267) ^= (l_250[1][4] == &p_105);
                    ++l_283;
                }
                (*l_288) |= (l_169[2][2] = (l_286 == (l_287 = p_106)));
                (*l_288) |= (((*p_106) && l_289) >= p_107.f0);
                (*l_185) = &l_262;
            }
            if ((l_274[1][3] , ((safe_mul_func_uint8_t_u_u(g_84, g_56[0])) >= (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u((((g_297[0][0]++) < (g_170[0] , (((safe_lshift_func_int16_t_s_u(((l_273 = (0xB398669CBBF9B92BLL == (safe_rshift_func_uint8_t_u_s(0x34L, 2)))) >= ((*l_245) , 4294967289UL)), 11)) != (*l_124)) , 0L))) >= p_107.f0), g_70.f1)), 7)))))
            { 
                const int32_t l_312 = 0xEEE26554L;
                int32_t l_320 = (-1L);
                int32_t l_352 = 7L;
                int32_t l_353 = 0xE7C5A6D4L;
                int32_t l_355 = (-1L);
                int32_t *l_359 = &l_353;
                int32_t *l_368 = &l_167;
                int32_t *l_369 = (void*)0;
                int32_t *l_370 = (void*)0;
                int32_t *l_371 = &l_139;
                int32_t *l_372 = (void*)0;
                int32_t *l_373 = &l_320;
                int32_t *l_374 = &l_262;
                int32_t *l_375 = &l_169[4][1];
                int32_t *l_376 = &l_251;
                int32_t *l_377 = &l_251;
                int32_t *l_378 = &l_276;
                int32_t *l_379 = &l_166;
                int32_t *l_380 = &l_128;
                int32_t *l_381[3][7] = {{&l_320,&l_320,&l_320,&l_320,&l_320,&l_320,&l_320},{&l_128,&l_128,&l_128,&l_128,&l_128,&l_128,&l_128},{&l_320,&l_320,&l_320,&l_320,&l_320,&l_320,&l_320}};
                int i, j;
                if (((safe_add_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((l_277 |= (safe_mod_func_int64_t_s_s((l_320 = (((*l_286) = (safe_rshift_func_int16_t_s_s(((((p_105 , g_72) >= 65534UL) > ((((8UL & p_107.f0) ^ (l_312 && ((((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(p_105, l_312)), g_170[0])) != (**l_123)), l_312)) , (*l_124)) < 1L) | p_107.f0))) > (*l_124)) != 0x92CDDA06L)) >= l_319), g_140))) & p_105)), 3UL))), p_107.f0)) <= (*p_106)), 0x485DL)) | 1L))
                { 
                    uint32_t l_329 = 0xD80BCEAFL;
                    uint8_t *l_339 = &g_141;
                    int32_t *l_341 = &g_140;
                    struct S0 **l_342 = &l_155;
                    int32_t *l_344 = (void*)0;
                    int32_t *l_345 = &l_169[6][0];
                    int32_t *l_346 = &l_277;
                    int32_t *l_347 = (void*)0;
                    int32_t *l_348 = &l_138;
                    int32_t *l_349 = &g_140;
                    int32_t *l_350[5] = {&g_140,&g_140,&g_140,&g_140,&g_140};
                    int8_t l_354 = 0x45L;
                    int i;
                    (*l_341) ^= (safe_add_func_int64_t_s_s((0UL <= ((((*l_339) = (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(((0x8EB79CD1L && ((l_329 != (safe_div_func_uint64_t_u_u(g_145.f1, (((safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(g_85[1], 2)), ((p_105 , ((((safe_add_func_int32_t_s_s((&l_269 != (void*)0), g_56[0])) | 0xFC52L) , g_72) > (*p_106))) & p_107.f0))) , 4294967295UL) & p_105)))) < l_338)) & (-4L)), 0x25L)), 7)), l_273))) > l_329) , (*p_106))), l_340));
                    (*l_123) = (*l_123);
                    (*l_341) ^= (((l_342 != (void*)0) && l_343) , 0x9EA8BB69L);
                    ++g_356[0][3][4];
                }
                else
                { 
                    int32_t *l_360 = &l_273;
                    int32_t *l_361 = &l_262;
                    int32_t *l_362 = &l_126;
                    int32_t *l_363[6] = {&l_166,&l_166,&l_166,&l_166,&l_166,&l_166};
                    int i;
                    l_359 = (void*)0;
                    l_365++;
                }
                for (p_105 = 0; (p_105 <= 1); p_105 += 1)
                { 
                    int i;
                    return &g_10;
                }
                l_382[0][5][4]++;
            }
            else
            { 
                int32_t *l_411 = &l_167;
                int32_t l_418 = (-1L);
                int32_t l_419 = 0x34EAB1FBL;
                int32_t l_420 = 0xFBEE41F4L;
                int32_t l_421 = 3L;
                int32_t l_458 = 0xA44F817DL;
                int32_t l_459 = (-10L);
                int32_t l_460 = 0xF630CD0AL;
                int32_t l_462 = 0xF4E655ADL;
                int32_t l_464 = (-9L);
                int32_t l_465 = (-6L);
                int64_t l_466 = 0xAA5AB4AA508C9860LL;
                for (g_165 = 21; (g_165 < 20); g_165--)
                { 
                    uint64_t l_392[5][5] = {{0x71156AD473797FC9LL,0x2D8FE386287025BALL,0x2D8FE386287025BALL,0x71156AD473797FC9LL,0x849691861CFDD80BLL},{0x71156AD473797FC9LL,0x2D8FE386287025BALL,0x2D8FE386287025BALL,0x71156AD473797FC9LL,0x849691861CFDD80BLL},{0x71156AD473797FC9LL,0x2D8FE386287025BALL,0x2D8FE386287025BALL,0x71156AD473797FC9LL,0x849691861CFDD80BLL},{0x71156AD473797FC9LL,0x2D8FE386287025BALL,0x2D8FE386287025BALL,0x71156AD473797FC9LL,0x849691861CFDD80BLL},{0x71156AD473797FC9LL,0x2D8FE386287025BALL,0x2D8FE386287025BALL,0x71156AD473797FC9LL,0x849691861CFDD80BLL}};
                    int32_t l_405 = 2L;
                    uint8_t *l_408 = &g_170[0];
                    int32_t *l_409 = &l_262;
                    int i, j;
                    (*l_409) = (safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(g_7, (safe_unary_minus_func_uint8_t_u((l_392[4][0] = g_72))))), ((g_94 = (safe_unary_minus_func_int64_t_s(((safe_rshift_func_uint8_t_u_s(((((*l_408) = ((((((*l_117) = p_107) , (safe_mul_func_uint16_t_u_u(g_56[0], (safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(6UL, ((((((*l_124) && (g_356[0][3][4] = (((safe_lshift_func_int8_t_s_u((+g_203), g_297[3][0])) && g_6[3][0]) && l_405))) < p_107.f0) , g_406) != &g_407) , 0xA89DL))), p_105))))) >= l_405) , 0x26AB20B7L) && 2UL)) <= 0x3FL) <= 0UL), 7)) >= 0x6C44F95F059BF69FLL)))) | g_140)));
                    (*l_155) = l_410;
                    (*l_123) = l_411;
                }
                for (l_138 = 0; (l_138 != (-24)); --l_138)
                { 
                    int32_t *l_414 = (void*)0;
                    int32_t l_415[2][1];
                    int32_t *l_416 = &l_277;
                    int32_t *l_417[7] = {&l_166,&l_166,&l_166,&l_166,&l_166,&l_166,&l_166};
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_415[i][j] = 0x5AB2715FL;
                    }
                    --l_424;
                    if (p_105)
                        continue;
                    l_427 = &p_107;
                    --l_428;
                }
                for (l_421 = (-24); (l_421 != (-26)); l_421 = safe_sub_func_int32_t_s_s(l_421, 2))
                { 
                    int32_t l_433 = 0L;
                    int32_t *l_434 = (void*)0;
                    int32_t *l_435 = &l_423;
                    int32_t *l_436 = &l_423;
                    int32_t *l_437 = (void*)0;
                    int32_t *l_438 = &l_251;
                    int32_t *l_439 = &l_418;
                    int32_t *l_440[2];
                    int8_t *l_446[7];
                    int64_t l_475 = 1L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_440[i] = &l_277;
                    for (i = 0; i < 7; i++)
                        l_446[i] = &l_343;
                    l_441[0][2]++;
                    (*l_439) = (safe_mul_func_int8_t_s_s(((l_277 = (g_135 = (*l_435))) < ((safe_lshift_func_int8_t_s_u(0xCAL, 0)) & 0UL)), (safe_mul_func_int8_t_s_s(((((*l_286) = (g_21 | ((safe_rshift_func_int16_t_s_u(((+(g_145 , ((l_454 ^ ((((safe_rshift_func_int8_t_s_u(g_356[0][3][4], p_107.f0)) != (*l_435)) || 0x87E9L) >= (*p_106))) , 5UL))) ^ p_107.f0), g_140)) || (*l_411)))) <= (*l_124)) , p_105), 0xFAL))));
                    (*l_155) = g_70.f0;
                    l_467[1][3]++;
                    l_273 ^= (safe_sub_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(((safe_rshift_func_int8_t_s_s(((l_475 >= ((g_135 = l_476) ^ (((&g_145 == ((safe_mul_func_int16_t_s_s(g_23, p_105)) , &g_145)) <= p_107.f0) != 18446744073709551608UL))) > (*p_106)), 4)) , 0x54L))), g_145.f0));
                }
            }
            for (g_135 = 0; (g_135 != (-27)); --g_135)
            { 
                int32_t *l_481 = &l_454;
                return &g_13;
            }
        }
        else
        { 
            int32_t *l_484 = &l_167;
            l_139 = ((*l_484) = (safe_lshift_func_int16_t_s_s(g_145.f1, 7)));
        }
    }
    else
    { 
        int32_t *l_485 = (void*)0;
        (*l_123) = l_485;
        (*l_123) = l_485;
    }
    l_117 = l_117;
    return &g_2;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_6[i][j], "g_6[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_56[i], "g_56[i]", print_hash_value);

    }
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_70.f0.f0, "g_70.f0.f0", print_hash_value);
    transparent_crc(g_70.f0.f1, "g_70.f0.f1", print_hash_value);
    transparent_crc(g_70.f0.f2, "g_70.f0.f2", print_hash_value);
    transparent_crc(g_70.f1, "g_70.f1", print_hash_value);
    transparent_crc(g_70.f2, "g_70.f2", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_85[i], "g_85[i]", print_hash_value);

    }
    transparent_crc(g_89.f0, "g_89.f0", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_145.f0, "g_145.f0", print_hash_value);
    transparent_crc(g_145.f1, "g_145.f1", print_hash_value);
    transparent_crc(g_145.f2, "g_145.f2", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_170[i], "g_170[i]", print_hash_value);

    }
    transparent_crc(g_203, "g_203", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_297[i][j], "g_297[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_356[i][j][k], "g_356[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_530.f0.f0, "g_530.f0.f0", print_hash_value);
    transparent_crc(g_530.f0.f1, "g_530.f0.f1", print_hash_value);
    transparent_crc(g_530.f0.f2, "g_530.f0.f2", print_hash_value);
    transparent_crc(g_530.f1, "g_530.f1", print_hash_value);
    transparent_crc(g_530.f2, "g_530.f2", print_hash_value);
    transparent_crc(g_532.f0.f0, "g_532.f0.f0", print_hash_value);
    transparent_crc(g_532.f0.f1, "g_532.f0.f1", print_hash_value);
    transparent_crc(g_532.f0.f2, "g_532.f0.f2", print_hash_value);
    transparent_crc(g_532.f1, "g_532.f1", print_hash_value);
    transparent_crc(g_532.f2, "g_532.f2", print_hash_value);
    transparent_crc(g_593, "g_593", print_hash_value);
    transparent_crc(g_622, "g_622", print_hash_value);
    transparent_crc(g_1050, "g_1050", print_hash_value);
    transparent_crc(g_1078, "g_1078", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1138[i], "g_1138[i]", print_hash_value);

    }
    transparent_crc(g_1156, "g_1156", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_1298[i][j][k], "g_1298[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1306, "g_1306", print_hash_value);
    transparent_crc(g_1310, "g_1310", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1399[i], "g_1399[i]", print_hash_value);

    }
    transparent_crc(g_1426, "g_1426", print_hash_value);
    transparent_crc(g_1446, "g_1446", print_hash_value);
    transparent_crc(g_1489, "g_1489", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1511[i], "g_1511[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
