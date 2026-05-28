// SPDX-License-Identifier: MIT
// cctest_csmith_48c3d62d.c --- cctest case csmith_48c3d62d (csmith seed 1220793901)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8cb0c97 */
/* @exp_ticks 0xc1be */

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

// Options:   -s 1220793901 -o /tmp/csmith_gen_7jpdimse/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   uint32_t  f1;
   int32_t  f2;
   uint16_t  f3;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int32_t  f0;
   uint32_t  f1;
   const uint32_t  f2;
   const int32_t  f3;
};
#pragma pack(pop)

union U2 {
   int32_t  f0;
   uint32_t  f1;
   struct S1  f2;
   int16_t  f3;
   uint64_t  f4;
};

union U3 {
   const int16_t  f0;
   struct S0  f1;
   uint64_t  f2;
};

union U4 {
   int8_t  f0;
   uint64_t  f1;
};


static int32_t g_6[2] = {0xD947597AL,0xD947597AL};
static int32_t g_9[3] = {(-1L),(-1L),(-1L)};
static int32_t g_18[1][6][7] = {{{0L,0L,(-9L),(-9L),0L,0L,1L},{0xA3AAF954L,0x31B0F827L,0x8E71DF66L,0x8E71DF66L,0x31B0F827L,0xA3AAF954L,0xB55804E0L},{0L,0L,(-9L),(-9L),0L,0L,1L},{0xA3AAF954L,0x31B0F827L,0x8E71DF66L,0x8E71DF66L,0x31B0F827L,0xA3AAF954L,0xB55804E0L},{0L,0L,(-9L),(-9L),0L,0L,1L},{0xA3AAF954L,0x31B0F827L,0x8E71DF66L,0x8E71DF66L,0x31B0F827L,0xA3AAF954L,0xA36ED293L}}};
static int32_t g_45[5] = {0xC7B43BFDL,0xC7B43BFDL,0xC7B43BFDL,0xC7B43BFDL,0xC7B43BFDL};
static int64_t g_46 = 1L;
static int8_t g_73 = 0xA4L;
static int32_t *g_75 = &g_18[0][1][6];
static int32_t * const *g_74[6][5] = {{&g_75,&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,(void*)0,&g_75},{&g_75,(void*)0,&g_75,(void*)0,&g_75},{&g_75,&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75,&g_75}};
static int8_t *g_83 = &g_73;
static int8_t *g_85[3][7] = {{(void*)0,&g_73,(void*)0,(void*)0,&g_73,(void*)0,&g_73},{(void*)0,&g_73,(void*)0,(void*)0,&g_73,(void*)0,&g_73},{(void*)0,&g_73,(void*)0,(void*)0,&g_73,(void*)0,&g_73}};
static uint32_t g_86 = 0x06B3A0AEL;
static union U2 g_87 = {0L};
static uint16_t g_91 = 0x14C8L;
static struct S0 g_94 = {-10L,0xA721C5E8L,0x18D861C5L,6UL};
static uint8_t g_160 = 255UL;
static int32_t * const **g_195 = &g_74[0][1];
static int32_t **g_221[7][3][3] = {{{&g_75,&g_75,&g_75},{&g_75,(void*)0,(void*)0},{(void*)0,(void*)0,&g_75}},{{&g_75,(void*)0,(void*)0},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75}},{{(void*)0,&g_75,&g_75},{&g_75,&g_75,(void*)0},{&g_75,&g_75,&g_75}},{{(void*)0,&g_75,(void*)0},{&g_75,&g_75,&g_75},{&g_75,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_75},{&g_75,(void*)0,(void*)0},{&g_75,&g_75,&g_75}},{{&g_75,&g_75,&g_75},{(void*)0,&g_75,&g_75},{&g_75,&g_75,(void*)0}},{{&g_75,&g_75,&g_75},{(void*)0,&g_75,(void*)0},{&g_75,&g_75,&g_75}}};
static int32_t ***g_220 = &g_221[6][0][1];
static uint64_t g_242 = 1UL;
static int32_t g_246[3][5] = {{0x7313F530L,0x7313F530L,0x4F044363L,0x7313F530L,0x7313F530L},{0xC9178980L,0xC1CDA1E9L,0xC9178980L,0xC9178980L,0xC1CDA1E9L},{0x7313F530L,0x9BB2B780L,0x9BB2B780L,0x7313F530L,0x9BB2B780L}};
static union U4 g_258 = {-6L};
static union U4 *g_257 = &g_258;
static union U3 *g_289 = (void*)0;
static union U3 g_292[3][3][7] = {{{{0xA4CCL},{0xA4CCL},{-1L},{0xA4CCL},{0xA4CCL},{-1L},{0xA4CCL}},{{0xA4CCL},{5L},{5L},{0xA4CCL},{5L},{5L},{0xA4CCL}},{{5L},{0xA4CCL},{5L},{5L},{0xA4CCL},{5L},{5L}}},{{{0xA4CCL},{0xA4CCL},{-1L},{0xA4CCL},{0xA4CCL},{-1L},{0xA4CCL}},{{0xA4CCL},{5L},{5L},{0xA4CCL},{5L},{5L},{0xA4CCL}},{{5L},{0xA4CCL},{5L},{5L},{0xA4CCL},{5L},{5L}}},{{{0xA4CCL},{0xA4CCL},{-1L},{0xA4CCL},{0xA4CCL},{-1L},{0xA4CCL}},{{0xA4CCL},{5L},{5L},{0xA4CCL},{5L},{5L},{0xA4CCL}},{{-1L},{5L},{-1L},{-1L},{5L},{-1L},{-1L}}}};
static const int32_t *g_326 = &g_45[0];
static const int32_t **g_325[7] = {&g_326,&g_326,&g_326,&g_326,&g_326,&g_326,&g_326};
static const int32_t ***g_324[1] = {&g_325[1]};
static const int32_t ****g_323 = &g_324[0];
static const int32_t ***** const g_322[4] = {&g_323,&g_323,&g_323,&g_323};
static int32_t *g_333 = &g_18[0][1][4];
static int16_t g_336 = 0x092EL;
static struct S1 g_351[4][5] = {{{0xD500D0F2L,4294967292UL,18446744073709551615UL,0x5A3C4628L},{0xEC5B805AL,4UL,0xA1E5F044L,1L},{7L,0x10F9C7A5L,0xEC9C1F00L,-1L},{0xEC5B805AL,4UL,0xA1E5F044L,1L},{0xD500D0F2L,4294967292UL,18446744073709551615UL,0x5A3C4628L}},{{0xD500D0F2L,4294967292UL,18446744073709551615UL,0x5A3C4628L},{0xEC5B805AL,4UL,0xA1E5F044L,1L},{7L,0x10F9C7A5L,0xEC9C1F00L,-1L},{0xEC5B805AL,4UL,0xA1E5F044L,1L},{0xD500D0F2L,4294967292UL,18446744073709551615UL,0x5A3C4628L}},{{0xD500D0F2L,4294967292UL,18446744073709551615UL,0x5A3C4628L},{0xEC5B805AL,4UL,0xA1E5F044L,1L},{7L,0x10F9C7A5L,0xEC9C1F00L,-1L},{0xEC5B805AL,4UL,0xA1E5F044L,1L},{0xD500D0F2L,4294967292UL,18446744073709551615UL,0x5A3C4628L}},{{0xD500D0F2L,4294967292UL,18446744073709551615UL,0x5A3C4628L},{0xEC5B805AL,4UL,0xA1E5F044L,1L},{7L,0x10F9C7A5L,0xEC9C1F00L,-1L},{0xEC5B805AL,4UL,0xA1E5F044L,1L},{0xD500D0F2L,4294967292UL,18446744073709551615UL,0x5A3C4628L}}};
static uint8_t g_359 = 0xE2L;
static int8_t **g_381 = &g_85[1][4];
static int8_t *** const g_380 = &g_381;
static struct S0 g_413[5] = {{9L,1UL,-2L,0xD389L},{9L,1UL,-2L,0xD389L},{9L,1UL,-2L,0xD389L},{9L,1UL,-2L,0xD389L},{9L,1UL,-2L,0xD389L}};
static struct S0 *g_415[2][6][7] = {{{&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3]},{&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3]},{&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3]},{&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3]},{&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3]},{&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3]}},{{&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3]},{&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3]},{&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3]},{&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3]},{&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3]},{&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3],&g_413[3]}}};
static struct S0 **g_414 = &g_415[1][3][1];
static uint16_t *g_434 = &g_413[3].f3;
static uint16_t **g_433[1][6][4] = {{{&g_434,&g_434,&g_434,&g_434},{&g_434,&g_434,&g_434,&g_434},{&g_434,&g_434,(void*)0,&g_434},{&g_434,&g_434,&g_434,&g_434},{&g_434,&g_434,&g_434,&g_434},{&g_434,&g_434,(void*)0,&g_434}}};
static union U2 *g_457 = &g_87;
static union U2 **g_456 = &g_457;
static union U3 g_492[2][7][3] = {{{{1L},{1L},{1L}},{{-1L},{0x1845L},{0L}},{{-5L},{0x3486L},{0L}},{{-10L},{-5L},{1L}},{{-5L},{-5L},{-1L}},{{-10L},{-1L},{-5L}},{{-5L},{-1L},{-10L}}},{{{-1L},{-5L},{-5L}},{{1L},{-5L},{-10L}},{{0L},{0x3486L},{-5L}},{{0L},{0x1845L},{-1L}},{{1L},{1L},{1L}},{{-1L},{0x1845L},{1L}},{{1L},{-10L},{1L}}}};
static uint64_t g_547 = 7UL;
static int32_t g_559[5][3][6] = {{{8L,(-6L),(-1L),7L,(-1L),(-6L)},{(-1L),8L,0x97F33D3BL,0x9FACED20L,0x9FACED20L,0x97F33D3BL},{(-1L),(-1L),0x9FACED20L,7L,3L,7L}},{{8L,(-1L),8L,0x97F33D3BL,0x9FACED20L,0x9FACED20L},{(-6L),8L,8L,(-6L),(-1L),7L},{7L,(-6L),0x9FACED20L,(-6L),7L,0x97F33D3BL}},{{(-6L),7L,0x97F33D3BL,0x97F33D3BL,7L,(-6L)},{8L,(-6L),(-1L),7L,(-1L),(-6L)},{(-1L),8L,0x97F33D3BL,0x9FACED20L,0x9FACED20L,0x97F33D3BL}},{{(-1L),(-1L),0x9FACED20L,7L,3L,7L},{8L,(-1L),8L,0x97F33D3BL,0x9FACED20L,0x9FACED20L},{(-6L),8L,8L,(-6L),(-1L),7L}},{{7L,(-6L),0x9FACED20L,(-6L),7L,0x97F33D3BL},{(-6L),7L,0x97F33D3BL,0x97F33D3BL,7L,(-6L)},{8L,(-6L),(-1L),7L,(-1L),(-6L)}}};
static int64_t g_636 = 0x37E178CC454036D7LL;
static int32_t g_742[4][6][4] = {{{9L,0x492788A2L,(-1L),0x492788A2L},{4L,0x6510BFABL,(-1L),0x07743C44L},{9L,0xDA3876E6L,4L,0x07743C44L},{0L,0x6510BFABL,0L,0x492788A2L},{0L,0x492788A2L,4L,2L},{9L,0x492788A2L,(-1L),0x492788A2L}},{{4L,0x6510BFABL,(-1L),0x07743C44L},{9L,0xDA3876E6L,4L,0x07743C44L},{0L,0x6510BFABL,0L,0x492788A2L},{0L,0x492788A2L,4L,2L},{9L,0x492788A2L,(-1L),0x492788A2L},{4L,0x6510BFABL,(-1L),0x07743C44L}},{{9L,0xDA3876E6L,4L,0x07743C44L},{0L,0x6510BFABL,0L,0x492788A2L},{0L,0x492788A2L,4L,2L},{9L,0x492788A2L,(-1L),0x492788A2L},{4L,0x6510BFABL,(-1L),0x07743C44L},{9L,0xDA3876E6L,4L,0x07743C44L}},{{0L,0x6510BFABL,0L,0x492788A2L},{0L,0x492788A2L,4L,2L},{9L,0x492788A2L,(-1L),0x492788A2L},{4L,0x6510BFABL,(-1L),0x07743C44L},{9L,0xDA3876E6L,4L,0x07743C44L},{0L,0x6510BFABL,0L,0x492788A2L}}};
static struct S0 *g_844 = &g_292[1][2][6].f1;
static const int8_t g_865 = 0x3BL;
static int8_t g_886[2] = {(-4L),(-4L)};
static uint8_t g_887 = 5UL;
static const int8_t ** const **g_932 = (void*)0;
static const int8_t ** const ***g_931 = &g_932;
static int8_t g_945 = 0x36L;
static uint8_t g_1078[3][6] = {{0xC1L,255UL,0xBDL,255UL,0xC1L,0xBDL},{255UL,0xC1L,0xBDL,0xC8L,0xC8L,0xBDL},{0xC8L,0xC8L,0xBDL,0xC1L,255UL,0xBDL}};
static int32_t g_1146 = 0L;
static const uint16_t *g_1266 = &g_94.f3;
static const uint16_t **g_1265 = &g_1266;



static uint64_t  func_1(void);
static const int32_t * func_26(int32_t * p_27, int32_t * p_28, int32_t * p_29);
static int32_t * func_30(int32_t  p_31, int32_t  p_32, int32_t * p_33);
static const int8_t  func_57(int32_t  p_58, int32_t *** p_59);
static int32_t *** func_60(union U4 * p_61, struct S0  p_62);
static union U4 * func_63(struct S1  p_64);
static int32_t *** func_67(int8_t  p_68, int32_t * const * p_69, uint64_t  p_70);
static int32_t * func_76(uint32_t  p_77);




static uint64_t  func_1(void)
{ 
    uint32_t l_7 = 18446744073709551614UL;
    int32_t *l_8[7];
    int i;
    for (i = 0; i < 7; i++)
        l_8[i] = &g_9[2];
    if ((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(g_6[0], l_7)), g_6[1])))
    { 
        int32_t l_10[5][7] = {{6L,(-1L),0xF7D26684L,(-1L),6L,0xE13CA4D9L,6L},{0xE6C8CAC3L,0x1F1E283DL,0x1F1E283DL,0xE6C8CAC3L,0x1F1E283DL,0x1F1E283DL,0xE6C8CAC3L},{0x43CC9F19L,(-1L),0x43CC9F19L,0x6D0C11E0L,6L,0x6D0C11E0L,0x43CC9F19L},{0xE6C8CAC3L,0xE6C8CAC3L,0xD4A1CF04L,0xE6C8CAC3L,0xE6C8CAC3L,0xD4A1CF04L,0xE6C8CAC3L},{6L,0x6D0C11E0L,0x43CC9F19L,(-1L),0x43CC9F19L,0x6D0C11E0L,6L}};
        int64_t l_11 = 0x1DD79339B8842B4CLL;
        uint64_t l_12 = 0xAFAF4B0596E72D3BLL;
        int i, j;
        l_8[5] = (void*)0;
        l_12--;
    }
    else
    { 
        int32_t l_21 = 0xD999CB54L;
        uint16_t l_1298 = 65534UL;
        for (l_7 = 0; (l_7 == 19); l_7 = safe_add_func_int8_t_s_s(l_7, 6))
        { 
            const uint32_t l_17 = 0xDC0328A1L;
            int32_t l_25 = 1L;
            if (l_17)
                break;
            for (g_18[0][1][4] = 0; (g_18[0][1][4] <= 0); g_18[0][1][4] = safe_add_func_uint64_t_u_u(g_18[0][1][4], 8))
            { 
                uint16_t l_22 = 65529UL;
                int32_t *l_1289 = &g_9[2];
                int32_t *l_1290 = (void*)0;
                const int32_t **l_1294 = (void*)0;
                const int32_t **l_1295 = (void*)0;
                const int32_t *l_1297 = (void*)0;
                const int32_t **l_1296 = &l_1297;
                ++l_22;
                for (l_22 = 0; (l_22 <= 2); l_22 += 1)
                { 
                    int i;
                    return g_9[l_22];
                }
                l_25 = g_18[0][5][6];
            }
            if (l_21)
                break;
            l_1298--;
        }
        for (g_258.f0 = 0; (g_258.f0 >= 2); g_258.f0 = safe_add_func_uint64_t_u_u(g_258.f0, 7))
        { 
            uint32_t l_1303[6] = {0UL,0UL,0UL,0UL,0UL,0UL};
            int i;
            ++l_1303[5];
        }
    }
    return g_413[3].f3;
}



static const int32_t * func_26(int32_t * p_27, int32_t * p_28, int32_t * p_29)
{ 
    uint8_t l_1291 = 0UL;
    l_1291--;
    return p_29;
}



static int32_t * func_30(int32_t  p_31, int32_t  p_32, int32_t * p_33)
{ 
    int32_t *l_52 = &g_9[1];
    int8_t *l_71 = (void*)0;
    int8_t *l_72[3];
    int32_t ****l_222 = &g_220;
    struct S1 l_223 = {-1L,2UL,0xEE80A6DDL,-2L};
    struct S0 l_265 = {-8L,0x3AB2666CL,-1L,0xB84CL};
    int64_t *l_1279 = &g_636;
    union U4 **l_1280 = &g_257;
    union U2 l_1287 = {3L};
    int32_t *l_1288 = &g_9[0];
    int i;
    for (i = 0; i < 3; i++)
        l_72[i] = &g_73;
    for (p_32 = 0; (p_32 < 22); p_32 = safe_add_func_int64_t_s_s(p_32, 6))
    { 
        int32_t *l_43 = &g_9[2];
        int32_t *l_44 = &g_45[0];
        int32_t **l_48[6][3][4] = {{{&l_44,(void*)0,&l_44,&l_43},{&l_43,&l_44,&l_44,&l_43},{&l_44,&l_43,&l_43,&l_44}},{{&l_43,(void*)0,&l_43,&l_43},{&l_44,&l_44,&l_44,(void*)0},{&l_43,&l_43,&l_44,&l_44}},{{&l_44,&l_44,&l_43,&l_44},{&l_44,&l_44,&l_44,&l_44},{&l_44,&l_43,&l_43,(void*)0}},{{(void*)0,&l_44,&l_43,&l_43},{&l_43,(void*)0,&l_43,&l_44},{&l_43,&l_43,&l_43,&l_43}},{{(void*)0,&l_44,&l_43,&l_43},{&l_44,(void*)0,&l_44,(void*)0},{&l_44,(void*)0,&l_43,(void*)0}},{{&l_44,(void*)0,&l_44,&l_43},{&l_43,&l_44,&l_44,&l_43},{&l_44,&l_43,&l_43,&l_44}}};
        int32_t ***l_47[5];
        int32_t **l_49 = &l_44;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_47[i] = &l_48[1][0][3];
        g_46 = ((*l_44) |= ((*l_43) = ((+((((void*)0 == &p_32) , (void*)0) != &g_9[2])) & 6UL)));
        l_49 = &p_33;
    }
    (*l_1280) = ((safe_rshift_func_uint8_t_u_s(((&p_32 == l_52) >= 0x9426L), ((safe_div_func_int64_t_s_s(((*l_1279) = (((safe_mod_func_int8_t_s_s(func_57(g_45[0], func_60(func_63(((((*l_52) = ((safe_div_func_uint64_t_u_u(((((*l_222) = func_67((g_73 = ((*l_52) |= (-8L))), g_74[0][1], g_18[0][1][4])) != (void*)0) | p_32), 3UL)) , 5L)) ^ 4294967292UL) , l_223)), l_265)), p_32)) & 0x35543EDE8440EA2BLL) || 0xBB8AL)), g_865)) == g_6[1]))) , (void*)0);
    (*g_75) = (safe_div_func_int32_t_s_s(2L, (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((l_1287 , ((*g_83) ^= (-1L))), 7)), 7))));
    return l_1288;
}



static const int8_t  func_57(int32_t  p_58, int32_t *** p_59)
{ 
    int8_t l_590 = 0x6DL;
    int8_t **l_591 = &g_83;
    uint32_t l_592 = 4294967291UL;
    int32_t ****l_607[2][3] = {{&g_220,&g_220,&g_220},{&g_220,&g_220,&g_220}};
    int16_t *l_608[3];
    struct S0 l_611 = {0L,1UL,2L,0xAC2EL};
    int8_t ***l_647 = &g_381;
    int8_t ****l_646 = &l_647;
    int16_t l_667 = (-9L);
    int32_t l_668 = 0x357E6A64L;
    union U4 *l_715 = &g_258;
    uint16_t l_739[1];
    int32_t l_741 = 0x0C07F2DBL;
    struct S0 l_760 = {-2L,6UL,-1L,65527UL};
    union U2 **l_770 = &g_457;
    int64_t l_801[2][1][4] = {{{0x5BFE1E7B4D0E9F73LL,0x5BFE1E7B4D0E9F73LL,0x5BFE1E7B4D0E9F73LL,0x5BFE1E7B4D0E9F73LL}},{{0x5BFE1E7B4D0E9F73LL,0x5BFE1E7B4D0E9F73LL,0x5BFE1E7B4D0E9F73LL,0x5BFE1E7B4D0E9F73LL}}};
    int8_t l_806 = 0x6FL;
    int8_t l_807 = 0x01L;
    struct S0 l_815 = {0xEE793DDDL,0x81BECE79L,0L,65527UL};
    struct S0 *l_842 = &g_413[3];
    struct S0 **l_843[1][6] = {{(void*)0,&l_842,&l_842,(void*)0,&l_842,&l_842}};
    uint64_t *l_847[3][2][1] = {{{&g_258.f1},{&g_547}},{{&g_258.f1},{&g_547}},{{&g_258.f1},{&g_547}}};
    uint32_t l_848 = 0xF261DD1AL;
    int64_t l_855 = 0L;
    uint8_t *l_856 = &g_359;
    int64_t l_885 = (-10L);
    int32_t l_900 = 0L;
    uint32_t l_954 = 18446744073709551608UL;
    struct S0 ***l_984 = &l_843[0][1];
    union U2 ***l_1015 = &g_456;
    int8_t l_1020 = 0x3EL;
    int8_t l_1032 = 1L;
    uint8_t l_1046 = 255UL;
    uint32_t l_1090 = 4294967286UL;
    int8_t ***l_1094 = &g_381;
    uint8_t l_1120[1];
    int8_t l_1162 = 0x53L;
    int32_t l_1163 = 0x3DFB05D8L;
    const struct S1 l_1165[6] = {{-6L,2UL,5UL,0xCFFE426AL},{-6L,2UL,5UL,0xCFFE426AL},{-6L,2UL,5UL,0xCFFE426AL},{-6L,2UL,5UL,0xCFFE426AL},{-6L,2UL,5UL,0xCFFE426AL},{-6L,2UL,5UL,0xCFFE426AL}};
    uint16_t **l_1269[2];
    uint8_t l_1278 = 0x00L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_608[i] = &g_87.f3;
    for (i = 0; i < 1; i++)
        l_739[i] = 0x33FCL;
    for (i = 0; i < 1; i++)
        l_1120[i] = 0xE2L;
    for (i = 0; i < 2; i++)
        l_1269[i] = &g_434;
    (*g_75) &= (safe_sub_func_int16_t_s_s(((((4L >= (~((((*g_380) != (l_590 , (void*)0)) < 0x028FADFAE78F3FA3LL) & ((l_591 == l_591) | 8L)))) >= l_592) | p_58) < l_592), (-4L)));
    if (l_590)
        goto lbl_857;
    if ((~(safe_div_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(0x37L, 2)) && (safe_mod_func_int8_t_s_s(((**l_591) ^= (safe_sub_func_int64_t_s_s((((!(!(((!((l_590 , l_590) & ((g_336 = (p_58 < ((l_607[0][0] == l_607[0][2]) && ((g_18[0][0][2] , p_58) | (*g_75))))) > p_58))) > g_413[3].f0) < g_18[0][1][4]))) ^ g_160) <= g_45[1]), p_58))), p_58))), g_292[1][2][6].f0))))
    { 
        int16_t l_612 = 0xCAB4L;
        int32_t *l_626 = &g_9[2];
        int64_t *l_633 = &g_46;
        int32_t *l_634 = (void*)0;
        int64_t *l_635 = &g_636;
        int8_t ***l_638 = &l_591;
        int8_t ****l_637 = &l_638;
        int64_t l_643 = (-6L);
        const uint32_t l_662 = 0xF095A5BAL;
        int16_t l_664 = 0x6D8EL;
        const union U3 *l_677 = &g_492[1][4][0];
        const union U3 **l_676 = &l_677;
        uint8_t l_689 = 255UL;
        uint32_t l_711 = 0xE208579CL;
        int32_t l_714 = (-1L);
        uint16_t l_743 = 0xCA67L;
        struct S0 l_761 = {1L,0xF2F27AA4L,-7L,0x15D5L};
        const union U4 l_767[4][2][4] = {{{{0xA5L},{0x13L},{0x13L},{0xA5L}},{{0x13L},{0xA5L},{0x13L},{0x13L}}},{{{0xA5L},{0xA5L},{0L},{0xA5L}},{{0xA5L},{0x13L},{0x13L},{0xA5L}}},{{{0x13L},{0xA5L},{0x13L},{0x13L}},{{0xA5L},{0xA5L},{0L},{0xA5L}}},{{{0xA5L},{0x13L},{0x13L},{0x13L}},{{0L},{0x13L},{0L},{0L}}}};
        int32_t l_782 = 0xE499C92BL;
        int32_t l_783 = 0x7E7278FCL;
        int32_t l_792 = (-9L);
        int32_t l_797 = (-7L);
        int32_t l_798 = 0xEB61CBDAL;
        int32_t l_799 = 0xA745B4D9L;
        int32_t l_800 = 0x8B802D26L;
        int32_t l_803 = 0x6D369B14L;
        int32_t l_804[6][3][5] = {{{6L,6L,(-1L),6L,6L},{0xF858077DL,6L,0xF858077DL,0xF858077DL,6L},{6L,0xF858077DL,0xF858077DL,6L,0xF858077DL}},{{6L,6L,(-1L),6L,6L},{0xF858077DL,6L,0xF858077DL,0xF858077DL,6L},{6L,0xF858077DL,0xF858077DL,6L,0xF858077DL}},{{6L,6L,(-1L),6L,6L},{0xF858077DL,6L,0xF858077DL,0xF858077DL,6L},{6L,0xF858077DL,0xF858077DL,6L,0xF858077DL}},{{6L,6L,(-1L),6L,6L},{0xF858077DL,6L,0xF858077DL,0xF858077DL,6L},{6L,0xF858077DL,0xF858077DL,6L,0xF858077DL}},{{6L,6L,(-1L),6L,6L},{0xF858077DL,6L,0xF858077DL,0xF858077DL,6L},{6L,0xF858077DL,0xF858077DL,6L,0xF858077DL}},{{6L,6L,(-1L),6L,6L},{0xF858077DL,6L,0xF858077DL,0xF858077DL,6L},{6L,0xF858077DL,0xF858077DL,6L,0xF858077DL}}};
        struct S0 l_818 = {0xB1FD3194L,0x92E34158L,-5L,0xD91DL};
        uint64_t *l_829 = &g_292[1][2][6].f2;
        int8_t l_830 = 0x2BL;
        uint64_t *l_831 = &g_87.f4;
        uint64_t *l_832 = (void*)0;
        uint64_t *l_833 = (void*)0;
        uint64_t *l_834 = &g_87.f4;
        uint64_t *l_835 = &g_87.f4;
        uint64_t *l_836[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_836[i] = &g_492[1][2][0].f2;
        (*g_75) ^= (safe_lshift_func_int16_t_s_u(p_58, ((*g_434) = ((l_611 , (((*g_83) = l_612) | ((((*g_257) , ((safe_sub_func_uint64_t_u_u((safe_add_func_int64_t_s_s((0xFFL >= (p_58 > l_612)), g_351[3][2].f3)), p_58)) || l_612)) ^ 0x1250L) || 0x650BF5FCL))) ^ (-1L)))));
    }
    else
    { 
        const int16_t l_839 = 0xEBDFL;
        return l_839;
    }
lbl_857:
    (*g_75) ^= (safe_add_func_uint8_t_u_u((((g_844 = ((*g_414) = l_842)) == (void*)0) || 0xF0L), ((safe_sub_func_int16_t_s_s(((((*g_434) ^= p_58) || 0x10F0L) , ((l_848++) <= ((((*g_434) = (((-1L) != ((((*l_856) ^= (safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((18446744073709551615UL ^ l_855), (*g_83))), p_58))) , (**l_770)) , 0xF5AE4B37L)) & g_351[3][2].f1)) , 1L) , (-1L)))), g_160)) || 0x42ECDA7DL)));
    for (l_592 = 0; (l_592 <= 2); l_592 += 1)
    { 
        int32_t l_859 = 0x9E987577L;
        int32_t ** const l_860 = &g_75;
        struct S0 l_863 = {-4L,0x17594196L,1L,65527UL};
        uint64_t *l_902[1];
        uint32_t *l_906 = &g_86;
        struct S1 l_913 = {0x7865FEF9L,4294967294UL,0x9F027BB6L,0x479A765EL};
        uint32_t l_924[4];
        uint16_t l_933 = 0xE91AL;
        const int8_t *l_936 = (void*)0;
        int32_t l_950 = 0xC706992CL;
        int32_t l_952 = 0L;
        int32_t l_953[1][2][5] = {{{0xE3388BD4L,0xE3388BD4L,0xE3388BD4L,0xE3388BD4L,0xE3388BD4L},{0L,0L,0L,0L,0L}}};
        uint8_t l_978 = 249UL;
        int32_t *** const *l_979 = &g_220;
        int32_t l_1014 = 0xB9BB04B6L;
        uint32_t l_1016 = 0xEEDEA272L;
        uint16_t l_1018[1];
        uint32_t l_1029[1][3];
        int8_t ****l_1067 = &l_647;
        uint8_t **l_1097[3][2][7];
        union U2 l_1133[5] = {{6L},{6L},{6L},{6L},{6L}};
        int32_t l_1215 = 0x94C6574AL;
        uint64_t l_1216 = 18446744073709551615UL;
        union U3 l_1256 = {0x5DE2L};
        uint16_t l_1277 = 0x568EL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_902[i] = &g_242;
        for (i = 0; i < 4; i++)
            l_924[i] = 18446744073709551609UL;
        for (i = 0; i < 1; i++)
            l_1018[i] = 0x6933L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_1029[i][j] = 0x91675BBCL;
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 7; k++)
                    l_1097[i][j][k] = &l_856;
            }
        }
        g_9[l_592] = ((g_246[1][3] >= p_58) != ((((p_58 != ((safe_unary_minus_func_uint8_t_u((l_859 , p_58))) & ((l_860 != l_860) <= 0x162D2F47L))) ^ 0x9AL) | 0x70B9L) , 65527UL));
    }
    l_1278 = ((*g_75) = (-1L));
    return p_58;
}



static int32_t *** func_60(union U4 * p_61, struct S0  p_62)
{ 
    int64_t l_283 = 1L;
    int32_t ***l_305[1][5][1] = {{{(void*)0},{&g_221[0][2][1]},{(void*)0},{&g_221[0][2][1]},{(void*)0}}};
    const struct S0 l_408[3] = {{0x24A99931L,0UL,6L,0xFC95L},{0x24A99931L,0UL,6L,0xFC95L},{0x24A99931L,0UL,6L,0xFC95L}};
    struct S0 **l_417 = &g_415[0][4][5];
    int32_t l_432 = (-8L);
    const union U3 *l_491[6];
    int16_t l_517 = 0xCA66L;
    int32_t l_522[1][5] = {{2L,2L,2L,2L,2L}};
    uint8_t *l_530 = (void*)0;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_491[i] = &g_492[1][2][0];
    for (g_87.f0 = (-11); (g_87.f0 >= 8); g_87.f0 = safe_add_func_int64_t_s_s(g_87.f0, 9))
    { 
        int32_t l_275 = 0x9329CD43L;
        union U2 l_276 = {0xA0F27DD6L};
        struct S1 l_304 = {0xEC7C2ADEL,0xC6A26EEEL,18446744073709551614UL,0L};
        int32_t l_315 = 0xAA90B541L;
        int32_t l_335 = 0x147F1CFAL;
        union U3 l_365[6][2][1] = {{{{7L}},{{7L}}},{{{0x93C8L}},{{4L}}},{{{0x93C8L}},{{7L}}},{{{7L}},{{0x93C8L}}},{{{4L}},{{0x93C8L}}},{{{7L}},{{7L}}}};
        int8_t l_386 = 0xC8L;
        const union U4 l_391 = {1L};
        int8_t ***l_392 = &g_381;
        int32_t ***l_430 = &g_221[6][0][1];
        int32_t l_440 = 0L;
        int32_t l_443 = 0x5369AE72L;
        int32_t l_444 = (-6L);
        int32_t l_445 = 0x66497F61L;
        const union U2 **l_458 = (void*)0;
        int64_t l_459 = 6L;
        int32_t l_509 = 0L;
        uint8_t *l_528 = &g_359;
        int8_t l_557 = 0xD0L;
        int32_t l_564 = 1L;
        int32_t l_565 = 0x206AF9FBL;
        int32_t l_566 = 0xBA657E45L;
        int32_t l_567[6][1][5] = {{{0x4F7B5A59L,0xB576D0ADL,0xB576D0ADL,0x4F7B5A59L,0xB576D0ADL}},{{1L,1L,(-7L),1L,1L}},{{0xB576D0ADL,0x4F7B5A59L,0xB576D0ADL,0xB576D0ADL,0x4F7B5A59L}},{{1L,0xD7AEC3B7L,0xD7AEC3B7L,1L,0xD7AEC3B7L}},{{0x4F7B5A59L,0x4F7B5A59L,3L,0x4F7B5A59L,0x4F7B5A59L}},{{0xD7AEC3B7L,1L,0xD7AEC3B7L,0xD7AEC3B7L,1L}}};
        int i, j, k;
        for (g_91 = (-26); (g_91 == 35); g_91++)
        { 
            uint32_t l_272 = 18446744073709551615UL;
            int32_t l_277 = 0L;
            union U2 * const l_284 = (void*)0;
            union U3 *l_291 = &g_292[1][2][6];
            struct S0 l_354 = {0xF53882F0L,18446744073709551607UL,0L,65535UL};
            struct S1 l_364 = {0x03EADAD5L,0x85A3A27FL,1UL,-1L};
            union U4 l_373[2] = {{-9L},{-9L}};
            int i;
            l_277 &= (safe_rshift_func_int16_t_s_s(l_272, (safe_rshift_func_uint16_t_u_s((l_275 >= g_6[0]), (l_276 , 0xF6BBL)))));
            for (g_242 = 0; (g_242 < 52); g_242 = safe_add_func_uint16_t_u_u(g_242, 1))
            { 
                int8_t l_280 = 9L;
                union U3 **l_290[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_290[i] = &g_289;
                if (l_280)
                    break;
                for (p_62.f3 = (-28); (p_62.f3 == 18); p_62.f3 = safe_add_func_int16_t_s_s(p_62.f3, 2))
                { 
                    union U2 **l_285 = (void*)0;
                    union U2 *l_287 = (void*)0;
                    union U2 **l_286[7][6] = {{&l_287,&l_287,&l_287,&l_287,&l_287,&l_287},{&l_287,&l_287,&l_287,&l_287,&l_287,&l_287},{&l_287,&l_287,&l_287,&l_287,&l_287,&l_287},{&l_287,&l_287,&l_287,&l_287,&l_287,&l_287},{&l_287,&l_287,&l_287,&l_287,&l_287,&l_287},{&l_287,&l_287,&l_287,&l_287,&l_287,&l_287},{&l_287,&l_287,&l_287,&l_287,&l_287,&l_287}};
                    union U2 **l_288 = &l_287;
                    int i, j;
                    l_283 = 0L;
                    (*l_288) = l_284;
                    if (l_280)
                        break;
                }
                l_291 = g_289;
            }
            for (g_94.f3 = 0; (g_94.f3 < 43); g_94.f3++)
            { 
                int32_t l_308 = 0xF425049EL;
                int32_t l_309[6] = {0L,0L,1L,0L,0L,1L};
                int32_t ****l_321 = &g_220;
                int32_t *****l_320 = &l_321;
                uint8_t *l_357 = &g_160;
                uint8_t *l_358 = &g_359;
                union U3 l_378 = {0xC470L};
                int i;
                if ((l_309[1] = ((safe_lshift_func_int16_t_s_s((((((safe_sub_func_uint32_t_u_u(p_62.f2, ((safe_div_func_int16_t_s_s((((((((((!(p_62.f1 != (safe_sub_func_uint8_t_u_u(((l_276.f3 , (l_304 , (void*)0)) == l_305[0][1][0]), ((*g_83) = (safe_sub_func_uint64_t_u_u(1UL, p_62.f2))))))) , g_91) <= l_276.f3) ^ l_308) & 0L) || p_62.f2) | g_94.f1) | 65535UL) > g_242), p_62.f0)) <= l_277))) & l_276.f3) , (*g_257)) , p_62.f3) | p_62.f2), 1)) < 0x9337L)))
                { 
                    uint16_t *l_334[5][4][7] = {{{&g_292[1][2][6].f1.f3,&g_91,(void*)0,&g_91,&g_292[1][2][6].f1.f3,(void*)0,(void*)0},{(void*)0,&g_91,&g_94.f3,(void*)0,&g_94.f3,&g_91,(void*)0},{&g_91,(void*)0,&g_91,&g_94.f3,(void*)0,&g_94.f3,&g_91},{(void*)0,(void*)0,(void*)0,&g_292[1][2][6].f1.f3,&g_91,(void*)0,&g_91}},{{&g_292[1][2][6].f1.f3,&g_91,&g_91,&g_292[1][2][6].f1.f3,&g_94.f3,&g_91,&g_292[1][2][6].f1.f3},{&g_91,&g_91,&g_94.f3,&g_94.f3,&g_91,&g_91,&g_91},{&g_91,&g_292[1][2][6].f1.f3,(void*)0,(void*)0,(void*)0,(void*)0,&g_292[1][2][6].f1.f3},{&g_91,&g_91,&g_91,&g_91,&g_94.f3,&g_94.f3,&g_91}},{{&g_91,&g_292[1][2][6].f1.f3,&g_91,&g_94.f3,&g_292[1][2][6].f1.f3,&g_91,&g_91},{&g_292[1][2][6].f1.f3,&g_91,(void*)0,&g_91,&g_292[1][2][6].f1.f3,(void*)0,(void*)0},{(void*)0,&g_91,&g_94.f3,(void*)0,&g_94.f3,&g_91,(void*)0},{&g_91,(void*)0,&g_91,&g_94.f3,(void*)0,&g_94.f3,&g_91}},{{(void*)0,(void*)0,(void*)0,&g_292[1][2][6].f1.f3,&g_91,(void*)0,&g_91},{&g_292[1][2][6].f1.f3,&g_91,&g_91,&g_292[1][2][6].f1.f3,&g_94.f3,&g_91,&g_292[1][2][6].f1.f3},{&g_91,&g_91,&g_94.f3,&g_94.f3,&g_91,&g_91,&g_91},{&g_91,&g_292[1][2][6].f1.f3,(void*)0,(void*)0,(void*)0,(void*)0,&g_292[1][2][6].f1.f3}},{{&g_91,&g_91,&g_91,&g_91,&g_94.f3,&g_94.f3,&g_91},{&g_91,&g_292[1][2][6].f1.f3,&g_91,&g_94.f3,&g_292[1][2][6].f1.f3,&g_91,&g_91},{&g_292[1][2][6].f1.f3,&g_91,(void*)0,&g_91,&g_292[1][2][6].f1.f3,(void*)0,(void*)0},{(void*)0,&g_91,&g_94.f3,(void*)0,&g_94.f3,&g_91,(void*)0}}};
                    int32_t l_337 = 5L;
                    int32_t ***l_338[3];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_338[i] = &g_221[2][1][2];
                    l_309[1] ^= p_62.f3;
                    if (l_309[4])
                        continue;
                    l_337 = (!(safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((0xA9L >= (--g_160)), (safe_mul_func_int16_t_s_s(l_308, (1L & (l_320 == g_322[2])))))), (safe_div_func_uint16_t_u_u((((g_336 = (l_335 = (g_292[1][2][6].f1.f3 = (((l_315 ^= (safe_mul_func_int8_t_s_s(((0xC2E6L ^ (g_333 != &l_277)) & 0x67L), p_62.f2))) < 0UL) , g_87.f0)))) >= p_62.f1) && g_18[0][1][4]), l_276.f3)))));
                    if (p_62.f0)
                        continue;
                    return l_338[2];
                }
                else
                { 
                    int8_t l_343 = 3L;
                    struct S0 *l_353 = &g_94;
                    struct S0 **l_352 = &l_353;
                    l_277 = (safe_mul_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(((((l_343 <= (+(9L & (0x6949954CL < ((safe_lshift_func_uint16_t_u_s((g_94.f1 != ((safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s((g_351[3][2] , p_62.f3), (0x4D080039L == 0x9EF50F31L))), 247UL)) , l_276.f0)), g_160)) == 6UL))))) <= p_62.f2) != l_343) != g_9[2]), p_62.f3)) , 0x3A1EL), g_87.f1));
                    (*l_352) = &g_94;
                }
                g_292[1][2][6].f1 = l_354;
                if ((g_336 , ((((safe_mul_func_uint16_t_u_u((((*l_358) = ((*l_357) &= p_62.f3)) || (--(*l_357))), (((0L < (&g_292[1][2][6] != ((safe_rshift_func_uint8_t_u_s((l_364 , (l_365[5][1][0] , (safe_sub_func_uint16_t_u_u(((+((l_304.f0 , &g_73) != &g_73)) && g_87.f1), l_364.f1)))), p_62.f0)) , &l_365[5][1][0]))) & 0x49D123BFL) <= g_73))) || 0x2D24L) , &l_277) == (void*)0)))
                { 
                    int8_t l_370 = 0x72L;
                    int32_t l_379 = 1L;
                    l_379 ^= (l_315 = (l_335 = (g_9[0] && (((*g_83) = ((~(l_370 = 0x103D78EFL)) , ((p_62.f2 == ((safe_rshift_func_int16_t_s_s((l_373[1] , (safe_mod_func_uint32_t_u_u((g_94 , (safe_mul_func_int16_t_s_s((0x23L < (l_378 , 0xEEL)), g_9[2]))), 6UL))), 9)) != 0xD768D8A2L)) | 9L))) <= 1UL))));
                }
                else
                { 
                    int8_t ***l_383[3];
                    int8_t ****l_382 = &l_383[2];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_383[i] = &g_381;
                    (*l_382) = g_380;
                    if (l_276.f1)
                        break;
                }
            }
        }
        l_335 ^= p_62.f3;
        l_315 = (((safe_mul_func_uint16_t_u_u(l_386, (--p_62.f3))) & (safe_rshift_func_uint16_t_u_u((0xD2D56263L < (p_62.f1 ^ 1L)), 7))) && ((l_391 , l_392) != l_392));
    }
    return l_305[0][1][0];
}



static union U4 * func_63(struct S1  p_64)
{ 
    int32_t l_224 = 6L;
    uint16_t l_243 = 0x85CEL;
    int32_t l_245 = 0xA915E286L;
    int32_t ****l_247[2][4] = {{&g_220,&g_220,&g_220,&g_220},{&g_220,&g_220,(void*)0,&g_220}};
    const union U3 *l_251 = (void*)0;
    uint32_t l_253 = 0xB1646E88L;
    uint32_t l_254[5];
    union U4 *l_259 = (void*)0;
    uint16_t l_260 = 0x56FFL;
    int32_t *l_261 = &l_245;
    uint32_t l_262 = 0x275890F2L;
    int i, j;
    for (i = 0; i < 5; i++)
        l_254[i] = 0x6D05DBCDL;
    if (l_224)
    { 
        uint16_t l_231 = 1UL;
        uint8_t *l_239 = &g_160;
        uint16_t *l_244[4];
        int32_t *****l_248 = &l_247[0][0];
        int32_t ****l_249 = (void*)0;
        int32_t l_250 = 0L;
        const union U3 **l_252[6];
        int i;
        for (i = 0; i < 4; i++)
            l_244[i] = (void*)0;
        for (i = 0; i < 6; i++)
            l_252[i] = &l_251;
        l_250 &= ((safe_rshift_func_uint8_t_u_s(((l_249 = ((*l_248) = ((((safe_add_func_int64_t_s_s((p_64.f2 > ((l_245 = (safe_rshift_func_uint16_t_u_s(l_231, ((l_231 && ((!(((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((0x1D7C01F5L ^ (safe_add_func_uint8_t_u_u(((*l_239) |= g_94.f2), (safe_div_func_uint64_t_u_u((((l_224 && (g_242 & l_243)) , 0x8467L) & p_64.f2), 1UL))))), g_94.f0)), l_231)) , (-1L)) && g_94.f3)) >= 0xC3F0EF3CL)) && 4294967288UL)))) >= g_94.f0)), 0xE21D087DD8F9AED1LL)) == 0x5E0398F4L) | g_246[1][3]) , l_247[1][1]))) != &g_195), 6)) ^ p_64.f2);
        l_250 ^= 0x843BB297L;
        l_251 = l_251;
        l_254[0] = l_253;
        for (g_46 = 1; (g_46 <= 5); g_46 += 1)
        { 
            int8_t l_256 = 5L;
            for (g_87.f3 = 2; (g_87.f3 >= 0); g_87.f3 -= 1)
            { 
                int i;
                if (g_9[g_87.f3])
                    break;
            }
            if (p_64.f3)
                continue;
            for (g_87.f3 = 3; (g_87.f3 >= 0); g_87.f3 -= 1)
            { 
                struct S0 *l_255 = &g_94;
                int i, j;
                (*l_255) = g_94;
                if (l_256)
                    continue;
                for (g_94.f0 = 4; (g_94.f0 >= 0); g_94.f0 -= 1)
                { 
                    return g_257;
                }
            }
        }
    }
    else
    { 
        return l_259;
    }
    l_260 = p_64.f3;
    l_261 = func_76(g_160);
    ++l_262;
    return l_259;
}



static int32_t *** func_67(int8_t  p_68, int32_t * const * p_69, uint64_t  p_70)
{ 
    const int64_t l_78 = 0xDDAE05CF484424FDLL;
    int8_t *l_79 = &g_73;
    int8_t **l_80 = (void*)0;
    int8_t **l_81 = (void*)0;
    int8_t **l_82[4];
    int8_t *l_84 = &g_73;
    int8_t ***l_88 = &l_81;
    uint16_t *l_89 = (void*)0;
    uint16_t *l_90 = &g_91;
    int32_t **l_201[3];
    int32_t l_202 = 0L;
    uint16_t l_203 = 0x9F67L;
    int64_t *l_206 = &g_46;
    uint16_t l_216 = 1UL;
    uint64_t l_217 = 1UL;
    uint32_t l_218 = 0x8D7730AEL;
    int32_t ***l_219 = &l_201[1];
    int i;
    for (i = 0; i < 4; i++)
        l_82[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_201[i] = (void*)0;
    g_75 = func_76((((((l_78 == ((g_86 = ((g_83 = l_79) == (g_85[2][5] = l_84))) && ((g_87 , &l_84) == ((*l_88) = &l_79)))) < ((((*l_90) = (((1UL && g_73) || p_70) == g_46)) || g_45[4]) & g_9[2])) & p_68) <= 0L) , 1UL));
    l_203--;
    l_218 = ((g_91 || ((*l_206) ^= ((void*)0 == (*g_195)))) <= (safe_mod_func_uint16_t_u_u((+g_86), ((((safe_sub_func_uint8_t_u_u((safe_div_func_int32_t_s_s((((l_216 = ((g_9[0] , (safe_add_func_uint32_t_u_u(p_68, (g_75 == g_75)))) < 0x4BC6L)) , l_217) > g_6[0]), p_70)), p_70)) > g_160) <= p_70) ^ 0x2C3FL))));
    return g_220;
}



static int32_t * func_76(uint32_t  p_77)
{ 
    struct S0 l_92 = {0x4166F292L,0xA71AB258L,0xFDAF309DL,0x6109L};
    struct S0 *l_93[4];
    int8_t l_107 = 0xF7L;
    struct S1 l_110 = {0x11E2AE17L,0x8793E187L,0x8202B69CL,-1L};
    int32_t **l_115 = (void*)0;
    int32_t ***l_114 = &l_115;
    int32_t l_133 = 0x8B6C5C63L;
    int32_t l_134 = 0x2B00AC53L;
    int32_t l_135 = 0L;
    int32_t l_136 = 0x3CC42DB4L;
    int32_t l_137[5] = {0x8B0955FAL,0x8B0955FAL,0x8B0955FAL,0x8B0955FAL,0x8B0955FAL};
    int64_t l_138[3];
    uint16_t *l_156[3];
    union U3 l_169[1] = {{-9L}};
    uint32_t l_186 = 0x3BD5DAF3L;
    int i;
    for (i = 0; i < 4; i++)
        l_93[i] = &l_92;
    for (i = 0; i < 3; i++)
        l_138[i] = (-1L);
    for (i = 0; i < 3; i++)
        l_156[i] = &g_94.f3;
lbl_191:
    g_94 = l_92;
    for (g_87.f1 = 0; g_87.f1 < 4; g_87.f1 += 1)
    {
        l_93[g_87.f1] = &g_94;
    }
    if (((safe_sub_func_int8_t_s_s(0x77L, (safe_mod_func_uint8_t_u_u((((0x8F8DL >= 1L) >= (safe_div_func_int64_t_s_s(((((safe_lshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u(((l_107 == ((safe_rshift_func_uint16_t_u_s((l_110 , ((~((safe_sub_func_int64_t_s_s(((void*)0 != l_114), g_94.f2)) <= g_9[2])) && 0x82FDL)), g_73)) ^ 0x61L)) || 0L), 65526UL)), 15)) || 4294967294UL) , p_77) && p_77), g_94.f1))) < (*g_83)), (-1L))))) , p_77))
    { 
        uint32_t l_122 = 0UL;
        int32_t *l_125 = &g_9[2];
        int32_t *l_126 = &g_9[2];
        int32_t *l_127 = &g_9[2];
        int32_t *l_128 = &g_9[2];
        int32_t *l_129 = &g_9[0];
        int32_t l_130 = 0x47C546E7L;
        int32_t *l_131 = (void*)0;
        int32_t *l_132[7][3][5] = {{{(void*)0,&g_18[0][1][4],&g_18[0][3][4],&l_130,(void*)0},{(void*)0,(void*)0,&g_45[3],(void*)0,&g_9[2]},{&g_18[0][5][5],&g_18[0][3][4],&g_18[0][5][5],(void*)0,&g_18[0][5][5]}},{{&g_18[0][5][5],&g_18[0][5][5],&l_130,(void*)0,&g_18[0][3][4]},{&g_18[0][5][5],&g_9[2],&g_18[0][3][4],&g_45[2],&g_45[3]},{&g_18[0][1][4],&l_130,&g_18[0][3][1],&g_9[1],(void*)0}},{{(void*)0,&g_9[2],&g_9[2],(void*)0,&g_18[0][1][4]},{&g_45[0],&g_18[0][5][5],&g_9[2],&g_18[0][3][4],&g_45[2]},{&g_18[0][3][4],&g_45[0],&g_18[0][3][1],&g_18[0][1][4],&g_9[2]}},{{&l_130,&g_45[0],&g_18[0][3][4],&g_18[0][3][4],&g_45[0]},{&g_45[3],(void*)0,&l_130,(void*)0,&g_45[0]},{&g_45[0],(void*)0,&g_18[0][5][5],&g_9[1],&g_9[2]}},{{(void*)0,&g_9[1],(void*)0,&g_45[2],&g_45[2]},{&g_45[0],&l_130,&g_45[0],(void*)0,&g_18[0][1][4]},{&g_45[3],&l_130,&g_18[0][1][4],(void*)0,(void*)0}},{{&l_130,&g_9[1],&g_45[2],&g_18[0][5][5],&g_45[3]},{&g_18[0][3][4],(void*)0,&g_18[0][1][4],(void*)0,&g_18[0][3][4]},{&g_45[0],(void*)0,&g_45[0],(void*)0,&g_18[0][5][5]}},{{(void*)0,&g_45[0],(void*)0,&g_18[0][5][5],&g_18[0][3][1]},{&g_18[0][1][4],&g_45[0],&g_18[0][5][5],(void*)0,&g_18[0][5][5]},{&g_18[0][5][5],&g_18[0][5][5],&l_130,(void*)0,&g_18[0][3][4]}}};
        int8_t l_139 = (-1L);
        int16_t l_140 = 0xFB89L;
        uint16_t l_141 = 0x250DL;
        int i, j, k;
        for (l_92.f1 = 0; (l_92.f1 > 51); l_92.f1 = safe_add_func_int64_t_s_s(l_92.f1, 1))
        { 
            for (g_73 = 0; (g_73 < (-23)); g_73--)
            { 
                int32_t *l_120 = &g_9[2];
                int32_t *l_121[5][4] = {{&g_18[0][1][4],&g_18[0][0][2],&g_18[0][0][2],&g_18[0][1][4]},{&g_18[0][0][2],&g_18[0][1][4],&g_18[0][0][2],&g_18[0][0][2]},{&g_18[0][1][4],&g_18[0][1][4],&g_9[1],&g_18[0][1][4]},{&g_18[0][1][4],&g_18[0][0][2],&g_18[0][0][2],&g_18[0][1][4]},{&g_18[0][0][2],&g_18[0][1][4],&g_18[0][0][2],&g_18[0][0][2]}};
                int i, j;
                l_122++;
            }
        }
        ++l_141;
    }
    else
    { 
        int32_t l_155[3];
        const int32_t **l_170 = (void*)0;
        uint64_t *l_173 = &g_87.f4;
        int32_t *l_174 = &l_133;
        int32_t l_175[4][6][5] = {{{0xABC809D4L,0x75A12366L,0x75A12366L,0xABC809D4L,(-1L)},{0L,(-1L),(-8L),0x27A97B43L,0x55DCA3CAL},{0x64D664E4L,0x9D20FDB9L,0L,0x85D44CC3L,0xACFC9155L},{0L,0x55DCA3CAL,0x8CE79D49L,0x27A97B43L,0x64D664E4L},{0xC646956FL,0x5C780974L,1L,0xABC809D4L,0x27A97B43L},{0x81CBB8D6L,4L,1L,0xD969002EL,(-8L)}},{{1L,(-1L),0xFCC74424L,(-9L),0L},{0x33826AFAL,(-1L),0xABC809D4L,8L,0x1E62006AL},{9L,4L,(-8L),4L,9L},{(-4L),0x5C780974L,6L,0L,(-8L)},{1L,0x55DCA3CAL,0xD969002EL,(-1L),0L},{0x75A12366L,0x9D20FDB9L,0x27A97B43L,0x5C780974L,(-8L)}},{{0xFCC74424L,(-1L),4L,0xCA55430AL,9L},{(-8L),0x75A12366L,0xC646956FL,0x8CE79D49L,0x1E62006AL},{(-8L),0L,(-4L),0x88C8FEF7L,0L},{0L,(-1L),(-4L),0x1E62006AL,0x85D44CC3L},{(-8L),1L,0x27A97B43L,0x27A97B43L,1L},{0xCC484957L,(-8L),0x55DCA3CAL,(-4L),(-1L)}},{{(-1L),0x18D2C756L,1L,0xFCC74424L,0x8CE79D49L},{0L,4L,6L,0x18D2C756L,0x1E62006AL},{(-1L),0x88C8FEF7L,0xACFC9155L,0L,(-1L)},{0xCC484957L,0L,0x85D44CC3L,0x34420FCEL,0x64D664E4L},{(-8L),1L,0x64D664E4L,0x85D44CC3L,(-8L)},{1L,0xACFC9155L,(-4L),0x85D44CC3L,0x88C8FEF7L}}};
        int32_t *l_176 = &l_175[3][4][2];
        int32_t *l_177 = &g_9[2];
        int32_t *l_178 = &l_136;
        int32_t *l_179 = &l_134;
        int32_t *l_180 = &l_133;
        int32_t *l_181 = &l_136;
        int32_t *l_182 = &l_175[3][4][2];
        int32_t *l_183 = &g_9[2];
        int32_t *l_184[5];
        int8_t l_185[4][5][6] = {{{0x44L,(-9L),0x44L,(-2L),(-2L),0x44L},{0x7EL,0x7EL,(-2L),4L,(-2L),0x7EL},{(-2L),(-9L),4L,4L,(-9L),(-2L)},{0x7EL,(-2L),4L,(-2L),0x7EL,0x7EL},{0x44L,(-2L),(-2L),0x44L,(-9L),0x44L}},{{0x44L,(-9L),0x44L,(-2L),(-2L),0x44L},{0x7EL,0x7EL,(-2L),4L,(-2L),0x7EL},{(-2L),(-9L),4L,4L,(-9L),(-2L)},{0x7EL,(-2L),4L,(-2L),0x7EL,0x7EL},{0x44L,(-2L),(-2L),0x44L,(-9L),0x44L}},{{0x44L,(-9L),0x44L,(-2L),(-2L),0x44L},{0x7EL,0x7EL,(-2L),4L,(-2L),0x7EL},{(-2L),(-9L),4L,4L,(-9L),(-2L)},{0x7EL,(-2L),4L,(-2L),0x7EL,0x7EL},{0x44L,(-2L),(-2L),0x44L,(-9L),0x44L}},{{0x44L,(-9L),0x44L,(-2L),(-2L),0x44L},{0x7EL,0x7EL,(-2L),4L,(-2L),0x7EL},{(-2L),(-9L),4L,4L,(-9L),(-2L)},{0x7EL,(-2L),4L,(-2L),0x7EL,0x7EL},{0x44L,(-2L),(-2L),0x44L,(-9L),0x44L}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_155[i] = 1L;
        for (i = 0; i < 5; i++)
            l_184[i] = (void*)0;
        for (g_87.f4 = 9; (g_87.f4 == 25); g_87.f4++)
        { 
            const struct S0 *l_152 = &g_94;
            uint8_t *l_159 = &g_160;
            int32_t l_163 = (-5L);
            uint32_t *l_164 = &l_110.f1;
            int32_t *l_165[1][4][3] = {{{&g_9[0],&g_9[0],&g_9[0]},{&l_133,&l_133,&l_133},{&g_9[0],&g_9[0],&g_9[0]},{&l_133,&l_133,&l_133}}};
            int i, j, k;
            l_133 |= (safe_sub_func_int8_t_s_s((((*l_164) = ((safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((l_136 <= (l_152 == &g_94)), (((safe_sub_func_uint64_t_u_u((l_155[1] , g_9[2]), (l_156[0] == (((safe_mul_func_uint8_t_u_u((--(*l_159)), ((void*)0 != &g_75))) < 0x810F85DE73643803LL) , &g_91)))) , g_91) < l_163))), 0x4FL)) == 0x7DC6C219L)) && 4294967293UL), 0x35L));
            if (p_77)
                break;
        }
        (*l_174) = ((safe_unary_minus_func_uint32_t_u((p_77 | (safe_add_func_uint16_t_u_u(((((*l_173) = (((g_91 |= ((l_169[0] , &g_91) == l_156[2])) > ((void*)0 == l_170)) , ((safe_div_func_uint16_t_u_u(g_18[0][2][5], 65529UL)) && 0UL))) != p_77) || (*g_75)), 0x8293L))))) < 0x6977L);
        l_186++;
        for (g_91 = 0; (g_91 < 10); g_91 = safe_add_func_uint64_t_u_u(g_91, 6))
        { 
            int8_t l_196 = (-4L);
            int32_t *l_197[5];
            int i;
            for (i = 0; i < 5; i++)
                l_197[i] = &g_9[1];
            for (l_186 = 0; (l_186 <= 4); l_186 += 1)
            { 
                int i, j;
                if ((*l_174))
                { 
                    int32_t *l_192 = &l_133;
                    if (p_77)
                        break;
                    if (p_77)
                        continue;
                    if (g_94.f2)
                        goto lbl_191;
                    if (g_73)
                        goto lbl_191;
                    return &g_45[1];
                }
                else
                { 
                    int32_t * const **l_194[3][6][4] = {{{(void*)0,&g_74[5][0],&g_74[l_186][l_186],&g_74[5][0]},{&g_74[5][0],(void*)0,(void*)0,&g_74[5][0]},{(void*)0,&g_74[5][0],&g_74[l_186][l_186],&g_74[l_186][l_186]},{&g_74[0][1],&g_74[0][1],&g_74[l_186][l_186],(void*)0},{&g_74[0][1],&g_74[l_186][l_186],&g_74[l_186][l_186],(void*)0},{(void*)0,(void*)0,(void*)0,&g_74[l_186][l_186]}},{{&g_74[l_186][l_186],(void*)0,&g_74[0][1],(void*)0},{(void*)0,&g_74[l_186][l_186],&g_74[l_186][l_186],(void*)0},{(void*)0,(void*)0,&g_74[l_186][l_186],&g_74[l_186][l_186]},{(void*)0,&g_74[l_186][l_186],&g_74[0][1],&g_74[l_186][l_186]},{&g_74[l_186][l_186],&g_74[l_186][l_186],(void*)0,&g_74[l_186][l_186]},{(void*)0,&g_74[l_186][l_186],&g_74[l_186][l_186],&g_74[l_186][l_186]}},{{(void*)0,(void*)0,&g_74[0][1],(void*)0},{(void*)0,&g_74[l_186][l_186],&g_74[l_186][l_186],(void*)0},{(void*)0,(void*)0,(void*)0,&g_74[l_186][l_186]},{&g_74[l_186][l_186],(void*)0,&g_74[0][1],(void*)0},{(void*)0,&g_74[l_186][l_186],&g_74[l_186][l_186],(void*)0},{(void*)0,(void*)0,&g_74[l_186][l_186],&g_74[l_186][l_186]}}};
                    int32_t * const ***l_193[5][5] = {{&l_194[2][4][3],&l_194[2][4][3],&l_194[2][4][3],&l_194[2][4][3],&l_194[2][4][3]},{&l_194[0][4][3],(void*)0,&l_194[0][4][3],&l_194[0][4][3],(void*)0},{&l_194[2][4][3],&l_194[2][4][3],&l_194[2][4][3],&l_194[2][4][3],&l_194[2][4][3]},{(void*)0,(void*)0,&l_194[2][4][3],(void*)0,(void*)0},{&l_194[2][4][3],&l_194[2][4][3],&l_194[2][4][3],&l_194[2][4][3],&l_194[2][4][3]}};
                    int i, j, k;
                    g_195 = &g_74[5][0];
                    if (l_196)
                        break;
                    if ((*g_75))
                        break;
                }
                l_197[4] = l_197[4];
                for (l_92.f0 = 1; (l_92.f0 <= 4); l_92.f0 += 1)
                { 
                    int8_t l_200[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_200[i] = 0x04L;
                    (*l_177) ^= (l_184[l_186] != g_75);
                    (*l_180) |= (p_77 | (safe_lshift_func_int16_t_s_u(l_200[0], 0)));
                }
            }
        }
    }
    return &g_45[1];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_6[i], "g_6[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_9[i], "g_9[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_18[i][j][k], "g_18[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_45[i], "g_45[i]", print_hash_value);

    }
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_87.f0, "g_87.f0", print_hash_value);
    transparent_crc(g_87.f1, "g_87.f1", print_hash_value);
    transparent_crc(g_87.f3, "g_87.f3", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_94.f0, "g_94.f0", print_hash_value);
    transparent_crc(g_94.f1, "g_94.f1", print_hash_value);
    transparent_crc(g_94.f2, "g_94.f2", print_hash_value);
    transparent_crc(g_94.f3, "g_94.f3", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_246[i][j], "g_246[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_258.f0, "g_258.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_292[i][j][k].f0, "g_292[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_336, "g_336", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_351[i][j].f0, "g_351[i][j].f0", print_hash_value);
            transparent_crc(g_351[i][j].f1, "g_351[i][j].f1", print_hash_value);
            transparent_crc(g_351[i][j].f2, "g_351[i][j].f2", print_hash_value);
            transparent_crc(g_351[i][j].f3, "g_351[i][j].f3", print_hash_value);

        }
    }
    transparent_crc(g_359, "g_359", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_413[i].f0, "g_413[i].f0", print_hash_value);
        transparent_crc(g_413[i].f1, "g_413[i].f1", print_hash_value);
        transparent_crc(g_413[i].f2, "g_413[i].f2", print_hash_value);
        transparent_crc(g_413[i].f3, "g_413[i].f3", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_492[i][j][k].f0, "g_492[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_547, "g_547", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_559[i][j][k], "g_559[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_636, "g_636", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_742[i][j][k], "g_742[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_865, "g_865", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_886[i], "g_886[i]", print_hash_value);

    }
    transparent_crc(g_887, "g_887", print_hash_value);
    transparent_crc(g_945, "g_945", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_1078[i][j], "g_1078[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1146, "g_1146", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
