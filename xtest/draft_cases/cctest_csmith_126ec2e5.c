// SPDX-License-Identifier: MIT
// cctest_csmith_126ec2e5.c --- cctest case csmith_126ec2e5 (csmith seed 309248741)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x9ab6c2e8 */

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

// Options:   -s 309248741 -o /tmp/csmith_gen_e_p58a90/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   unsigned f0 : 17;
   unsigned f1 : 4;
   signed f2 : 23;
   unsigned f3 : 6;
   unsigned f4 : 31;
   signed f5 : 28;
   signed f6 : 11;
   const uint64_t  f7;
};
#pragma pack(pop)

union U1 {
   uint16_t  f0;
   uint64_t  f1;
   signed f2 : 16;
   int8_t * f3;
};

union U2 {
   uint32_t  f0;
   const int64_t  f1;
   int32_t  f2;
};

union U3 {
   int32_t  f0;
   int8_t  f1;
   int16_t  f2;
   int32_t  f3;
};


static int32_t g_3 = 0x13B28858L;
static int8_t g_7 = 0x12L;
static int8_t *g_6[4][3] = {{&g_7,&g_7,&g_7},{&g_7,(void*)0,&g_7},{&g_7,&g_7,&g_7},{&g_7,(void*)0,&g_7}};
static int32_t g_14 = 4L;
static union U1 g_25[6][7][6] = {{{{0x3EBEL},{0x0802L},{0x0802L},{0x3EBEL},{0xB9CBL},{0x3EBEL}},{{0x3EBEL},{0xB9CBL},{0x3EBEL},{0x0802L},{0x0802L},{0x3EBEL}},{{1UL},{1UL},{0x0802L},{0UL},{0x0802L},{1UL}},{{0x0802L},{0xB9CBL},{0UL},{0UL},{0xB9CBL},{0x0802L}},{{1UL},{0x0802L},{0UL},{0x0802L},{1UL},{1UL}},{{0x3EBEL},{0x0802L},{0x0802L},{0x3EBEL},{1UL},{0UL}},{{0UL},{1UL},{0UL},{0x3EBEL},{0x3EBEL},{0UL}}},{{{0x0802L},{0x0802L},{0x3EBEL},{0xB9CBL},{0x3EBEL},{0x0802L}},{{0x3EBEL},{1UL},{0xB9CBL},{0xB9CBL},{1UL},{0x3EBEL}},{{0x0802L},{0x3EBEL},{0xB9CBL},{0x3EBEL},{0x0802L},{0x0802L}},{{0UL},{0x3EBEL},{0x3EBEL},{0UL},{1UL},{0UL}},{{0UL},{1UL},{0UL},{0x3EBEL},{0x3EBEL},{0UL}},{{0x0802L},{0x0802L},{0x3EBEL},{0xB9CBL},{0x3EBEL},{0x0802L}},{{0x3EBEL},{1UL},{0xB9CBL},{0xB9CBL},{1UL},{0x3EBEL}}},{{{0x0802L},{0x3EBEL},{0xB9CBL},{0x3EBEL},{0x0802L},{0x0802L}},{{0UL},{0x3EBEL},{0x3EBEL},{0UL},{1UL},{0UL}},{{0UL},{1UL},{0UL},{0x3EBEL},{0x3EBEL},{0UL}},{{0x0802L},{0x0802L},{0x3EBEL},{0xB9CBL},{0x3EBEL},{0x0802L}},{{0x3EBEL},{1UL},{0xB9CBL},{0xB9CBL},{1UL},{0x3EBEL}},{{0x0802L},{0x3EBEL},{0xB9CBL},{0x3EBEL},{0x0802L},{0x0802L}},{{0UL},{0x3EBEL},{0x3EBEL},{0UL},{1UL},{0UL}}},{{{0UL},{1UL},{0UL},{0x3EBEL},{0x3EBEL},{0UL}},{{0x0802L},{0x0802L},{0x3EBEL},{0xB9CBL},{0x3EBEL},{0x0802L}},{{0x3EBEL},{1UL},{0xB9CBL},{0xB9CBL},{1UL},{0x3EBEL}},{{0x0802L},{0x3EBEL},{0xB9CBL},{0x3EBEL},{0x0802L},{0x0802L}},{{0UL},{0x3EBEL},{0x3EBEL},{0UL},{1UL},{0UL}},{{0UL},{1UL},{0UL},{0x3EBEL},{0x3EBEL},{0UL}},{{0x0802L},{0x0802L},{0x3EBEL},{0xB9CBL},{0x3EBEL},{0x0802L}}},{{{0x3EBEL},{1UL},{0xB9CBL},{0xB9CBL},{1UL},{0x3EBEL}},{{0x0802L},{0x3EBEL},{0xB9CBL},{0x3EBEL},{0x0802L},{0x0802L}},{{0UL},{0x3EBEL},{0x3EBEL},{0UL},{1UL},{0UL}},{{0UL},{1UL},{0UL},{0x3EBEL},{0x3EBEL},{0UL}},{{0x0802L},{0x0802L},{0x3EBEL},{0xB9CBL},{0x3EBEL},{0x0802L}},{{0x3EBEL},{1UL},{0xB9CBL},{0xB9CBL},{1UL},{0x3EBEL}},{{0x0802L},{0x3EBEL},{0xB9CBL},{0x3EBEL},{0x0802L},{0x0802L}}},{{{0UL},{0x3EBEL},{0x3EBEL},{0UL},{1UL},{0UL}},{{0UL},{1UL},{0UL},{0x3EBEL},{0x3EBEL},{0UL}},{{0x0802L},{0x0802L},{0x3EBEL},{1UL},{0UL},{0x3EBEL}},{{0UL},{0x0802L},{1UL},{1UL},{0x0802L},{0UL}},{{0x3EBEL},{0UL},{1UL},{0UL},{0x3EBEL},{0x3EBEL}},{{0xB9CBL},{0UL},{0UL},{0xB9CBL},{0x0802L},{0xB9CBL}},{{0xB9CBL},{0x0802L},{0xB9CBL},{0UL},{0UL},{0xB9CBL}}}};
static int16_t g_66 = 0x4763L;
static uint8_t g_92 = 255UL;
static uint32_t g_109 = 4294967295UL;
static uint32_t g_111[1] = {0x1785A3FFL};
static uint8_t g_113[4] = {254UL,254UL,254UL,254UL};
static union U3 g_124 = {0x6CB947F0L};
static int64_t g_128 = 0x9F99B685FDE158D9LL;
static struct S0 g_132 = {350,2,-570,0,31706,7778,-10,0x99D302D72378B10DLL};
static struct S0 g_135[5] = {{307,1,-1038,3,27465,-9898,37,18446744073709551614UL},{307,1,-1038,3,27465,-9898,37,18446744073709551614UL},{307,1,-1038,3,27465,-9898,37,18446744073709551614UL},{307,1,-1038,3,27465,-9898,37,18446744073709551614UL},{307,1,-1038,3,27465,-9898,37,18446744073709551614UL}};
static union U1 ** const *g_136 = (void*)0;
static int8_t g_168 = (-4L);
static uint8_t g_170 = 0xC6L;
static union U2 g_202 = {4294967295UL};
static int8_t **g_210 = (void*)0;
static int8_t ***g_209 = &g_210;
static int8_t g_271 = 0x8BL;
static int32_t g_274 = (-3L);
static int32_t *g_284 = (void*)0;
static int32_t **g_283 = &g_284;
static union U2 g_326 = {0x74EA79FFL};
static struct S0 *g_350 = &g_135[4];
static struct S0 **g_349 = &g_350;
static int8_t *g_370[5] = {&g_168,&g_168,&g_168,&g_168,&g_168};
static int8_t ** const g_369[7] = {&g_370[2],&g_370[2],&g_370[2],&g_370[2],&g_370[2],&g_370[2],&g_370[2]};
static int8_t ** const *g_368 = &g_369[4];
static uint8_t g_434 = 0UL;
static uint64_t g_464 = 0UL;
static int64_t g_470 = 0xEA76E9477B62E104LL;
static union U1 *g_483 = &g_25[0][1][2];
static union U1 **g_482 = &g_483;
static const int16_t g_516 = (-1L);
static int32_t g_522[3][1] = {{0xBF5009F4L},{0xBF5009F4L},{0xBF5009F4L}};
static union U2 g_579 = {0xF0B25886L};
static union U2 *g_578 = &g_579;
static struct S0 ** const *g_583 = &g_349;
static struct S0 ** const **g_582[7][2] = {{&g_583,&g_583},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,&g_583},{&g_583,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
static int32_t g_617 = 0x211C9E42L;
static uint32_t g_618 = 0x20D88337L;
static struct S0 ** const ***g_671 = &g_582[1][0];
static uint32_t g_781 = 0x76BE9C10L;
static int64_t g_790[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static uint16_t g_791 = 2UL;
static uint32_t g_921 = 0x96F5B37EL;
static int32_t g_927 = 0xD64D8560L;
static int32_t g_928 = 1L;
static uint32_t g_930 = 4294967293UL;
static uint8_t *g_945 = &g_113[1];
static uint8_t **g_944 = &g_945;
static uint16_t g_998[3][6] = {{1UL,0x096EL,1UL,3UL,65533UL,65533UL},{0xEDA7L,1UL,1UL,0xEDA7L,0x096EL,0xECA3L},{0xECA3L,0xEDA7L,65533UL,0xEDA7L,0xECA3L,3UL}};
static const int32_t *g_1046 = (void*)0;
static union U3 *g_1055 = &g_124;
static union U3 ** const g_1054 = &g_1055;
static uint8_t g_1115 = 0x32L;
static int32_t g_1257 = 0xA297C4DCL;
static int32_t g_1274 = 0x0FE06E00L;
static uint32_t g_1275 = 0x157AF4A3L;
static int16_t g_1343 = (-1L);
static int8_t g_1344 = (-6L);
static int32_t *g_1349 = &g_522[2][0];
static int32_t **g_1348[6] = {&g_1349,&g_1349,&g_1349,&g_1349,&g_1349,&g_1349};
static uint32_t g_1365[1] = {0x779A4868L};
static uint32_t g_1377 = 0xB1395CD3L;
static uint16_t g_1380 = 65526UL;
static int8_t ****g_1384 = &g_209;
static int8_t *****g_1383[7] = {&g_1384,&g_1384,&g_1384,&g_1384,&g_1384,&g_1384,&g_1384};
static int32_t g_1396 = 2L;
static const int32_t g_1415 = 0x3AB06057L;
static const int64_t g_1446 = 0L;
static const int64_t *g_1447 = (void*)0;
static int64_t **g_1465 = (void*)0;
static int64_t ***g_1464 = &g_1465;
static int64_t *g_1469[7][5] = {{&g_790[2],&g_790[3],&g_790[3],&g_790[2],&g_790[3]},{&g_790[4],&g_790[4],&g_470,&g_790[4],&g_790[4]},{&g_790[3],&g_790[2],&g_790[3],&g_790[3],&g_790[2]},{&g_790[4],&g_790[4],&g_790[4],&g_790[4],&g_790[4]},{&g_790[2],&g_790[2],(void*)0,&g_790[2],&g_790[2]},{&g_790[4],&g_790[4],&g_790[4],&g_790[4],&g_790[4]},{&g_790[2],&g_790[3],&g_790[3],&g_790[2],&g_790[3]}};
static int16_t g_1512 = 0x0E90L;
static uint32_t g_1514 = 0x356D75EBL;
static int32_t ***g_1548 = (void*)0;
static int32_t ****g_1547 = &g_1548;
static int8_t g_1560 = 0x7CL;
static uint8_t g_1570 = 0UL;
static uint32_t *g_1577 = &g_579.f0;
static uint16_t g_1613 = 0xF354L;
static union U2 g_1639 = {0xB28A5592L};
static int16_t *g_1703 = &g_66;
static int16_t **g_1702 = &g_1703;
static union U2 **g_1737 = (void*)0;
static union U2 ***g_1736 = &g_1737;
static uint32_t **g_1767 = (void*)0;
static uint8_t g_1779 = 0UL;
static uint32_t g_1810 = 0x20BF1742L;
static const int32_t g_1824 = 1L;
static const int32_t g_1832 = 1L;
static const int32_t g_1853 = 0xCC69422DL;
static const int32_t g_1854 = 1L;
static int32_t g_1855 = 7L;



static uint8_t  func_1(void);
static union U1 * func_4(int8_t * p_5);
static int32_t  func_8(int16_t  p_9, uint32_t  p_10);
static union U1  func_37(uint8_t  p_38, int64_t  p_39, union U1 ** p_40);
static struct S0  func_43(union U1 ** p_44, const int32_t * p_45);
static union U1 ** func_46(int8_t * p_47);
static int8_t * func_48(const int32_t  p_49, int32_t  p_50, uint32_t  p_51, union U2  p_52, int8_t  p_53);
static union U2  func_60(const uint32_t  p_61, union U1 * p_62, const int16_t  p_63);




static uint8_t  func_1(void)
{ 
    union U3 l_2[3][3][3] = {{{{0xE2F9D44CL},{0xBFA32A17L},{0x0452A26FL}},{{0x21A35CA4L},{0x21A35CA4L},{0x0452A26FL}},{{0xBFA32A17L},{0xE2F9D44CL},{0x0452A26FL}}},{{{0xE2F9D44CL},{0xBFA32A17L},{0x0452A26FL}},{{0x21A35CA4L},{0x21A35CA4L},{0x0452A26FL}},{{0xBFA32A17L},{0xE2F9D44CL},{0x0452A26FL}}},{{{0xE2F9D44CL},{0xBFA32A17L},{0x0452A26FL}},{{0x21A35CA4L},{0x21A35CA4L},{0x0452A26FL}},{{0xBFA32A17L},{0xE2F9D44CL},{0x0452A26FL}}}};
    int32_t l_31 = 0x024D8F3BL;
    union U1 **l_1129 = &g_483;
    int32_t l_1423[5][7] = {{0L,0x55FB1E33L,9L,0x55FB1E33L,0L,0x55FB1E33L,9L},{0L,0xD7E66E8BL,1L,1L,0xD7E66E8BL,0L,0x6FBA3C5BL},{0xE839FEE4L,0L,0xE839FEE4L,0x55FB1E33L,0xE839FEE4L,0L,0xE839FEE4L},{0L,1L,0x6FBA3C5BL,0xD7E66E8BL,0xD7E66E8BL,0x6FBA3C5BL,1L},{0L,0L,9L,0L,0L,0L,9L}};
    const int64_t *l_1443[6][6] = {{&g_128,&g_128,&g_128,&g_470,&g_470,&g_470},{&g_470,&g_790[1],&g_470,&g_790[4],&g_128,&g_128},{&g_790[4],&g_790[4],&g_128,&g_790[2],&g_470,&g_128},{&g_470,&g_470,&g_790[4],&g_790[2],&g_790[2],&g_790[4]},{&g_790[4],&g_790[4],&g_790[1],&g_790[4],&g_128,&g_470},{&g_470,&g_470,&g_790[4],&g_470,&g_790[4],&g_790[1]}};
    int8_t *****l_1456 = &g_1384;
    int32_t *l_1459 = &l_1423[2][1];
    const uint32_t l_1496 = 0UL;
    uint8_t l_1517[6][5] = {{0UL,1UL,0x0DL,0x0DL,1UL},{250UL,0x08L,2UL,1UL,255UL},{0x08L,0x0DL,2UL,0x69L,2UL},{255UL,255UL,0x0DL,250UL,0xA4L},{0x08L,0xA4L,0UL,250UL,250UL},{250UL,255UL,250UL,0x69L,0xF7L}};
    int16_t l_1518 = 0x47E9L;
    int32_t ***l_1535 = &g_283;
    uint32_t l_1543[2][4][7] = {{{0xDC344150L,18446744073709551614UL,0xDC344150L,3UL,1UL,0x80EF7B04L,1UL},{1UL,0UL,0x3DF68B9DL,0xB154D74CL,7UL,0xDB02F11BL,18446744073709551606UL},{0UL,1UL,3UL,18446744073709551615UL,0x4DF9D0BEL,0x80EF7B04L,0UL},{18446744073709551611UL,18446744073709551615UL,1UL,0x4DF9D0BEL,18446744073709551606UL,0x4DF9D0BEL,1UL}},{{18446744073709551615UL,18446744073709551615UL,0xDB02F11BL,1UL,0UL,0x3DF68B9DL,0xB154D74CL},{7UL,1UL,0UL,7UL,3UL,1UL,1UL},{0xDC344150L,0UL,3UL,0x4DF9D0BEL,0UL,18446744073709551611UL,0UL},{0xB154D74CL,18446744073709551614UL,0x3DF68B9DL,18446744073709551606UL,18446744073709551606UL,0x3DF68B9DL,18446744073709551614UL}}};
    int64_t l_1565 = 1L;
    int32_t l_1579 = 0xFDADECDEL;
    const uint32_t l_1585 = 0xBEF84D5EL;
    struct S0 ** const l_1590 = &g_350;
    int64_t l_1592 = 0xB1A22C8FE00BCAD1LL;
    int32_t l_1609 = (-1L);
    struct S0 ***l_1785 = &g_349;
    uint16_t *l_1838 = (void*)0;
    uint16_t **l_1837 = &l_1838;
    uint32_t **l_1847 = (void*)0;
    uint32_t **l_1849 = &g_1577;
    int64_t *l_1860[2][4] = {{&g_790[4],&g_790[4],&g_790[4],&g_790[4]},{&g_790[4],&g_790[4],&g_790[4],&g_790[4]}};
    uint32_t l_1861 = 0UL;
    int32_t *l_1862 = (void*)0;
    int32_t *l_1863 = &g_3;
    int i, j, k;
    for (g_3 = 2; (g_3 >= 0); g_3 -= 1)
    { 
        union U1 **l_26 = (void*)0;
        union U1 *l_28 = &g_25[3][0][4];
        union U1 **l_27 = &l_28;
        int16_t l_32 = 0L;
        const int32_t *l_1414 = &g_1415;
        int32_t l_1422 = 0xA261FA95L;
        int32_t **l_1478[1];
        uint64_t l_1513 = 1UL;
        int16_t l_1546 = (-2L);
        uint64_t l_1558[5] = {8UL,8UL,8UL,8UL,8UL};
        uint32_t l_1573 = 0xF6D852C2L;
        int64_t l_1602 = (-1L);
        int64_t l_1604 = 4L;
        uint32_t l_1676 = 0x928EB206L;
        uint8_t l_1700 = 0x02L;
        const int32_t **l_1708 = (void*)0;
        const int32_t ***l_1707[2][4] = {{&l_1708,&l_1708,&l_1708,&l_1708},{&l_1708,&l_1708,&l_1708,&l_1708}};
        const int32_t **** const l_1706 = &l_1707[1][0];
        uint8_t l_1725 = 6UL;
        uint32_t l_1727 = 0x665EB3BCL;
        uint32_t l_1754 = 0xB6E76BA8L;
        uint8_t l_1773 = 0xF3L;
        int i, j;
        for (i = 0; i < 1; i++)
            l_1478[i] = &l_1459;
        (*l_27) = func_4(g_6[0][2]);
        for (g_7 = 2; (g_7 >= 0); g_7 -= 1)
        { 
            struct S0 l_64 = {209,2,1713,7,17549,-8184,14,18446744073709551615UL};
            union U2 l_321 = {0xC01033B0L};
            const int32_t *l_727 = &g_3;
            int32_t *l_1395 = &g_1396;
            int32_t *l_1399[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t **l_1400 = &g_1349;
            uint32_t *l_1405 = &g_930;
            int32_t l_1412 = 1L;
            uint16_t *l_1413[3][4][1];
            uint64_t l_1419 = 18446744073709551611UL;
            uint8_t l_1424 = 0x8CL;
            const int64_t *l_1445 = &g_1446;
            union U1 l_1450 = {0UL};
            const union U1 *l_1453[7][1] = {{&l_1450},{&l_1450},{&l_1450},{&l_1450},{&l_1450},{&l_1450},{&l_1450}};
            const union U1 **l_1452[1][3];
            const union U1 ***l_1451 = &l_1452[0][0];
            uint64_t l_1461 = 18446744073709551608UL;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_1413[i][j][k] = (void*)0;
                }
            }
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_1452[i][j] = &l_1453[4][0];
            }
        }
        if ((*l_1459))
            continue;
        if (l_1518)
        { 
            int16_t *l_1524 = &g_1512;
            int32_t ***l_1534 = &l_1478[0];
            int32_t ****l_1533 = &l_1534;
            uint8_t l_1551 = 0x74L;
            int32_t l_1561 = 0xF0BA622AL;
            int32_t l_1562 = 0L;
            int32_t l_1563 = 0x1869CD47L;
            int32_t l_1567[5];
            uint32_t *l_1576 = &g_326.f0;
            uint16_t l_1582 = 1UL;
            union U3 *l_1587 = (void*)0;
            int i;
            for (i = 0; i < 5; i++)
                l_1567[i] = (-4L);
            (*l_1459) = ((*l_1459) >= (!0UL));
            (*l_1459) = (((safe_div_func_uint16_t_u_u((((((*l_1524) = 0x5A6CL) <= g_930) & (((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((((safe_div_func_int64_t_s_s((safe_add_func_int32_t_s_s(((!(((*l_1533) = &g_283) != l_1535)) ^ (safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((*g_945), (+(safe_mod_func_uint16_t_u_u((2L >= 1UL), g_921))))), g_1380))), g_326.f2)), (*l_1459))) & g_516) | 0xDEL))), (*g_945))) >= g_1415) == 7L)) > g_66), l_1543[1][1][0])) , g_124.f3) == 7L);
            if (((safe_div_func_int8_t_s_s((g_132.f4 && 0xFF8CL), ((**g_944) = (**g_944)))) , (&g_464 == l_1443[2][5])))
            { 
                union U1 ***l_1557 = &l_27;
                union U1 ****l_1556 = &l_1557;
                int32_t l_1559 = 0x88F95294L;
                int32_t l_1581 = 0xE257DDEAL;
                l_1546 |= ((*l_1459) = (-8L));
                for (g_1380 = 0; (g_1380 <= 4); g_1380 += 1)
                { 
                    int i, j;
                    if (l_1517[(g_3 + 1)][g_1380])
                        break;
                    return l_1517[g_3][g_3];
                }
                if ((((void*)0 == g_1547) >= ((**g_1054) , (((((safe_lshift_func_int8_t_s_s(l_1551, (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((**g_944), (((((*g_1349) , ((*l_1556) = &g_482)) != &l_27) && (*g_945)) , (**g_944)))), l_1558[1])))) < l_1559) >= 0L) , (***g_368)) == l_1559))))
                { 
                    int32_t l_1564 = 6L;
                    int32_t l_1566 = 0L;
                    int8_t l_1568[7];
                    int32_t l_1569 = 0x5F4AA91DL;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1568[i] = 0x86L;
                    (*l_1459) ^= g_1560;
                    g_1570++;
                    --l_1573;
                    g_135[4].f2 |= ((g_1577 = l_1576) != (void*)0);
                    return (**g_944);
                }
                else
                { 
                    union U3 *l_1578 = &g_124;
                    int32_t l_1580[3][5] = {{(-1L),(-9L),0xCF446E55L,0x739F83BFL,0xCF446E55L},{0xCF446E55L,0xCF446E55L,0x30E2B90AL,0x739F83BFL,0xFF0A1E17L},{(-9L),(-1L),(-1L),(-9L),0xCF446E55L}};
                    int i, j;
                    (*g_1054) = l_1578;
                    g_135[4].f5 ^= (*l_1459);
                    l_1582++;
                    if (l_1585)
                        continue;
                }
            }
            else
            { 
                int16_t l_1586 = 0x06FAL;
                (*l_1459) = g_790[2];
                if (l_1586)
                    break;
                for (g_274 = 2; (g_274 >= 0); g_274 -= 1)
                { 
                    (*g_1054) = l_1587;
                    return l_1586;
                }
                if (l_1586)
                    break;
            }
            for (g_124.f3 = 0; g_124.f3 < 3; g_124.f3 += 1)
            {
                for (g_579.f2 = 0; g_579.f2 < 6; g_579.f2 += 1)
                {
                    g_998[g_124.f3][g_579.f2] = 1UL;
                }
            }
            if ((*l_1459))
                continue;
        }
        else
        { 
            struct S0 **l_1591[4][6] = {{&g_350,&g_350,&g_350,&g_350,&g_350,&g_350},{&g_350,&g_350,&g_350,&g_350,&g_350,&g_350},{&g_350,&g_350,(void*)0,&g_350,&g_350,(void*)0},{&g_350,&g_350,&g_350,&g_350,&g_350,&g_350}};
            int32_t l_1597 = 0x4A502D93L;
            int32_t l_1598 = 0x75920B96L;
            int32_t l_1599 = 0x2BD5B70CL;
            int32_t l_1600 = 0x80A793E1L;
            int32_t l_1601 = 0x23325381L;
            int32_t l_1603 = 0x1122220FL;
            int32_t l_1605 = 0xDD258F58L;
            int32_t l_1606 = (-5L);
            int32_t l_1607 = 0xE8352193L;
            int32_t l_1608 = 1L;
            int32_t l_1610 = 0x27F35355L;
            int32_t l_1611 = 0xAA1B9101L;
            int32_t l_1612 = 0x63D1AFB7L;
            int i, j;
            (*l_1459) = (((safe_rshift_func_uint16_t_u_s(((*g_945) || (l_1590 == l_1591[2][3])), (*l_1459))) , ((l_1592 != (++(*g_1577))) && ((((***g_368) = (-4L)) > ((+(l_1597 = ((~(((*g_1055) , 6UL) < 0x0F76L)) , 255UL))) < (*g_1577))) != 18446744073709551608UL))) ^ 0x4519FF18BB1B4588LL);
            (*g_283) = (*g_283);
            ++g_1613;
        }
        for (g_124.f0 = 0; (g_124.f0 <= 2); g_124.f0 += 1)
        { 
            int8_t l_1632 = 0xDFL;
            int32_t l_1644[4][3] = {{0x01D1AEB6L,0x01D1AEB6L,0x01D1AEB6L},{(-4L),(-4L),(-4L)},{0x01D1AEB6L,0x01D1AEB6L,0x01D1AEB6L},{(-4L),(-4L),(-4L)}};
            uint8_t l_1679[5];
            uint32_t l_1699 = 18446744073709551615UL;
            const union U2 l_1704 = {0x5F41E338L};
            int16_t **l_1705 = &g_1703;
            union U1 *l_1726 = (void*)0;
            int32_t l_1740 = 0x74D1E198L;
            int16_t l_1753 = 0x531BL;
            int32_t ****l_1757 = (void*)0;
            int32_t **l_1777[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t ***l_1778 = &g_1348[2];
            union U2 ****l_1790 = &g_1736;
            int i, j;
            for (i = 0; i < 5; i++)
                l_1679[i] = 0xABL;
            for (g_928 = 0; (g_928 <= 2); g_928 += 1)
            { 
                uint32_t l_1635[6][3][2] = {{{4294967295UL,0x9C56CF8AL},{0x8B15988DL,0x9C56CF8AL},{4294967295UL,0x9C56CF8AL}},{{0x8B15988DL,0x9C56CF8AL},{4294967295UL,0x9C56CF8AL},{0x8B15988DL,0x9C56CF8AL}},{{4294967295UL,0x9C56CF8AL},{0x8B15988DL,0x9C56CF8AL},{4294967295UL,0x9C56CF8AL}},{{0x8B15988DL,0x9C56CF8AL},{4294967295UL,0x9C56CF8AL},{0x8B15988DL,0x9C56CF8AL}},{{4294967295UL,0x9C56CF8AL},{0x8B15988DL,0x9C56CF8AL},{4294967295UL,0x9C56CF8AL}},{{0x8B15988DL,0x9C56CF8AL},{4294967295UL,0x9C56CF8AL},{0x8B15988DL,0x9C56CF8AL}}};
                int32_t l_1646 = 3L;
                const struct S0 l_1651 = {26,1,-2332,1,42799,10004,25,0x29817A7D88B1B564LL};
                int32_t l_1697 = 0xEA3A9B84L;
                int8_t l_1698 = 1L;
                int32_t l_1701[3][3] = {{0x69A62F07L,0x69A62F07L,0x69A62F07L},{0x02C84DEAL,0x02C84DEAL,0x02C84DEAL},{0x69A62F07L,0x69A62F07L,0x69A62F07L}};
                int i, j, k;
            }
            (*l_1459) &= (((g_1702 != (((*g_578) , l_1704) , l_1705)) == 252UL) == (((void*)0 == l_1706) >= l_1704.f2));
        }
    }
    if (g_1810)
    { 
        int64_t l_1825 = 1L;
        int32_t l_1830 = 0x1F1C5FA2L;
        union U2 l_1831 = {0x180C8449L};
        int16_t l_1833 = 0x9C00L;
        int16_t l_1834 = (-2L);
        uint16_t *l_1836[7][7] = {{&g_998[1][5],&g_998[1][2],(void*)0,(void*)0,&g_998[1][2],&g_998[1][5],(void*)0},{&g_25[2][3][2].f0,(void*)0,&g_1380,(void*)0,&g_998[2][1],&g_998[2][1],(void*)0},{&g_1613,&g_25[2][3][2].f0,&g_1613,&g_1380,(void*)0,&g_25[2][3][2].f0,&g_998[1][5]},{&g_1380,(void*)0,&g_25[2][3][2].f0,&g_1380,&g_25[2][3][2].f0,(void*)0,&g_1380},{(void*)0,&g_998[1][2],&g_998[1][5],(void*)0,&g_998[0][3],&g_25[2][3][2].f0,&g_998[0][3]},{(void*)0,&g_998[0][3],&g_998[0][3],(void*)0,&g_1613,&g_998[2][1],&g_1380},{&g_1380,&g_998[2][1],&g_998[1][5],&g_1613,&g_1613,&g_998[1][5],&g_998[2][1]}};
        uint16_t **l_1835 = &l_1836[5][0];
        int32_t l_1839 = 0L;
        uint32_t ***l_1848 = &l_1847;
        int i, j;
        for (g_618 = (-29); (g_618 != 26); ++g_618)
        { 
            uint64_t l_1819 = 8UL;
            l_1839 ^= ((((safe_sub_func_uint64_t_u_u((safe_add_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(l_1819, ((**g_1702) = (+((((((~((*g_945) = (safe_mul_func_int16_t_s_s((((g_1824 < (((((l_1825 = l_1819) >= ((safe_mul_func_uint8_t_u_u(((*l_1459) || l_1819), l_1830)) ^ (((l_1831 , l_1831.f0) | (*g_1577)) == 0x4A35L))) == (**g_944)) && (*l_1459)) >= 0xA9F160CCL)) <= l_1819) & l_1830), (*g_1703))))) < (*l_1459)) | 0x10780040282D4A03LL) <= 5UL) & g_1832) < l_1833))))) || 0x12L), l_1831.f0)), l_1834)) , l_1835) != l_1837) , 3L);
            if (l_1819)
                continue;
            if (l_1833)
                break;
            l_1830 = 0xC202FA6AL;
        }
        l_1830 = ((safe_mul_func_int32_t_s_s(((((*g_1736) = (void*)0) == (void*)0) <= (*g_945)), (g_135[4].f7 >= ((~g_132.f0) , (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((((*l_1848) = l_1847) != l_1849), 14)), (**g_1702))))))) != 65535UL);
        (*g_283) = (**l_1535);
    }
    else
    { 
        const int32_t * const l_1852[4] = {&g_1854,&g_1854,&g_1854,&g_1854};
        const int32_t * const *l_1851 = &l_1852[3];
        const int32_t * const **l_1850 = &l_1851;
        int i;
        (*l_1459) = (((*l_1850) = ((*g_350) , &g_1046)) == &g_284);
    }
    (*l_1863) |= ((*g_1577) != ((((*l_1459) && (g_1855 <= ((*l_1459) > (safe_sub_func_uint8_t_u_u((*g_945), (*l_1459)))))) >= ((((((l_1861 = (safe_sub_func_uint32_t_u_u(0x6508B8A3L, (-6L)))) > (*l_1459)) > (*l_1459)) <= (*l_1459)) , (*l_1459)) != (*l_1459))) != (*l_1459)));
    return (*g_945);
}



static union U1 * func_4(int8_t * p_5)
{ 
    int32_t l_11 = 0x401DBDAEL;
    uint32_t l_12 = 1UL;
    int32_t *l_13 = &g_14;
    int32_t *l_15 = &l_11;
    int32_t *l_16 = &g_14;
    int32_t *l_17 = (void*)0;
    int32_t *l_18 = &g_14;
    int32_t *l_19 = &g_14;
    int32_t *l_20[5][4][3] = {{{(void*)0,&g_3,&g_3},{&g_3,&g_14,&l_11},{(void*)0,&g_14,(void*)0},{&l_11,&g_3,&l_11}},{{&l_11,&l_11,&g_3},{(void*)0,&g_3,&g_3},{&g_3,&g_14,&l_11},{(void*)0,&g_14,(void*)0}},{{&l_11,&g_3,&l_11},{&l_11,&l_11,&g_3},{(void*)0,&g_3,&g_3},{&g_3,&g_14,&l_11}},{{(void*)0,&g_14,(void*)0},{&l_11,&g_3,&l_11},{&l_11,&l_11,&g_3},{(void*)0,&g_3,&g_3}},{{&g_3,&g_14,&l_11},{(void*)0,&g_14,(void*)0},{&l_11,&g_3,&l_11},{&l_11,&l_11,&g_3}}};
    uint32_t l_21 = 0x42506ED5L;
    union U1 *l_24 = &g_25[2][3][2];
    int i, j, k;
    (*l_13) ^= func_8(l_11, l_12);
    (*l_13) = ((*l_15) ^= func_8((*l_13), g_7));
    l_21++;
    return l_24;
}



static int32_t  func_8(int16_t  p_9, uint32_t  p_10)
{ 
    return g_3;
}



static union U1  func_37(uint8_t  p_38, int64_t  p_39, union U1 ** p_40)
{ 
    uint16_t l_1141 = 8UL;
    union U2 l_1142[1][3][2] = {{{{4294967289UL},{4294967289UL}},{{4294967289UL},{4294967289UL}},{{4294967289UL},{4294967289UL}}}};
    const uint32_t l_1177 = 0UL;
    union U1 l_1181 = {0xF143L};
    int8_t ****l_1193[7];
    int8_t **** const *l_1192 = &l_1193[1];
    int32_t l_1273[6];
    int64_t l_1320 = (-2L);
    int8_t *****l_1389 = &l_1193[3];
    int32_t *l_1392 = &g_14;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_1193[i] = &g_209;
    for (i = 0; i < 6; i++)
        l_1273[i] = 0xECF26B7EL;
    for (g_928 = 0; (g_928 != 28); g_928++)
    { 
        int32_t l_1153 = 0x6E0538A4L;
        uint8_t l_1176[4];
        int16_t *l_1189[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint16_t l_1190 = 0x2E34L;
        int32_t l_1191 = 0x50D52CB3L;
        struct S0 ** const *l_1213 = &g_349;
        int64_t l_1254 = 0xA95096B8598BD80BLL;
        int16_t l_1255 = 0x8557L;
        int32_t l_1258 = 0x3C11F262L;
        uint32_t *l_1260 = &g_579.f0;
        uint32_t **l_1259 = &l_1260;
        uint16_t *l_1266[5] = {&g_791,&g_791,&g_791,&g_791,&g_791};
        int32_t l_1272[2];
        uint32_t l_1280 = 0x40BA2DEAL;
        union U1 ***l_1337[2][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0}};
        union U1 ****l_1336 = &l_1337[0][0];
        int64_t l_1378 = 0L;
        int i, j;
        for (i = 0; i < 4; i++)
            l_1176[i] = 255UL;
        for (i = 0; i < 2; i++)
            l_1272[i] = 0xAB7D2F67L;
    }
    l_1181.f2 = (safe_lshift_func_int16_t_s_u((((l_1389 = &l_1193[5]) != &l_1193[6]) < ((**g_944) = (p_38--))), 10));
    (*g_283) = (l_1392 = &l_1273[0]);
    for (g_124.f1 = 0; (g_124.f1 == (-13)); g_124.f1 = safe_sub_func_int32_t_s_s(g_124.f1, 1))
    { 
        (*g_283) = (*g_283);
        if ((*l_1392))
            break;
    }
    return (**p_40);
}



static struct S0  func_43(union U1 ** p_44, const int32_t * p_45)
{ 
    int32_t l_730 = 0x0BF29E36L;
    int32_t **l_731 = (void*)0;
    uint32_t l_766 = 0x865F38C6L;
    int32_t l_776[4];
    int64_t l_785[2][3] = {{0xDDE6419A60A01B95LL,0xDDE6419A60A01B95LL,0xDDE6419A60A01B95LL},{(-10L),(-10L),(-10L)}};
    union U2 l_813 = {0UL};
    uint32_t l_818 = 0x2079B2A7L;
    uint32_t *l_823[2];
    uint64_t l_845 = 0xB4A0C91585D69BACLL;
    int16_t * const l_880 = &g_124.f2;
    union U2 * const *l_906 = &g_578;
    uint8_t *l_948[7] = {&g_170,&g_170,&g_170,&g_170,&g_170,&g_170,&g_170};
    uint32_t l_961 = 0xA2A21343L;
    union U3 *l_965 = (void*)0;
    struct S0 l_966 = {296,3,52,2,18402,14210,-25,18446744073709551615UL};
    struct S0 ***l_983 = &g_349;
    struct S0 **** const l_982 = &l_983;
    struct S0 **** const *l_981 = &l_982;
    union U1 *l_1020 = &g_25[4][0][0];
    int64_t l_1021 = (-1L);
    int32_t l_1044 = 0x5FF1AF65L;
    const int32_t *l_1075 = &g_326.f2;
    int i, j;
    for (i = 0; i < 4; i++)
        l_776[i] = (-3L);
    for (i = 0; i < 2; i++)
        l_823[i] = &g_326.f0;
lbl_1127:
    if ((safe_div_func_uint64_t_u_u(l_730, l_730)))
    { 
        int32_t ***l_732 = &l_731;
        int8_t l_746[6][2];
        int32_t l_761 = (-6L);
        int32_t l_769 = (-1L);
        int32_t l_779 = (-1L);
        int32_t l_780 = 0xFC18A0FEL;
        int32_t l_788[2][2][6] = {{{0xFD4078CBL,0xFD4078CBL,(-4L),0x04CB96F8L,(-1L),0L},{1L,(-4L),0xE8BD5497L,0L,0xE8BD5497L,(-4L)}},{{0x04CB96F8L,1L,0xE8BD5497L,6L,0xFD4078CBL,0L},{0x867DA033L,6L,(-4L),(-4L),6L,0x867DA033L}}};
        union U3 *l_853[2][3][7] = {{{&g_124,&g_124,&g_124,&g_124,&g_124,&g_124,&g_124},{&g_124,&g_124,&g_124,&g_124,&g_124,&g_124,&g_124},{&g_124,&g_124,&g_124,(void*)0,&g_124,(void*)0,&g_124}},{{&g_124,&g_124,&g_124,&g_124,&g_124,&g_124,&g_124},{&g_124,(void*)0,&g_124,&g_124,&g_124,(void*)0,&g_124},{&g_124,&g_124,&g_124,&g_124,&g_124,&g_124,&g_124}}};
        int i, j, k;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 2; j++)
                l_746[i][j] = 0x75L;
        }
        (*l_732) = l_731;
        for (g_617 = (-17); (g_617 >= (-13)); g_617 = safe_add_func_uint32_t_u_u(g_617, 9))
        { 
            const int32_t l_763 = (-1L);
            int32_t l_777 = 0L;
            int32_t l_778 = 0x5DBA54F4L;
            int32_t l_786[5];
            int64_t l_787 = (-9L);
            int8_t **** const l_796 = &g_209;
            union U2 l_817 = {4294967294UL};
            int32_t *l_828 = &g_274;
            uint8_t *l_831 = &g_92;
            uint8_t **l_830[2];
            uint8_t ***l_829 = &l_830[0];
            uint8_t ****l_832 = &l_829;
            int32_t *l_833 = &l_769;
            int32_t *l_834 = &l_776[2];
            int32_t *l_835 = &l_776[2];
            int32_t *l_836 = &g_274;
            int32_t *l_837 = (void*)0;
            int32_t *l_838 = &g_202.f2;
            int32_t *l_839 = &l_777;
            int32_t *l_840 = &l_776[3];
            int32_t *l_841 = &l_778;
            int32_t *l_842 = (void*)0;
            int32_t *l_843 = &g_124.f3;
            int32_t *l_844[7][1][4] = {{{(void*)0,(void*)0,&l_779,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_779,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_779,(void*)0}}};
            int64_t *l_850 = &l_787;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_786[i] = 0x9F7244C1L;
            for (i = 0; i < 2; i++)
                l_830[i] = &l_831;
            if ((safe_sub_func_uint32_t_u_u(g_135[4].f5, 9L)))
            { 
                uint64_t *l_755 = &g_464;
                struct S0 l_760 = {152,1,-2548,2,8081,-3134,6,0UL};
                uint16_t *l_762 = &g_25[2][3][2].f0;
                uint8_t *l_764 = &g_113[2];
                int16_t *l_765 = &g_66;
                int8_t *l_767 = (void*)0;
                int8_t *l_768 = &g_124.f1;
                int32_t l_789 = 0xCBBC401CL;
                l_769 = ((safe_add_func_int64_t_s_s((safe_mod_func_uint16_t_u_u((g_135[4].f1 & (safe_rshift_func_int16_t_s_s((((*l_768) = (((!(safe_rshift_func_int16_t_s_u(l_746[3][0], 10))) , ((safe_rshift_func_uint16_t_u_u(((((*l_765) = (safe_div_func_int64_t_s_s(0xEB7A26DC46069806LL, ((safe_sub_func_int64_t_s_s((((((0xF607L <= (((*l_762) = (((*l_755) &= ((safe_rshift_func_int16_t_s_s(g_135[4].f3, 7)) && 0xF1L)) == (((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((l_760 , l_761), 0x16L)), g_132.f7)) , l_760.f0) ^ (*p_45)))) < l_763)) == l_760.f1) , l_764) != l_764) > l_763), 1UL)) ^ 0UL)))) || 0x4495L) && l_766), l_763)) != g_516)) != g_135[4].f1)) , g_132.f6), g_618))), g_202.f2)), 0x09BFBB7E6D164E6BLL)) != g_135[4].f2);
                for (g_202.f0 = 25; (g_202.f0 != 13); g_202.f0--)
                { 
                    int32_t *l_772 = &g_579.f2;
                    int32_t *l_773 = &g_326.f2;
                    int32_t *l_774 = (void*)0;
                    int32_t *l_775[3];
                    int32_t l_784 = 0xC946F9C4L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_775[i] = &g_124.f0;
                    if (l_760.f3)
                        break;
                    g_781--;
                    (*l_772) = (-1L);
                    --g_791;
                }
            }
            else
            { 
                uint32_t l_800 = 0xA1B8F5B7L;
                int32_t *l_824 = (void*)0;
                int32_t *l_825 = &l_777;
                for (g_464 = 0; (g_464 != 11); ++g_464)
                { 
                    uint64_t *l_799 = &g_25[2][3][2].f1;
                    uint32_t *l_807 = (void*)0;
                    uint32_t *l_808 = &g_326.f0;
                    uint32_t *l_814 = &g_579.f0;
                    int32_t l_815 = 1L;
                    int8_t *l_816[6][4] = {{&g_168,&g_271,&g_168,&g_271},{&g_168,&g_271,&g_168,&g_271},{&g_168,&g_271,&g_168,&g_271},{&g_168,&g_271,&g_168,&g_271},{&g_168,&g_271,&g_168,&g_271},{&g_168,&g_271,&g_168,&g_271}};
                    uint16_t l_819 = 0xA097L;
                    int32_t *l_820 = &l_788[1][1][2];
                    int64_t *l_821[2];
                    int32_t *l_822 = &l_777;
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_821[i] = &g_790[2];
                    l_776[2] &= (((void*)0 == l_796) && l_778);
                    (*l_820) ^= (g_132.f5 || (safe_sub_func_uint64_t_u_u((++l_800), (safe_mod_func_uint64_t_u_u(((safe_sub_func_int32_t_s_s((((*l_808) = 0x49D8A164L) >= (safe_mul_func_int8_t_s_s((0x6E977343D08BAAE0LL || ((((l_786[2] , (safe_sub_func_int8_t_s_s((((l_778 = (l_813 , (((*l_814) = 0UL) | (((**g_349) , l_787) > l_815)))) , l_817) , (-1L)), g_132.f5))) , (*p_45)) <= l_818) <= 0UL)), l_819))), (-10L))) | (*p_45)), l_787)))));
                    l_776[3] = (l_786[0] = ((*l_822) &= (((**p_44) , (l_815 = (g_464 | (((*l_820) = 0x80211958L) <= g_92)))) != (-1L))));
                }
                (*l_825) = ((void*)0 != l_823[1]);
                for (l_769 = (-5); (l_769 >= (-8)); l_769 = safe_sub_func_uint8_t_u_u(l_769, 3))
                { 
                    if (l_817.f2)
                        break;
                    (*g_349) = (**g_583);
                }
            }
            (*l_828) |= 0L;
            (*l_832) = l_829;
            ++l_845;
            (*l_841) ^= (l_779 < ((l_776[1] , ((*l_850) = (&l_817 != (void*)0))) >= (safe_sub_func_uint16_t_u_u(((void*)0 == l_853[1][2][6]), (safe_add_func_uint32_t_u_u(((*l_833) , (*l_836)), 0x16156A77L))))));
        }
    }
    else
    { 
        int8_t ***l_866[3];
        union U2 **l_885 = &g_578;
        int32_t l_886 = 0x00D32B21L;
        union U1 * const *l_892[6] = {(void*)0,&g_483,&g_483,(void*)0,&g_483,&g_483};
        union U1 * const **l_891 = &l_892[4];
        union U1 * const ***l_890 = &l_891;
        int32_t l_916 = 0L;
        int32_t l_917 = 2L;
        int32_t l_918 = 0xAE639CBCL;
        int32_t l_920[3][6] = {{0xC5FBEF45L,0x1EE2701EL,0x1EE2701EL,0xC5FBEF45L,0x1EE2701EL,0x1EE2701EL},{0xC5FBEF45L,0x1EE2701EL,0x1EE2701EL,0xC5FBEF45L,0x1EE2701EL,0x1EE2701EL},{0xC5FBEF45L,0x1EE2701EL,0x1EE2701EL,0xC5FBEF45L,0x1EE2701EL,0x1EE2701EL}};
        uint16_t l_937 = 1UL;
        const int32_t *l_985[3][7] = {{&l_916,(void*)0,&l_916,(void*)0,&l_916,(void*)0,&l_916},{&l_918,&l_918,&l_776[2],&l_776[2],&l_918,&l_918,&l_776[2]},{&l_920[2][1],(void*)0,&l_920[2][1],(void*)0,&l_920[2][1],(void*)0,&l_920[2][1]}};
        uint32_t l_1043 = 1UL;
        int32_t *l_1070 = &l_813.f2;
        int32_t *l_1071[5] = {&g_927,&g_927,&g_927,&g_927,&g_927};
        uint8_t l_1072 = 246UL;
        int i, j;
        for (i = 0; i < 3; i++)
            l_866[i] = &g_210;
lbl_1069:
        for (g_202.f2 = 4; (g_202.f2 >= 1); g_202.f2 -= 1)
        { 
            int16_t l_858 = 0xA947L;
            uint64_t *l_859 = (void*)0;
            uint64_t *l_860 = &l_845;
            int32_t *l_871 = &g_326.f2;
            struct S0 *l_872[7] = {&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132};
            int32_t l_915[1];
            uint8_t ***l_962 = &g_944;
            uint32_t l_963 = 4294967292UL;
            int8_t **** const l_1003[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            union U2 **l_1017[3][6] = {{&g_578,(void*)0,(void*)0,&g_578,&g_578,(void*)0},{&g_578,&g_578,(void*)0,(void*)0,&g_578,&g_578},{&g_578,(void*)0,(void*)0,&g_578,&g_578,(void*)0}};
            union U1 **l_1041 = &l_1020;
            uint32_t l_1058 = 0x90A366FBL;
            uint8_t l_1063 = 0x67L;
            uint32_t l_1066 = 0x09CA5B3FL;
            int i, j;
            for (i = 0; i < 1; i++)
                l_915[i] = 0L;
            if (((safe_sub_func_uint64_t_u_u(l_858, ((*l_860) ^= (&l_730 != &g_522[2][0])))) >= (*p_45)))
            { 
                int16_t l_861 = 6L;
                int32_t l_873[4];
                int32_t *l_874 = &g_617;
                union U1 ** const * const *l_889 = (void*)0;
                int i;
                for (i = 0; i < 4; i++)
                    l_873[i] = (-2L);
                if (l_861)
                    break;
                (*l_874) &= (safe_lshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((void*)0 == l_866[0]), (safe_mul_func_int8_t_s_s((l_873[3] = ((((**g_482) = (**g_482)) , l_858) >= (safe_add_func_int32_t_s_s((((*g_283) = l_871) != (void*)0), ((void*)0 == l_872[3]))))), (*l_871))))), 6));
                (**g_283) = ((((safe_rshift_func_int16_t_s_u((!((safe_rshift_func_uint16_t_u_s(((void*)0 == l_880), (((g_124 , (0L && (((((((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(1UL, 5)), (l_885 == &g_578))) > (*l_874)) >= l_845) , (*l_871)) | l_886) <= g_132.f5) , 0x00DAL))) & (*l_874)) < g_781))) != 0x81C7L)), 12)) & (*l_874)) ^ (*l_871)) && 0xF1AEL);
                for (g_124.f3 = 0; (g_124.f3 <= 5); g_124.f3 += 1)
                { 
                    (*l_871) ^= (-1L);
                    (*g_284) = (((*l_874) = (safe_mul_func_uint16_t_u_u((((*g_483) , l_889) == l_890), ((l_813.f0 <= ((*g_284) < ((safe_sub_func_uint64_t_u_u(((*l_860) &= (248UL ^ (safe_mod_func_uint8_t_u_u(0x70L, (*l_871))))), (-4L))) | (*g_284)))) >= 1L)))) != g_326.f2);
                }
            }
            else
            { 
                union U3 l_897 = {-6L};
                union U3 *l_898 = &g_124;
                union U2 **l_905 = &g_578;
                int32_t l_914[2][7][1] = {{{0xFFE7085AL},{0x213C16F5L},{0x628947C1L},{0x213C16F5L},{0xFFE7085AL},{0xFFE7085AL},{0x213C16F5L}},{{0x628947C1L},{0x213C16F5L},{0xFFE7085AL},{0xFFE7085AL},{0x213C16F5L},{0x628947C1L},{0x213C16F5L}}};
                int i, j, k;
                (*l_871) = ((*l_871) && (((*l_898) = l_897) , (~(-4L))));
                if (((safe_mul_func_uint16_t_u_u(6UL, (-1L))) ^ ((safe_lshift_func_uint16_t_u_u(l_897.f2, 1)) != (safe_unary_minus_func_int8_t_s((l_905 != l_906))))))
                { 
                    int32_t *l_907 = (void*)0;
                    int32_t *l_908 = &l_897.f0;
                    int32_t *l_909 = (void*)0;
                    int32_t *l_910 = &l_813.f2;
                    int32_t *l_911 = &g_617;
                    int32_t *l_912 = &g_326.f2;
                    int32_t *l_913[1][3][7] = {{{&g_579.f2,&g_274,&g_274,&g_579.f2,(void*)0,&g_124.f0,&g_579.f2},{&g_124.f0,&g_579.f2,(void*)0,(void*)0,&g_579.f2,&g_124.f0,&g_274},{&g_579.f2,&g_579.f2,(void*)0,&g_124.f0,&g_124.f0,(void*)0,&g_579.f2}}};
                    int64_t l_919[5][4] = {{(-7L),0xEFCE13089413D72ELL,(-7L),0xEFCE13089413D72ELL},{(-7L),0xEFCE13089413D72ELL,(-7L),0xEFCE13089413D72ELL},{(-7L),0xEFCE13089413D72ELL,(-7L),0xEFCE13089413D72ELL},{(-7L),0xEFCE13089413D72ELL,(-7L),0xEFCE13089413D72ELL},{(-7L),0xEFCE13089413D72ELL,(-7L),0xEFCE13089413D72ELL}};
                    struct S0 l_924 = {310,3,2721,0,15533,8641,43,1UL};
                    int i, j, k;
                    g_921++;
                    return l_924;
                }
                else
                { 
                    int32_t *l_925 = &l_813.f2;
                    int32_t *l_926[6][1] = {{&g_3},{(void*)0},{&g_3},{(void*)0},{&g_3},{(void*)0}};
                    int64_t l_929 = 0x8A5100FFB836205ELL;
                    int i, j;
                    if ((*p_45))
                        break;
                    ++g_930;
                    (*l_871) = (((safe_rshift_func_int16_t_s_s((-8L), 12)) , 0UL) > ((safe_add_func_int16_t_s_s((l_886 = 0xFB77L), (((0x5B0412BDL >= 0x352D6F82L) , (g_135[4].f2 || (247UL ^ 255UL))) , (*l_925)))) == 18446744073709551614UL));
                    l_937--;
                }
                return (**g_349);
            }
            if ((((l_918 < (safe_mul_func_uint8_t_u_u(0x1EL, g_927))) && ((((*l_871) = (safe_mul_func_int16_t_s_s(((void*)0 != g_944), (safe_add_func_int16_t_s_s((l_937 != ((g_124 , l_948[6]) == (void*)0)), 0x199DL))))) , 8UL) != 6UL)) || g_135[4].f0))
            { 
                (*g_283) = (void*)0;
            }
            else
            { 
                struct S0 l_949 = {38,3,1135,5,26618,-1806,-8,0x07E7E9BE37650777LL};
                union U3 l_964 = {0x197E8D6AL};
                int32_t *l_967 = (void*)0;
                for (l_937 = 0; (l_937 <= 5); l_937 += 1)
                { 
                    return l_949;
                }
                for (g_791 = 0; (g_791 <= 5); g_791 += 1)
                { 
                    (**g_283) = (safe_add_func_uint64_t_u_u((~(*l_871)), (((g_25[2][3][2].f0 = (*l_871)) , (safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(l_949.f7, ((*l_880) |= (((g_132.f0 == (&g_944 == (((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(0x91L, l_949.f6)), g_92)) , l_961) , l_962))) == l_949.f3) | l_963)))), g_202.f0))) & (*g_945))));
                    if ((*p_45))
                        break;
                    (**g_283) ^= 0x2E84B545L;
                    l_965 = (l_964 , l_965);
                    return l_966;
                }
                if ((*p_45))
                { 
                    int32_t **l_968 = &g_284;
                    if ((*l_871))
                        break;
                    (*g_283) = l_967;
                    (*l_871) = ((&g_579 != ((*l_885) = (void*)0)) <= ((void*)0 != l_968));
                }
                else
                { 
                    int32_t * const l_969 = &l_915[0];
                    int32_t **l_970 = &l_967;
                    union U3 *l_973 = (void*)0;
                    uint32_t **l_974 = &l_823[0];
                    (*l_970) = l_969;
                    (*l_970) = (*g_283);
                    if (l_818)
                        break;
                    (*l_969) = (safe_lshift_func_uint8_t_u_u(8UL, (((*l_974) = ((g_124 = ((*g_483) , l_964)) , &g_111[0])) != (void*)0)));
                }
            }
            if (l_916)
                break;
            (*l_871) &= 0L;
            (*g_283) = (*g_283);
            if (l_813.f0)
                goto lbl_1069;
            for (g_168 = 1; (g_168 <= 5); g_168 += 1)
            { 
                union U3 *l_987 = (void*)0;
                int32_t l_997 = 0x996FB79BL;
                int32_t **l_1004 = &l_871;
                uint8_t **l_1005 = &l_948[4];
                union U2 * const **l_1014 = &l_906;
                union U2 **l_1016 = (void*)0;
                union U2 ***l_1015[6] = {&l_1016,&l_1016,&l_885,&l_1016,&l_1016,&l_885};
                int32_t *l_1022 = &g_927;
                uint32_t l_1042[4];
                int32_t l_1061 = 0xDDCF500DL;
                int8_t l_1062[6][1][4];
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_1042[i] = 1UL;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 4; k++)
                            l_1062[i][j][k] = 0x1CL;
                    }
                }
            }
        }
        --l_1072;
        return (**g_349);
    }
    l_1075 = p_45;
    for (g_109 = (-30); (g_109 != 48); g_109 = safe_add_func_int8_t_s_s(g_109, 3))
    { 
        uint16_t l_1078 = 0xBCD9L;
        int32_t l_1100 = 1L;
        int32_t l_1101 = 0xFFDD3558L;
        uint32_t *l_1102 = &l_766;
        int32_t l_1103 = (-5L);
        int32_t l_1111 = 8L;
        int32_t l_1112 = (-1L);
        int32_t l_1113 = 1L;
        int32_t l_1114 = (-1L);
        union U2 l_1124 = {1UL};
        int8_t *l_1125 = (void*)0;
        int8_t *l_1126 = &g_271;
        if (l_1078)
            break;
        if ((3L & (safe_rshift_func_int8_t_s_s((((l_1078 ^ ((((-1L) | ((***l_983) , (safe_mul_func_uint16_t_u_u(0x0785L, ((safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((*l_880) = (((safe_rshift_func_uint16_t_u_u((!(safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s((l_1103 = (((*l_1102) = ((l_1101 = (safe_mul_func_int8_t_s_s(((l_1100 = ((*l_1075) && (((safe_mod_func_int16_t_s_s(0L, g_274)) < 0x3CC5L) <= l_1078))) , (-7L)), 0x11L))) , (*l_1075))) , 5L)), 255UL)), (*g_945)))), l_1078)) | 18446744073709551615UL) <= (*p_45))), (*l_1075))), g_3)) && g_434))))) , l_1078) != (*l_1075))) || (-1L)) && l_1100), 0))))
        { 
            int32_t *l_1104 = &g_202.f2;
            int32_t *l_1105 = &l_813.f2;
            int32_t *l_1106 = &l_776[0];
            int32_t l_1107 = 0x0EDDDFAAL;
            int32_t *l_1108 = &l_1101;
            int32_t *l_1109 = &l_813.f2;
            int32_t *l_1110[5] = {&l_1107,&l_1107,&l_1107,&l_1107,&l_1107};
            int i;
            g_1115--;
            (*l_1108) = (safe_unary_minus_func_int16_t_s((safe_unary_minus_func_uint16_t_u(((((((void*)0 == &g_326) , (((l_1125 = func_48((safe_mod_func_uint32_t_u_u((1UL < ((safe_add_func_int16_t_s_s((*l_1075), g_434)) , (l_1112 > ((-1L) == (*l_1104))))), 4294967295UL)), l_1111, (*l_1075), l_1124, (*l_1108))) != l_1126) >= 0xBB305AC83F7F32DELL)) != (*l_1075)) || (*p_45)) > 0UL)))));
            if (g_132.f3)
                goto lbl_1127;
            for (l_845 = 0; (l_845 <= 5); l_845 += 1)
            { 
                return (*****l_981);
            }
        }
        else
        { 
            struct S0 l_1128 = {281,0,1719,7,41275,6170,-31,0xB4305B53105BE05CLL};
            if (l_1124.f2)
                break;
            return l_1128;
        }
    }
    return (***l_983);
}



static union U1 ** func_46(int8_t * p_47)
{ 
    union U2 *l_325[7];
    int32_t l_328 = (-4L);
    int32_t l_333 = 9L;
    uint64_t l_334 = 0x94E12587180B2D4CLL;
    struct S0 *l_348 = &g_135[4];
    struct S0 **l_347[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int8_t l_359 = 0x32L;
    int8_t ** const *l_366 = &g_210;
    const uint8_t *l_378[2];
    union U1 **l_396 = (void*)0;
    union U1 ***l_395 = &l_396;
    union U1 ****l_394 = &l_395;
    union U1 *****l_393 = &l_394;
    uint32_t l_400[7][3] = {{18446744073709551615UL,1UL,18446744073709551615UL},{0x7BF03224L,0x7BF03224L,0UL},{0xB749B4CDL,1UL,0xB749B4CDL},{0x7BF03224L,0UL,0UL},{18446744073709551615UL,1UL,18446744073709551615UL},{0x7BF03224L,0x7BF03224L,0UL},{0xB749B4CDL,1UL,0xB749B4CDL}};
    int32_t l_430 = 0L;
    int32_t l_432[2][7][6] = {{{2L,2L,1L,1L,0x5F4072B9L,0x0A5CC0DAL},{1L,0x41999C20L,(-4L),1L,0x6BEBC717L,1L},{(-4L),1L,(-4L),(-5L),2L,0x0A5CC0DAL},{0L,(-5L),1L,2L,(-8L),(-8L)},{2L,(-8L),(-8L),2L,1L,(-5L)},{0L,0x0A5CC0DAL,2L,(-5L),(-4L),1L},{(-4L),1L,0x6BEBC717L,1L,(-4L),0x41999C20L}},{{1L,0x0A5CC0DAL,0x5F4072B9L,1L,1L,2L},{2L,(-8L),0x0A5CC0DAL,0x0A5CC0DAL,(-8L),2L},{(-5L),0x41999C20L,0x6BEBC717L,0x0A5CC0DAL,1L,0x5F4072B9L},{2L,1L,0L,1L,0L,1L},{2L,0x5F4072B9L,1L,0x0A5CC0DAL,0x6BEBC717L,0x41999C20L},{(-5L),1L,2L,(-8L),(-8L),2L},{1L,1L,1L,(-5L),0x6BEBC717L,(-8L)}}};
    int32_t l_445 = 1L;
    int16_t l_468[4][1] = {{9L},{6L},{9L},{6L}};
    int64_t l_531 = (-1L);
    int16_t l_570 = 0x7B95L;
    struct S0 ** const **l_586 = &g_583;
    struct S0 **l_589 = &l_348;
    const union U3 l_592 = {0xE0E552E7L};
    int32_t l_602 = 6L;
    int32_t l_625 = 0x02B20301L;
    int64_t *l_626 = &g_128;
    uint32_t *l_627 = &g_111[0];
    int32_t *l_628[7] = {&g_617,&g_326.f2,&g_617,&g_617,&g_326.f2,&g_617,&g_617};
    uint8_t l_629[3][2] = {{0xBCL,0xBCL},{0x73L,0xBCL},{0xBCL,0x73L}};
    uint8_t l_637[7][2];
    uint8_t l_685 = 250UL;
    uint16_t *l_710[1];
    int16_t *l_723 = &l_468[0][0];
    int32_t l_724 = 0x72C2B844L;
    int32_t *l_725 = &l_625;
    int64_t l_726 = 5L;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_325[i] = &g_326;
    for (i = 0; i < 2; i++)
        l_378[i] = &g_113[2];
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
            l_637[i][j] = 0UL;
    }
    for (i = 0; i < 1; i++)
        l_710[i] = &g_25[2][3][2].f0;
    if ((safe_add_func_int16_t_s_s(((l_325[4] = (void*)0) == &g_326), ((~l_328) , ((!(+(((void*)0 == (*g_283)) , (safe_add_func_uint8_t_u_u(((l_328 , ((l_333 || 0x825A927A8FD81BA8LL) , g_124.f0)) & l_333), l_333))))) <= l_334)))))
    { 
        int32_t *l_335 = (void*)0;
        int8_t * const *l_384 = &g_370[1];
        int32_t l_392 = 0x2B541B65L;
        int32_t l_431[3];
        union U1 l_446 = {0x68C0L};
        uint64_t l_463 = 0x932CA32DB5727804LL;
        struct S0 *l_502[1];
        union U3 l_509 = {0xEEC6C433L};
        int16_t *l_513 = &l_468[3][0];
        int16_t **l_512 = &l_513;
        const int16_t *l_515 = &g_516;
        const int16_t **l_514 = &l_515;
        uint8_t *l_521 = &g_92;
        int32_t *l_523 = &l_392;
        int32_t *l_524[2][5][7] = {{{&l_430,&l_432[1][1][4],&l_431[2],&l_328,(void*)0,&l_431[2],(void*)0},{(void*)0,(void*)0,&l_431[0],&l_430,&l_430,(void*)0,&l_430},{&g_124.f0,&l_432[1][1][4],&g_326.f2,&g_124.f3,(void*)0,&g_3,&g_3},{(void*)0,(void*)0,&l_431[2],(void*)0,(void*)0,&l_432[0][2][4],(void*)0},{(void*)0,&g_3,&g_124.f3,(void*)0,&l_430,(void*)0,(void*)0}},{{&g_326.f2,(void*)0,(void*)0,&l_430,(void*)0,&g_124.f3,&g_3},{(void*)0,(void*)0,&l_432[0][2][4],(void*)0,(void*)0,&l_431[2],(void*)0},{(void*)0,&g_3,&g_3,(void*)0,&g_124.f3,&g_326.f2,&l_432[1][1][4]},{&g_124.f0,&l_430,(void*)0,&l_430,&l_430,&l_431[0],(void*)0},{(void*)0,(void*)0,&l_431[2],(void*)0,&l_328,&l_431[2],&l_432[1][1][4]}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_431[i] = 0xC55CD05DL;
        for (i = 0; i < 1; i++)
            l_502[i] = &g_132;
        (*g_283) = l_335;
lbl_503:
        for (g_92 = 0; (g_92 > 39); g_92++)
        { 
            int64_t l_342 = 3L;
            struct S0 ***l_351 = &g_349;
            int32_t l_358[4][1][5] = {{{1L,0x12521B31L,1L,0x12521B31L,1L}},{{(-10L),(-1L),(-1L),(-10L),(-10L)}},{{0xFB6B1B6BL,0x12521B31L,0xFB6B1B6BL,0x12521B31L,0xFB6B1B6BL}},{{(-10L),(-10L),(-1L),(-1L),(-10L)}}};
            int32_t *l_360[6][3] = {{(void*)0,&g_326.f2,&g_124.f0},{&g_326.f2,(void*)0,(void*)0},{&g_124.f0,(void*)0,&g_202.f2},{&g_202.f2,&g_326.f2,&g_326.f2},{&g_124.f0,&g_124.f0,&g_326.f2},{&g_326.f2,&g_202.f2,&g_202.f2}};
            union U1 **l_361 = (void*)0;
            uint8_t *l_362 = &g_113[3];
            int8_t ***l_371 = &g_210;
            uint32_t l_379 = 0xA618BF56L;
            uint16_t l_471 = 65533UL;
            int i, j, k;
            if ((safe_mul_func_uint8_t_u_u(((*l_362) = (safe_lshift_func_int8_t_s_s((l_342 && (((g_135[4].f5 |= (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u((l_347[3] != ((*l_351) = g_349)), (((safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((l_358[1][0][4] = (l_333 , (((l_328 <= (g_326.f2 || l_333)) == l_342) || l_342))), l_333)), 1L)) < 0L) == 0L))), l_359))) , l_361) == l_361)), 0))), 0xF0L)))
            { 
                int8_t ** const **l_367[2][5] = {{&l_366,&l_366,&l_366,&l_366,&l_366},{&l_366,&l_366,&l_366,&l_366,&l_366}};
                int8_t ****l_372 = &l_371;
                int8_t ****l_373 = &g_209;
                int32_t l_374 = 0xA556B9F2L;
                int8_t * const **l_385 = &l_384;
                int32_t l_397 = 0xA11183E0L;
                union U2 l_405[5][7] = {{{0UL},{0xDF0ABBEBL},{0xDF0ABBEBL},{0UL},{0xDF0ABBEBL},{0xDF0ABBEBL},{0UL}},{{0x4A36ACEAL},{0xFA89BE3DL},{0x4A36ACEAL},{0x4A36ACEAL},{0xFA89BE3DL},{0x4A36ACEAL},{0x4A36ACEAL}},{{0UL},{0UL},{0xDF1C7AB2L},{0UL},{0UL},{0xDF1C7AB2L},{0UL}},{{0xFA89BE3DL},{0x4A36ACEAL},{0x4A36ACEAL},{0xFA89BE3DL},{0x4A36ACEAL},{0x80C4930CL},{0x4A36ACEAL}},{{0xDF1C7AB2L},{0xDF0ABBEBL},{0xDF1C7AB2L},{0xDF1C7AB2L},{0xDF0ABBEBL},{0xDF1C7AB2L},{0xDF1C7AB2L}}};
                union U1 l_406 = {3UL};
                uint32_t l_411 = 1UL;
                uint64_t *l_414 = &g_25[2][3][2].f1;
                uint64_t *l_415 = (void*)0;
                uint64_t *l_416 = &l_334;
                int32_t l_422 = 0xC3A7DBBFL;
                int i, j;
                l_374 = ((g_135[4].f0 == (((l_328 = l_328) | (safe_sub_func_uint32_t_u_u((((+((((**g_349) , ((((g_368 = l_366) != ((*l_373) = ((*l_372) = l_371))) && l_374) != (((safe_unary_minus_func_uint16_t_u(((safe_mul_func_int8_t_s_s(((void*)0 == l_378[1]), (-1L))) < 1L))) && l_333) < l_374))) == l_359) , l_359)) | l_374) == g_25[2][3][2].f0), l_374))) >= l_379)) == l_333);
                if ((g_132.f1 ^ ((safe_sub_func_uint16_t_u_u((g_135[4].f2 || (((g_170 > (safe_rshift_func_uint8_t_u_s(1UL, 6))) <= (((*l_385) = l_384) == (void*)0)) == 0x4BL)), g_66)) == g_124.f0)))
                { 
                    l_397 &= (safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(((-1L) <= 0x28AEL), ((l_333 , (safe_lshift_func_int8_t_s_u((((l_392 = l_392) & l_374) != (0x94L | (((((l_328 , l_328) && g_132.f3) , (void*)0) != l_393) || 18446744073709551614UL))), 2))) < g_202.f2))), 0));
                }
                else
                { 
                    int64_t l_398 = 8L;
                    int32_t l_399 = 0x0AAF9E48L;
                    ++l_400[1][2];
                    l_399 = (((safe_mod_func_int32_t_s_s((l_405[4][6] , (l_406 , l_400[3][1])), l_398)) | (l_360[0][1] != (void*)0)) < (safe_sub_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_u(((g_135[4].f0 != l_411) > l_397), 0)) <= g_132.f3) , g_326.f2), l_406.f0)));
                }
                if ((safe_mod_func_int16_t_s_s((g_202.f2 != ((((***l_385) &= (l_406.f0 >= ((((*l_416)++) && (((l_374 & ((((((g_25[2][3][2].f0 = l_411) ^ (l_397 > l_405[4][6].f0)) <= ((((!5L) , 1L) & l_411) , g_132.f0)) , l_374) <= l_405[4][6].f0) ^ l_392)) | l_422) >= 6L)) , l_405[4][6].f0))) && (-5L)) <= l_333)), l_333)))
                { 
                    int32_t *l_427 = &l_333;
                    int32_t l_428 = 0xB7C93A24L;
                    int32_t l_433 = 1L;
                    int64_t *l_460 = (void*)0;
                    int64_t *l_461 = (void*)0;
                    int64_t *l_462 = &l_342;
                    l_328 = (safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(l_374, g_135[4].f1)) & (((*l_427) = l_333) , l_428)), ((+l_400[5][2]) || l_374)));
                    g_434++;
                    l_405[4][6].f2 |= (l_422 = (safe_lshift_func_uint8_t_u_s((((-3L) & (safe_rshift_func_int8_t_s_s(((((safe_div_func_int64_t_s_s((g_135[4].f2 & (safe_div_func_int32_t_s_s(l_445, 4294967295UL))), (0x4E1DD453DA7C996ELL || ((((l_446 , (void*)0) != g_136) | g_135[4].f2) > l_446.f0)))) != g_202.f2) < g_135[4].f0) | l_334), 1))) > l_433), 3)));
                    g_132.f2 ^= (safe_sub_func_uint64_t_u_u((((*l_416) ^= ((65534UL <= ((~(l_432[1][1][4] >= ((((safe_add_func_uint8_t_u_u((((((safe_mul_func_uint8_t_u_u((l_411 , 1UL), l_428)) || ((safe_lshift_func_uint16_t_u_s((safe_div_func_uint64_t_u_u(((safe_add_func_uint64_t_u_u((l_392 , ((((((*l_462) = (g_124.f2 , l_406.f0)) ^ g_124.f1) != g_128) > 0x59L) == 2L)), 0x1BB254E1739EFE29LL)) , 1UL), g_132.f3)), l_463)) != l_428)) | l_428) , l_359) <= g_464), g_274)) & l_406.f0) , l_463) != 0x54L))) | 0x2BL)) > 8UL)) == g_326.f2), 0x8CFCD1ABB9C1D115LL));
                }
                else
                { 
                    int32_t l_465 = (-1L);
                    int32_t l_466 = 0xCEBFE9D7L;
                    int32_t l_467 = 0x8E1BF947L;
                    int32_t l_469 = 0xBA679AB4L;
                    uint32_t l_474 = 0UL;
                    if (l_334)
                        break;
                    l_432[1][1][4] = 0x63821AD0L;
                    l_471++;
                    l_474--;
                }
            }
            else
            { 
                int16_t l_479 = (-5L);
                l_431[1] = ((l_468[3][0] < (g_124.f3 , l_431[2])) ^ (safe_rshift_func_uint8_t_u_u(((((l_445 , g_124) , l_479) & (safe_mod_func_uint16_t_u_u(((0x25E7L > l_432[1][0][0]) && 0x8EC4L), g_113[2]))) == l_479), 5)));
                return g_482;
            }
        }
        for (l_333 = 27; (l_333 == (-23)); l_333 = safe_sub_func_int16_t_s_s(l_333, 1))
        { 
            const union U1 *l_486 = &g_25[2][0][3];
            const union U1 **l_487 = &l_486;
            int32_t l_494 = 0xE58C16ABL;
            int32_t l_497 = (-8L);
            int32_t *l_500 = (void*)0;
            int32_t *l_501 = &g_124.f3;
            (*l_487) = l_486;
            (*l_501) &= (safe_add_func_int64_t_s_s((((safe_rshift_func_int16_t_s_u(((((**l_384) = (safe_add_func_int32_t_s_s(l_494, (((safe_div_func_int16_t_s_s(((((l_497 <= g_92) , (((*l_486) , (g_135[4].f3 , (-3L))) == 0UL)) && 3L) | l_494), l_359)) <= l_359) && 0x92C6L)))) > 0x59L) < 1UL), 5)) == g_135[4].f7) <= g_135[4].f4), 0UL));
            (*g_349) = l_502[0];
            if (l_392)
                goto lbl_503;
        }
        l_328 = (safe_sub_func_int8_t_s_s(((**l_384) = (safe_lshift_func_uint16_t_u_s(g_135[4].f3, ((((*l_523) = (safe_unary_minus_func_uint16_t_u(((((l_509 , ((((((safe_mod_func_int16_t_s_s((((*l_512) = &g_66) == ((*l_514) = &l_468[3][0])), (safe_div_func_int32_t_s_s(((l_335 == l_335) || (safe_lshift_func_uint8_t_u_s(((void*)0 == l_521), l_430))), 1UL)))) < l_445) ^ 1L) , (void*)0) != (void*)0) , l_445)) > g_522[2][0]) & l_468[2][0]) , g_168)))) <= l_334) >= g_92)))), 5UL));
    }
    else
    { 
        union U1 **l_534 = &g_483;
        union U1 ** const l_535 = &g_483;
        uint64_t l_538 = 18446744073709551615UL;
        const int32_t l_546 = 8L;
        struct S0 l_550 = {323,1,-1732,6,28473,6301,-17,18446744073709551615UL};
        int16_t *l_575[2];
        int16_t **l_574[6][6] = {{&l_575[0],&l_575[0],&l_575[1],&l_575[0],&l_575[0],&l_575[1]},{&l_575[0],&l_575[0],&l_575[0],&l_575[0],&l_575[1],&l_575[0]},{&l_575[1],&l_575[0],&l_575[1],&l_575[0],&l_575[1],&l_575[0]},{&l_575[1],&l_575[1],&l_575[1],&l_575[1],&l_575[0],&l_575[0]},{&l_575[1],&l_575[1],&l_575[0],&l_575[0],&l_575[1],&l_575[1]},{&l_575[0],&l_575[1],&l_575[1],&l_575[0],&l_575[0],&l_575[1]}};
        union U1 ***l_610[3];
        int64_t *l_614 = &g_128;
        int32_t *l_615[5];
        uint32_t l_616 = 4294967288UL;
        int i, j;
        for (i = 0; i < 2; i++)
            l_575[i] = &l_570;
        for (i = 0; i < 3; i++)
            l_610[i] = &l_396;
        for (i = 0; i < 5; i++)
            l_615[i] = &g_14;
        for (g_326.f0 = 0; (g_326.f0 > 53); g_326.f0++)
        { 
            uint32_t l_539[5] = {0xA2B72780L,0xA2B72780L,0xA2B72780L,0xA2B72780L,0xA2B72780L};
            struct S0 l_542[4] = {{304,2,-1482,1,1327,-12496,-35,0x20A155F1FE4F7517LL},{304,2,-1482,1,1327,-12496,-35,0x20A155F1FE4F7517LL},{304,2,-1482,1,1327,-12496,-35,0x20A155F1FE4F7517LL},{304,2,-1482,1,1327,-12496,-35,0x20A155F1FE4F7517LL}};
            union U1 l_545 = {7UL};
            uint8_t l_568 = 0xA7L;
            struct S0 **l_590 = &g_350;
            int i;
            for (g_128 = (-21); (g_128 != (-9)); ++g_128)
            { 
                union U2 l_536 = {0xAA573B12L};
                struct S0 *l_537 = &g_132;
                int32_t *l_553 = &g_14;
                l_539[2] &= (safe_lshift_func_int8_t_s_u(((***g_368) = ((((l_531 || (((safe_div_func_int16_t_s_s(((((l_534 = l_534) == (l_430 , l_535)) ^ ((l_536 , l_537) != (*g_349))) , 8L), 0xF459L)) < 18446744073709551612UL) > l_538)) > g_132.f1) | g_135[4].f2) == 0L)), l_536.f0));
                if (g_92)
                    break;
                for (g_274 = 20; (g_274 <= 29); g_274 = safe_add_func_int64_t_s_s(g_274, 1))
                { 
                    int32_t *l_543 = &g_14;
                    uint32_t l_547 = 0x6FD6E84AL;
                    l_432[0][5][0] &= ((((((-1L) == ((l_542[3] , 0x9CL) , ((*l_543) &= l_536.f2))) > 0x11F2EE10L) | ((+(8UL ^ (((l_545 , l_542[3].f5) && 0x9CL) != l_546))) <= 0x52C9B0DF282F369FLL)) == l_542[3].f0) <= l_547);
                    (*l_543) |= ((safe_lshift_func_uint8_t_u_s(g_470, 2)) , ((*g_209) != (l_550 , (*g_368))));
                    (*l_543) = (safe_div_func_int64_t_s_s(0L, g_128));
                    return &g_483;
                }
                l_553 = (*g_283);
            }
            for (l_334 = (-13); (l_334 == 25); l_334++)
            { 
                int8_t l_564 = 0x7BL;
                union U2 *l_577 = &g_326;
                union U2 **l_603 = (void*)0;
                const union U3 *l_605 = (void*)0;
                const union U3 **l_604 = &l_605;
                for (g_434 = 0; (g_434 > 47); g_434 = safe_add_func_int32_t_s_s(g_434, 9))
                { 
                    union U2 **l_558[3][2][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
                    int32_t l_563[3];
                    int16_t *l_569 = &l_468[2][0];
                    int32_t l_571[4];
                    int16_t **l_573 = &l_569;
                    int16_t ***l_572 = &l_573;
                    int32_t *l_576 = &l_563[0];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_563[i] = 0x09736EBBL;
                    for (i = 0; i < 4; i++)
                        l_571[i] = 0L;
                    l_325[2] = &g_202;
                    if (l_542[3].f7)
                        break;
                    (*l_576) = (((*l_572) = (((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(l_563[0], 9)), (l_571[0] = ((l_564 && ((((void*)0 == &g_522[0][0]) > ((safe_sub_func_uint16_t_u_u((!0x631CC472L), ((*l_569) = l_568))) && ((l_570 & (-8L)) , 65535UL))) , g_132.f6)) != l_328)))) && l_545.f0) , (void*)0)) == l_574[0][2]);
                    g_578 = l_577;
                    if (l_542[3].f3)
                        continue;
                }
                for (g_66 = 0; (g_66 < 15); g_66 = safe_add_func_int32_t_s_s(g_66, 1))
                { 
                    struct S0 ** const ***l_584 = (void*)0;
                    struct S0 ** const ***l_585[6][5][4] = {{{&g_582[2][0],&g_582[1][1],&g_582[1][1],&g_582[1][1]},{&g_582[2][0],&g_582[1][1],&g_582[1][1],&g_582[1][1]},{&g_582[3][0],&g_582[1][1],&g_582[1][1],&g_582[1][1]},{&g_582[2][0],&g_582[1][1],&g_582[1][1],&g_582[1][1]},{&g_582[2][0],&g_582[1][1],&g_582[1][1],&g_582[1][1]}},{{&g_582[3][0],&g_582[1][1],&g_582[1][1],&g_582[1][1]},{&g_582[2][0],&g_582[1][1],&g_582[1][1],&g_582[1][1]},{&g_582[2][0],&g_582[1][1],&g_582[1][1],&g_582[1][1]},{&g_582[3][0],&g_582[1][1],&g_582[1][1],&g_582[1][1]},{&g_582[2][0],&g_582[1][1],&g_582[1][1],&g_582[1][1]}},{{&g_582[2][0],&g_582[1][1],&g_582[1][1],&g_582[1][1]},{&g_582[3][0],&g_582[1][1],&g_582[1][1],&g_582[1][1]},{&g_582[2][0],&g_582[1][1],&g_582[1][1],&g_582[1][1]},{&g_582[2][0],&g_582[1][1],&g_582[1][1],&g_582[1][1]},{&g_582[3][0],&g_582[1][1],&g_582[1][1],&g_582[1][1]}},{{&g_582[2][0],&g_582[1][1],&g_582[1][1],&g_582[1][1]},{&g_582[2][0],&g_582[1][1],&g_582[1][1],&g_582[1][1]},{&g_582[3][0],&g_582[1][1],&g_582[1][1],&g_582[1][1]},{&g_582[2][0],&g_582[1][1],&g_582[1][1],&g_582[1][1]},{&g_582[2][0],&g_582[1][1],&g_582[1][1],&g_582[1][1]}},{{&g_582[3][0],&g_582[1][1],&g_582[1][1],&g_582[1][1]},{&g_582[2][0],&g_582[1][1],&g_582[1][1],&g_582[1][1]},{&g_582[2][0],&g_582[1][1],&g_582[1][1],&g_582[1][1]},{&g_582[3][0],&g_582[1][1],&g_582[1][1],&g_582[1][1]},{&g_582[2][0],&g_582[1][1],&g_582[1][1],&g_582[1][1]}},{{&g_582[2][0],&g_582[1][1],&g_582[1][1],&g_582[1][1]},{&g_582[3][0],&g_582[1][1],&g_582[1][1],&g_582[1][1]},{&g_582[2][0],&g_582[1][1],&g_582[1][1],&g_582[1][1]},{&g_582[2][0],&g_582[2][1],&g_582[1][1],&g_582[1][1]},{(void*)0,&g_582[1][1],&g_582[1][1],&g_582[2][1]}}};
                    int32_t l_591 = 1L;
                    int32_t *l_593 = &g_124.f3;
                    uint8_t *l_601 = &g_92;
                    int i, j, k;
                    g_582[1][1] = (l_586 = g_582[1][1]);
                    g_274 &= (safe_rshift_func_int8_t_s_u(((l_589 != l_590) ^ l_591), 1));
                    (*l_593) ^= (l_592 , (l_328 = l_564));
                    (*l_593) = (l_539[2] < ((*l_601) &= (g_111[0] & ((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((((l_550.f3 < 0L) != (safe_div_func_int16_t_s_s(l_538, 65535UL))) , (((~g_113[2]) ^ 18446744073709551614UL) >= g_326.f2)), g_124.f0)), 0xD5D7L)) | l_432[1][1][4]))));
                    if (l_602)
                        break;
                }
                g_578 = l_577;
                (*l_604) = &l_592;
                if (l_550.f4)
                    break;
            }
        }
        l_616 = (safe_lshift_func_int16_t_s_u(l_550.f4, (0x3CADL != ((safe_lshift_func_uint16_t_u_s(((**g_349) , (l_550.f5 & (((**l_393) = l_610[2]) == &l_535))), 3)) & (((***g_368) = (safe_add_func_uint64_t_u_u(((!(((*l_614) = ((void*)0 == l_575[1])) ^ 0L)) != 0x1B2BL), g_464))) , l_550.f6)))));
        --g_618;
    }
lbl_702:
    l_629[2][1] &= (safe_mod_func_uint16_t_u_u(g_274, (safe_sub_func_uint8_t_u_u((l_625 >= ((*l_626) ^= (l_625 <= 4294967286UL))), (l_468[1][0] || (&g_111[0] == l_627))))));
    g_132.f5 = (g_132.f4 & 0x42C8A7E9L);
    for (g_618 = 0; (g_618 > 55); ++g_618)
    { 
        int8_t ****l_632 = &g_209;
        int32_t l_634 = 0x547BC47CL;
        union U1 l_669 = {5UL};
        int32_t l_670 = 2L;
        for (g_579.f0 = 0; (g_579.f0 <= 6); g_579.f0 += 1)
        { 
            int8_t *****l_633 = &l_632;
            int32_t l_635 = 0x7C4A53C1L;
            int32_t l_636 = 0xE1AEF16FL;
            int32_t l_679 = 0L;
            int32_t l_681 = 0x2B82C3DCL;
            int32_t l_682 = 0x6FBA55BEL;
            int32_t l_683 = 0x0576799BL;
            int32_t l_684 = 1L;
            (*l_633) = l_632;
        }
        for (g_170 = 20; (g_170 <= 13); g_170 = safe_sub_func_int64_t_s_s(g_170, 8))
        { 
            uint8_t l_707 = 1UL;
            uint16_t *l_708 = &g_25[2][3][2].f0;
            uint8_t *l_709 = &l_629[2][1];
            int32_t l_711 = (-1L);
            if (g_124.f0)
                goto lbl_702;
            if ((safe_sub_func_uint64_t_u_u((g_124 , ((l_669.f2 = (l_711 = (((safe_add_func_int8_t_s_s(l_634, l_707)) , l_708) != (((*l_709) = 7UL) , l_710[0])))) > (safe_rshift_func_uint8_t_u_s((g_434--), 7)))), (safe_rshift_func_uint8_t_u_u(((g_132.f5 ^ (-1L)) || g_132.f2), l_707)))))
            { 
                return &g_483;
            }
            else
            { 
                return &g_483;
            }
        }
    }
    g_202.f2 = (safe_unary_minus_func_int16_t_s((0x2AE8L <= (safe_rshift_func_uint8_t_u_s((((*l_723) = ((*g_482) == (*g_482))) == ((g_3 == l_724) > (3L < ((((((*l_725) = (g_92 <= g_113[2])) , 0xE8C7L) ^ g_124.f3) < g_14) ^ 1UL)))), l_726)))));
    return &g_483;
}



static int8_t * func_48(const int32_t  p_49, int32_t  p_50, uint32_t  p_51, union U2  p_52, int8_t  p_53)
{ 
    int8_t *l_322[4][3][3] = {{{&g_168,&g_168,&g_271},{(void*)0,(void*)0,&g_168},{&g_7,&g_271,&g_7}},{{(void*)0,&g_7,&g_7},{&g_168,&g_271,&g_271},{&g_124.f1,(void*)0,&g_7}},{{&g_7,&g_168,&g_7},{&g_124.f1,&g_7,&g_168},{&g_168,&g_168,&g_271}},{{(void*)0,(void*)0,&g_168},{&g_7,&g_271,&g_7},{(void*)0,&g_7,&g_7}}};
    int i, j, k;
    return l_322[2][1][2];
}



static union U2  func_60(const uint32_t  p_61, union U1 * p_62, const int16_t  p_63)
{ 
    union U3 l_79[7] = {{0x41EDF2CFL},{0x41EDF2CFL},{0x41EDF2CFL},{0x41EDF2CFL},{0x41EDF2CFL},{0x41EDF2CFL},{0x41EDF2CFL}};
    int32_t *l_90 = &l_79[1].f3;
    uint8_t *l_91 = &g_92;
    int32_t l_93 = 0x641D31ABL;
    int16_t *l_94 = &g_66;
    const uint32_t l_99 = 0x79EA335EL;
    union U1 * const l_125[1] = {&g_25[2][3][2]};
    int32_t l_159 = 0x20824398L;
    int32_t l_160 = 0x81DF02EAL;
    int32_t l_161 = 0x680227E6L;
    int32_t l_162[3][7][4] = {{{0x307A3C17L,0x073E8D0CL,0x307A3C17L,0x073E8D0CL},{0x307A3C17L,0x073E8D0CL,0x307A3C17L,0x073E8D0CL},{0x307A3C17L,0x073E8D0CL,0x307A3C17L,0x073E8D0CL},{0x307A3C17L,0x073E8D0CL,0x307A3C17L,0x073E8D0CL},{0x307A3C17L,0x073E8D0CL,0x307A3C17L,0x073E8D0CL},{0x307A3C17L,0x073E8D0CL,0x307A3C17L,0x073E8D0CL},{0x307A3C17L,0x073E8D0CL,0x307A3C17L,0x073E8D0CL}},{{0x307A3C17L,0x073E8D0CL,0x307A3C17L,0x073E8D0CL},{0x307A3C17L,0x073E8D0CL,0x307A3C17L,0x073E8D0CL},{0x307A3C17L,0x073E8D0CL,0x307A3C17L,0x073E8D0CL},{0x307A3C17L,0x073E8D0CL,0x307A3C17L,0x073E8D0CL},{0x307A3C17L,0x073E8D0CL,0x307A3C17L,0x073E8D0CL},{0x307A3C17L,0x073E8D0CL,0x307A3C17L,0x073E8D0CL},{0x307A3C17L,0x073E8D0CL,0x307A3C17L,0x073E8D0CL}},{{0x307A3C17L,0x073E8D0CL,0x307A3C17L,0x073E8D0CL},{0x307A3C17L,0x073E8D0CL,0x307A3C17L,0x073E8D0CL},{0x307A3C17L,0x073E8D0CL,0x307A3C17L,0x073E8D0CL},{0x307A3C17L,0x073E8D0CL,0x307A3C17L,0x073E8D0CL},{0x307A3C17L,0x073E8D0CL,0x307A3C17L,0x073E8D0CL},{0x307A3C17L,0x073E8D0CL,0x307A3C17L,0x073E8D0CL},{0x307A3C17L,0x073E8D0CL,0x307A3C17L,0x073E8D0CL}}};
    int32_t l_169 = 0xA4C43A83L;
    uint64_t l_213 = 0UL;
    union U1 ***l_244 = (void*)0;
    int8_t l_255 = (-1L);
    union U2 *l_256 = &g_202;
    int8_t ** const *l_301 = &g_210;
    union U1 *** const **l_317 = (void*)0;
    int i, j, k;
    if ((((!((g_66 && (safe_lshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_add_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((safe_rshift_func_int16_t_s_u((((*l_94) = (l_79[1] , ((safe_mod_func_int64_t_s_s((((*l_91) = (((*l_90) = (g_14 = (safe_mod_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(l_79[1].f0, (((safe_mod_func_uint8_t_u_u(p_61, p_63)) || ((p_62 == (void*)0) > l_79[1].f0)) , g_7))), 3)) >= p_61) & 0xACL), p_63)))) < g_25[2][3][2].f0)) < p_61), l_93)) ^ p_61))) <= g_3), 10)), g_3)), p_61)) == g_25[2][3][2].f0), 7)), p_61)) == l_93), 1))) <= g_25[2][3][2].f0)) > 0x611CL) >= g_3))
    { 
        uint8_t *l_102 = (void*)0;
        const int32_t l_129[5][2] = {{0xCF94CC8AL,(-1L)},{0xC7448833L,0xC7448833L},{0xC7448833L,(-1L)},{0xCF94CC8AL,(-2L)},{(-1L),(-2L)}};
        struct S0 *l_131 = &g_132;
        int32_t l_146 = 0xAC18B040L;
        int32_t l_158[6];
        int32_t l_164 = 0xEF97A493L;
        int32_t l_186 = 1L;
        int32_t l_187[7];
        const union U1 *l_217 = &g_25[4][3][0];
        const union U1 **l_216 = &l_217;
        const union U1 ***l_215 = &l_216;
        const union U1 ****l_214 = &l_215;
        int64_t *l_222 = &g_128;
        union U2 *l_257 = (void*)0;
        union U1 *l_264 = &g_25[1][1][0];
        union U1 **l_263 = &l_264;
        int i, j;
        for (i = 0; i < 6; i++)
            l_158[i] = 0xF59DF16FL;
        for (i = 0; i < 7; i++)
            l_187[i] = 0L;
        for (g_66 = 0; (g_66 != (-19)); --g_66)
        { 
            uint8_t *l_103 = &g_92;
            uint8_t **l_104 = &l_91;
            uint32_t *l_110[7][1] = {{&g_111[0]},{&g_111[0]},{&g_111[0]},{&g_111[0]},{&g_111[0]},{&g_111[0]},{&g_111[0]}};
            int32_t *l_112[7];
            union U3 l_123[5] = {{0x7285802EL},{0x7285802EL},{0x7285802EL},{0x7285802EL},{0x7285802EL}};
            uint32_t l_144[4];
            int64_t l_203 = 0xC047C511B62D161ALL;
            int8_t *l_220 = &g_168;
            struct S0 l_225 = {322,3,-1603,6,24589,7148,30,0UL};
            int64_t l_227 = (-1L);
            int i, j;
            for (i = 0; i < 7; i++)
                l_112[i] = &l_93;
            for (i = 0; i < 4; i++)
                l_144[i] = 0x5BA6927BL;
        }
        l_90 = &l_161;
    }
    else
    { 
        uint32_t *l_307 = (void*)0;
        uint32_t *l_308 = &g_111[0];
        int32_t l_318 = (-1L);
        int16_t l_319 = 0x5026L;
        int32_t *l_320[6] = {&l_159,&l_159,&l_159,&l_159,&l_159,&l_159};
        int i;
        (*l_90) = (g_135[4] , ((0L == (safe_add_func_int64_t_s_s((((l_93 |= ((((safe_add_func_uint32_t_u_u(((*l_308) = (p_61 >= 0L)), 0L)) >= ((safe_div_func_uint32_t_u_u(((safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s(((*l_94) ^= ((*l_90) >= ((l_317 == l_317) > p_61))), l_318)), l_318)), l_318)) && p_61), l_319)) >= l_318)) , &g_111[0]) == (void*)0)) <= p_63) > 0x6DL), g_3))) , p_63));
        return g_202;
    }
    return (*l_256);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_25[i][j][k].f0, "g_25[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_111[i], "g_111[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_113[i], "g_113[i]", print_hash_value);

    }
    transparent_crc(g_124.f0, "g_124.f0", print_hash_value);
    transparent_crc(g_124.f1, "g_124.f1", print_hash_value);
    transparent_crc(g_124.f2, "g_124.f2", print_hash_value);
    transparent_crc(g_124.f3, "g_124.f3", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_132.f0, "g_132.f0", print_hash_value);
    transparent_crc(g_132.f1, "g_132.f1", print_hash_value);
    transparent_crc(g_132.f2, "g_132.f2", print_hash_value);
    transparent_crc(g_132.f3, "g_132.f3", print_hash_value);
    transparent_crc(g_132.f4, "g_132.f4", print_hash_value);
    transparent_crc(g_132.f5, "g_132.f5", print_hash_value);
    transparent_crc(g_132.f6, "g_132.f6", print_hash_value);
    transparent_crc(g_132.f7, "g_132.f7", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_135[i].f0, "g_135[i].f0", print_hash_value);
        transparent_crc(g_135[i].f1, "g_135[i].f1", print_hash_value);
        transparent_crc(g_135[i].f2, "g_135[i].f2", print_hash_value);
        transparent_crc(g_135[i].f3, "g_135[i].f3", print_hash_value);
        transparent_crc(g_135[i].f4, "g_135[i].f4", print_hash_value);
        transparent_crc(g_135[i].f5, "g_135[i].f5", print_hash_value);
        transparent_crc(g_135[i].f6, "g_135[i].f6", print_hash_value);
        transparent_crc(g_135[i].f7, "g_135[i].f7", print_hash_value);

    }
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_202.f0, "g_202.f0", print_hash_value);
    transparent_crc(g_202.f2, "g_202.f2", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_326.f0, "g_326.f0", print_hash_value);
    transparent_crc(g_326.f2, "g_326.f2", print_hash_value);
    transparent_crc(g_434, "g_434", print_hash_value);
    transparent_crc(g_464, "g_464", print_hash_value);
    transparent_crc(g_470, "g_470", print_hash_value);
    transparent_crc(g_516, "g_516", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_522[i][j], "g_522[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_579.f0, "g_579.f0", print_hash_value);
    transparent_crc(g_579.f2, "g_579.f2", print_hash_value);
    transparent_crc(g_617, "g_617", print_hash_value);
    transparent_crc(g_618, "g_618", print_hash_value);
    transparent_crc(g_781, "g_781", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_790[i], "g_790[i]", print_hash_value);

    }
    transparent_crc(g_791, "g_791", print_hash_value);
    transparent_crc(g_921, "g_921", print_hash_value);
    transparent_crc(g_927, "g_927", print_hash_value);
    transparent_crc(g_928, "g_928", print_hash_value);
    transparent_crc(g_930, "g_930", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_998[i][j], "g_998[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1115, "g_1115", print_hash_value);
    transparent_crc(g_1257, "g_1257", print_hash_value);
    transparent_crc(g_1274, "g_1274", print_hash_value);
    transparent_crc(g_1275, "g_1275", print_hash_value);
    transparent_crc(g_1343, "g_1343", print_hash_value);
    transparent_crc(g_1344, "g_1344", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1365[i], "g_1365[i]", print_hash_value);

    }
    transparent_crc(g_1377, "g_1377", print_hash_value);
    transparent_crc(g_1380, "g_1380", print_hash_value);
    transparent_crc(g_1396, "g_1396", print_hash_value);
    transparent_crc(g_1415, "g_1415", print_hash_value);
    transparent_crc(g_1446, "g_1446", print_hash_value);
    transparent_crc(g_1512, "g_1512", print_hash_value);
    transparent_crc(g_1514, "g_1514", print_hash_value);
    transparent_crc(g_1560, "g_1560", print_hash_value);
    transparent_crc(g_1570, "g_1570", print_hash_value);
    transparent_crc(g_1613, "g_1613", print_hash_value);
    transparent_crc(g_1639.f0, "g_1639.f0", print_hash_value);
    transparent_crc(g_1639.f2, "g_1639.f2", print_hash_value);
    transparent_crc(g_1779, "g_1779", print_hash_value);
    transparent_crc(g_1810, "g_1810", print_hash_value);
    transparent_crc(g_1824, "g_1824", print_hash_value);
    transparent_crc(g_1832, "g_1832", print_hash_value);
    transparent_crc(g_1853, "g_1853", print_hash_value);
    transparent_crc(g_1854, "g_1854", print_hash_value);
    transparent_crc(g_1855, "g_1855", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
