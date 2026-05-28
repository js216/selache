// SPDX-License-Identifier: MIT
// cctest_csmith_e6a8b22f.c --- cctest case csmith_e6a8b22f (csmith seed 3869815343)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3ff0846a */
/* @exp_ticks 0x3f30 */

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

// Options:   -s 3869815343 -o /tmp/csmith_gen_tidaushg/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   int8_t  f1;
   uint64_t  f2;
   int16_t  f3;
   const int16_t  f4;
};
#pragma pack(pop)

union U1 {
   const int16_t  f0;
   uint32_t  f1;
   struct S0  f2;
   struct S0  f3;
};


static int32_t g_2 = (-8L);
static int32_t g_5[1] = {0x9949DFCFL};
static union U1 g_28 = {0xF298L};
static uint16_t g_52[4] = {0x820FL,0x820FL,0x820FL,0x820FL};
static int64_t g_71 = 0x459084C010B496A2LL;
static int16_t g_83 = 4L;
static int32_t g_102 = (-10L);
static uint64_t g_105 = 0xB55C79244252728FLL;
static uint8_t g_149 = 0xEAL;



static int32_t  func_1(void);
static union U1  func_13(uint64_t  p_14, int16_t  p_15, int16_t  p_16, union U1  p_17);
static uint64_t  func_18(uint64_t  p_19, uint32_t  p_20, uint32_t  p_21);
static union U1  func_24(int64_t  p_25, uint8_t  p_26, int8_t  p_27);




static int32_t  func_1(void)
{ 
    int16_t l_8 = 0x4D18L;
    int32_t l_9 = 0x6E54EE87L;
    int32_t l_234 = 1L;
    uint8_t l_235 = 0xD3L;
    for (g_2 = (-27); (g_2 < (-18)); g_2++)
    { 
        uint64_t l_10 = 0UL;
        int8_t l_74 = (-7L);
        union U1 l_75 = {0xF671L};
        uint64_t l_232 = 0UL;
        for (g_5[0] = 0; (g_5[0] != 0); g_5[0] = safe_add_func_uint64_t_u_u(g_5[0], 6))
        { 
            return g_2;
        }
        --l_10;
        l_232 = (func_13((func_18((safe_mul_func_int16_t_s_s(((g_5[0] , (func_24(l_10, g_5[0], (((g_28 , g_5[0]) != 1UL) | 4L)) , l_8)) || g_2), l_8)), g_2, g_2) , g_28.f0), l_74, g_2, l_75) , 0xA00515F6L);
    }
    for (g_28.f2.f3 = 0; (g_28.f2.f3 >= 0); g_28.f2.f3 -= 1)
    { 
        int32_t l_233[5][2][4] = {{{(-1L),0L,0xAB62559BL,0x69C0FF02L},{0xD62526ADL,0x19CEE7FFL,0xA599C36FL,0x03D5BD35L}},{{1L,0xD62526ADL,1L,0x66FCE70BL},{0xAB62559BL,0x819071DAL,0xB17AFCDEL,0x19CEE7FFL}},{{0x69C0FF02L,1L,0x03D5BD35L,0x819071DAL},{(-10L),0x06713FB8L,0x03D5BD35L,0L}},{{0x69C0FF02L,0L,0xB17AFCDEL,0xB17AFCDEL},{0xAB62559BL,0xAB62559BL,1L,(-10L)}},{{1L,(-10L),0xA599C36FL,0xD62526ADL},{0xD62526ADL,0L,0xAB62559BL,0xA599C36FL}}};
        int i, j, k;
        --l_235;
        g_5[0] = (safe_lshift_func_int16_t_s_s((-6L), 4));
    }
    return l_235;
}



static union U1  func_13(uint64_t  p_14, int16_t  p_15, int16_t  p_16, union U1  p_17)
{ 
    const int32_t l_82 = 0xFA21EB82L;
    int32_t l_84 = 0L;
    uint64_t l_87 = 0xF7C350235B3423B0LL;
    union U1 l_97 = {0x1E4AL};
    int16_t l_161 = 0L;
    int16_t l_206[1];
    int32_t l_209 = (-2L);
    int32_t l_210 = (-1L);
    int32_t l_212 = 0x26566451L;
    int32_t l_214 = 0x0BE4861EL;
    int32_t l_218 = 0x6F81079EL;
    uint64_t l_229[2];
    int i;
    for (i = 0; i < 1; i++)
        l_206[i] = (-7L);
    for (i = 0; i < 2; i++)
        l_229[i] = 1UL;
    if ((l_84 |= (p_16 == ((g_5[0] < (((p_15 |= (safe_mul_func_uint16_t_u_u((g_83 = (g_52[1] = ((safe_add_func_int8_t_s_s(g_28.f0, (((safe_div_func_int32_t_s_s((l_82 >= g_2), 0x37236CF9L)) || 0x9BL) || p_14))) ^ 0x391DAA6EL))), (-3L)))) , l_82) ^ g_5[0])) , 7UL))))
    { 
        const int16_t l_92 = 3L;
        int32_t l_99 = 5L;
        int32_t l_100 = 0L;
        int32_t l_101 = 0x1F7F3414L;
        int32_t l_103 = 0x6A377049L;
        int32_t l_104[2];
        int i;
        for (i = 0; i < 2; i++)
            l_104[i] = 0xA05E82EFL;
lbl_193:
        for (p_17.f2.f2 = (-4); (p_17.f2.f2 >= 10); p_17.f2.f2 = safe_add_func_uint8_t_u_u(p_17.f2.f2, 6))
        { 
            int8_t l_98 = 4L;
            int32_t l_114 = (-1L);
            l_99 = ((((((l_87 <= (safe_mul_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_s(l_92, (safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((l_97 , p_14), l_87)), g_5[0])))) , 4294967287UL) >= p_17.f0), p_14))) < 65535UL) & 0x6CL) != p_17.f0) || p_17.f0) <= l_98);
            l_97.f2.f0 = ((0xFF8DL & (g_83 | (g_105++))) , ((safe_rshift_func_int8_t_s_u((l_104[0] = g_2), 4)) == ((~((l_114 ^= (safe_div_func_int64_t_s_s((~(p_15 | g_105)), p_16))) == 0xC1L)) & p_17.f0)));
        }
        p_17.f2.f0 = (safe_rshift_func_int8_t_s_u(((0xE2847586L && (-1L)) > g_2), 7));
        if (l_87)
        { 
            struct S0 l_131 = {2L,-1L,1UL,1L,-1L};
            g_28.f3.f0 = ((p_15 & (l_99 & (((safe_add_func_uint32_t_u_u((((0x16CB7938L || (((((l_104[1] ^= (safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((+(g_83 , 1L)), 0L)) == p_15), 1)), 0UL))) < 1L) & g_28.f0) | 0UL) <= g_28.f0)) >= p_14) && g_5[0]), p_17.f0)) ^ 0L) , l_84))) || 0UL);
            g_5[0] = (safe_mod_func_uint64_t_u_u(l_97.f0, (+(safe_add_func_uint32_t_u_u((l_131 , (safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(0x73L, (safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((~((((safe_mod_func_uint32_t_u_u(((p_14 && g_52[2]) <= g_102), g_28.f0)) , l_84) | g_102) || l_104[0])), g_5[0])), g_52[2])))), 0x0BE3L)), (-2L)))), 0UL)))));
            if ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((g_149 = 0xEEL), (safe_unary_minus_func_int16_t_s((safe_mul_func_uint8_t_u_u(((p_15 < g_5[0]) >= (l_131.f0 < 4294967292UL)), (-5L))))))), g_5[0])))
            { 
                uint8_t l_153 = 7UL;
                l_131.f0 &= (l_153 , (((+(safe_rshift_func_int8_t_s_u(8L, 1))) ^ 0x8BD33210L) , ((((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((l_161 , g_28.f0), g_52[2])), g_28.f0)) > l_161) ^ p_14) , 0xD9D65D8EL)));
                p_17.f3.f0 = 5L;
            }
            else
            { 
                int32_t l_162[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_162[i] = (-9L);
                l_162[0] ^= 0x35FF0F84L;
                p_17.f3.f0 = g_52[1];
            }
        }
        else
        { 
            uint16_t l_164 = 8UL;
            if (p_16)
            { 
                uint16_t l_163 = 0xFB2DL;
                int32_t l_192 = 0x774A439AL;
                g_5[0] ^= (((l_163 >= l_164) | (safe_mul_func_int16_t_s_s(0xA795L, (g_83 | l_164)))) ^ 1UL);
                p_17.f2.f0 = (safe_div_func_int32_t_s_s((l_192 &= (safe_unary_minus_func_uint32_t_u((((safe_lshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(p_14, (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((g_5[0] > (safe_rshift_func_uint8_t_u_u(g_5[0], (safe_div_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s(p_15, g_2)) > p_15) , 0UL), l_97.f0))))), 1)), p_17.f0)))), g_52[1])) < g_105) , g_71), 7)), 3)), 4294967295UL)), 4)) >= g_71) > p_15)))), 0xC8D9E6B8L));
                g_5[0] ^= g_2;
            }
            else
            { 
                if (g_71)
                    goto lbl_193;
                g_5[0] &= g_2;
            }
        }
    }
    else
    { 
        int16_t l_198[3];
        int32_t l_205 = (-1L);
        int32_t l_207 = 0x632338F4L;
        int32_t l_208 = 1L;
        int32_t l_211 = 1L;
        int16_t l_216 = 0x6A3DL;
        int32_t l_226 = 0xF2598EEFL;
        int32_t l_228 = 1L;
        int i;
        for (i = 0; i < 3; i++)
            l_198[i] = 1L;
        if ((l_84 = (safe_sub_func_int64_t_s_s((((safe_lshift_func_uint8_t_u_s(((p_17.f3.f2 = (l_198[2] < (safe_div_func_int64_t_s_s(6L, (safe_unary_minus_func_uint8_t_u((safe_unary_minus_func_int64_t_s((safe_mul_func_int16_t_s_s(((l_205 < p_17.f0) || 0xBEL), l_82)))))))))) & p_15), 7)) == g_2) < g_83), g_28.f0))))
        { 
            int32_t l_213 = 0x8154FD2FL;
            int32_t l_215 = 0x6EFB6346L;
            int32_t l_217 = 0xF62E4942L;
            uint32_t l_219 = 18446744073709551613UL;
            for (l_84 = 0; (l_84 <= 2); l_84 += 1)
            { 
                l_206[0] = p_15;
            }
            l_219--;
        }
        else
        { 
            int8_t l_222 = 0x39L;
            int32_t l_223 = 0xD0EE85EEL;
            int32_t l_224 = 0x60F172A5L;
            int32_t l_225 = 0x0A2A8B54L;
            int32_t l_227 = 0L;
            l_229[1]++;
        }
    }
    return l_97;
}



static uint64_t  func_18(uint64_t  p_19, uint32_t  p_20, uint32_t  p_21)
{ 
    int32_t l_70 = 0x8704422FL;
    int32_t l_72 = 0x3E7BE80AL;
    int32_t l_73[2];
    int i;
    for (i = 0; i < 2; i++)
        l_73[i] = 1L;
    g_5[0] = ((safe_rshift_func_uint8_t_u_u((g_71 ^= (l_70 ^= p_19)), (l_73[1] &= (l_72 = (((l_72 > g_52[1]) > (((p_20 | p_19) | p_19) , l_72)) != p_20))))) , 5L);
    return g_52[1];
}



static union U1  func_24(int64_t  p_25, uint8_t  p_26, int8_t  p_27)
{ 
    uint64_t l_53 = 0UL;
    int32_t l_54 = 0x890AAF75L;
    for (g_28.f3.f1 = 0; (g_28.f3.f1 > (-24)); g_28.f3.f1 = safe_sub_func_int16_t_s_s(g_28.f3.f1, 7))
    { 
        uint8_t l_35[3];
        int32_t l_51 = 0xFA2E5769L;
        uint16_t l_55 = 0UL;
        int i;
        for (i = 0; i < 3; i++)
            l_35[i] = 255UL;
        if ((g_5[0] = (safe_mod_func_int32_t_s_s((safe_sub_func_int64_t_s_s((l_35[0] ^= p_25), ((safe_mod_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u(((((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((l_54 ^= (((g_28.f0 && ((safe_rshift_func_uint16_t_u_s((((safe_rshift_func_int16_t_s_u((1L & ((safe_mod_func_uint8_t_u_u(((((((g_52[1] = (safe_lshift_func_int16_t_s_s(((l_51 == 0x8DL) || g_2), l_51))) && g_52[3]) >= (-1L)) > 0x5DA1L) & l_53) , g_5[0]), g_2)) >= p_25)), 15)) , p_26) >= p_25), g_28.f0)) ^ 0x4640L)) & l_51) & 0x1248C331L)), g_28.f0)) == p_26), g_2)) , l_51) > l_55) ^ p_26))), l_55)) != l_51))), l_53))))
        { 
            uint64_t l_56[3];
            uint8_t l_65 = 0xEDL;
            int i;
            for (i = 0; i < 3; i++)
                l_56[i] = 18446744073709551609UL;
            l_56[0] ^= g_52[1];
            if (p_25)
                break;
            g_5[0] = (0xB039B7C3L < (safe_sub_func_uint8_t_u_u((0x6D5672FEL | (safe_div_func_uint8_t_u_u(((0x64L || (safe_sub_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((0x79L < 0xACL), g_2)) && p_26), 0x7AFAL))) || l_56[0]), l_65))), 1L)));
        }
        else
        { 
            return g_28;
        }
        l_51 = (safe_rshift_func_uint8_t_u_s(((g_2 != g_2) , g_5[0]), 7));
    }
    return g_28;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);

    }
    transparent_crc(g_28.f0, "g_28.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_52[i], "g_52[i]", print_hash_value);

    }
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
