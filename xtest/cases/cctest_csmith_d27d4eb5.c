// SPDX-License-Identifier: MIT
// cctest_csmith_d27d4eb5.c --- cctest case csmith_d27d4eb5 (csmith seed 3531427509)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xdf6477de */
/* @exp_ticks 0x3591 */

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

// Options:   -s 3531427509 -o /tmp/csmith_gen_sdsrpre5/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int32_t  f0;
   const int32_t  f1;
   uint8_t  f2;
   const int64_t  f3;
};
#pragma pack(pop)

union U2 {
   int32_t  f0;
};


static int32_t g_2 = 0x532BB11AL;
static int32_t g_5 = (-1L);
static int32_t g_8 = (-1L);
static uint32_t g_34 = 2UL;
static int16_t g_43[5] = {1L,1L,1L,1L,1L};
static int8_t g_51 = 7L;
static int16_t g_60 = 0xB1A6L;
static int32_t g_61 = 0x1EBDC590L;
static int16_t g_91 = 0x21D0L;
static union U2 g_92 = {1L};
static int32_t g_107[5] = {0L,0L,0L,0L,0L};
static uint16_t g_117 = 65526UL;
static int32_t g_132 = 0xC4ABD77EL;
static uint32_t g_138 = 4294967295UL;
static struct S0 g_171 = {0x07B9CB31L,0xF1B771C4L,0x64L,0L};
static int32_t g_177 = (-1L);
static int32_t g_183 = (-9L);
static uint8_t g_185 = 251UL;



static const uint8_t  func_1(void);
static int32_t  func_13(uint32_t  p_14, const union U2  p_15, uint8_t  p_16);
static int16_t  func_17(int64_t  p_18);
static int32_t  func_19(union U2  p_20, int64_t  p_21, int32_t  p_22, uint8_t  p_23, uint8_t  p_24);




static const uint8_t  func_1(void)
{ 
    uint32_t l_137 = 0x4C452B06L;
    uint32_t l_139 = 0x8AFF3DC6L;
    int32_t l_140[2];
    int32_t l_157[4][5] = {{0x5092C45CL,1L,0x04C604A0L,0x04C604A0L,1L},{(-8L),(-1L),0L,0L,(-1L)},{0x5092C45CL,1L,0x04C604A0L,0x04C604A0L,1L},{(-8L),(-1L),0L,0L,(-1L)}};
    int i, j;
    for (i = 0; i < 2; i++)
        l_140[i] = 0x11E24903L;
    for (g_2 = 0; (g_2 != (-18)); g_2 = safe_sub_func_int8_t_s_s(g_2, 3))
    { 
        int64_t l_11 = (-5L);
        int32_t l_123 = 5L;
        uint32_t l_153 = 0xE2628837L;
        int32_t l_156 = 1L;
        for (g_5 = 18; (g_5 != 9); g_5 = safe_sub_func_uint8_t_u_u(g_5, 1))
        { 
            uint32_t l_12 = 0x3FA3A92BL;
            struct S0 l_131[5][1][4] = {{{{-1L,1L,0xC4L,0x0229A812DEA9B0B6LL},{0x1313BA82L,0x27C9044CL,1UL,0x9AF7D07E14A34948LL},{1L,-5L,0xB8L,0x5FABF039857A524CLL},{1L,-5L,0xB8L,0x5FABF039857A524CLL}}},{{{-1L,0x2D4C7A7DL,0xCFL,-1L},{-1L,0x2D4C7A7DL,0xCFL,-1L},{-1L,1L,0xC4L,0x0229A812DEA9B0B6LL},{1L,-5L,0xB8L,0x5FABF039857A524CLL}}},{{{0x2D9A1771L,0xC5CD9764L,255UL,0xB1DD72C8AEE2D86ALL},{0x1313BA82L,0x27C9044CL,1UL,0x9AF7D07E14A34948LL},{0x2D9A1771L,0xC5CD9764L,255UL,0xB1DD72C8AEE2D86ALL},{-1L,1L,0xC4L,0x0229A812DEA9B0B6LL}}},{{{0x2D9A1771L,0xC5CD9764L,255UL,0xB1DD72C8AEE2D86ALL},{-1L,1L,0xC4L,0x0229A812DEA9B0B6LL},{-1L,1L,0xC4L,0x0229A812DEA9B0B6LL},{0x2D9A1771L,0xC5CD9764L,255UL,0xB1DD72C8AEE2D86ALL}}},{{{-1L,1L,0xC4L,0x0229A812DEA9B0B6LL},{0x2D9A1771L,0xC5CD9764L,255UL,0xB1DD72C8AEE2D86ALL},{0x1313BA82L,0x27C9044CL,1UL,0x9AF7D07E14A34948LL},{0x2D9A1771L,0xC5CD9764L,255UL,0xB1DD72C8AEE2D86ALL}}}};
            int i, j, k;
            for (g_8 = 0; (g_8 == 27); g_8++)
            { 
                l_12 = l_11;
                l_123 = func_13((func_17(g_8) , 18446744073709551610UL), g_92, g_8);
            }
            if (((l_123 & (((safe_mod_func_uint16_t_u_u(l_123, (safe_add_func_uint64_t_u_u(l_12, (safe_sub_func_int8_t_s_s(((~g_117) , g_60), g_91)))))) , l_131[3][0][0]) , 0x37580B265A930E60LL)) || 0x917AL))
            { 
                return g_2;
            }
            else
            { 
                return g_51;
            }
        }
        l_139 = (g_107[1] = ((((g_132 = l_11) != g_117) & g_5) >= ((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((g_138 = l_137), g_61)), 3)) || (-1L))));
        if ((g_107[3] = (((l_140[0] = l_137) == ((safe_mod_func_int8_t_s_s(g_43[2], 0x76L)) >= (safe_lshift_func_uint8_t_u_s((g_8 > l_137), 0)))) && l_11)))
        { 
            int16_t l_154 = (-5L);
            int32_t l_161 = (-1L);
            for (g_60 = 0; (g_60 == 20); g_60 = safe_add_func_uint8_t_u_u(g_60, 3))
            { 
                uint32_t l_155 = 0xDD7F6879L;
                int32_t l_158[2][4] = {{1L,1L,1L,1L},{1L,1L,1L,1L}};
                int i, j;
                g_61 = (l_158[1][0] |= (safe_mod_func_int32_t_s_s((g_107[2] = (((((l_123 = (g_2 < (g_138 = ((safe_rshift_func_uint16_t_u_s(((g_34 &= ((g_92 , ((safe_rshift_func_int16_t_s_s(((l_156 &= (l_140[1] = (((0xFAL < ((((((l_153 &= 7UL) && 0xE7L) >= g_2) > l_123) , l_154) <= g_117)) >= 0x27A7L) | l_155))) < g_61), 10)) | g_51)) > g_138)) || 1L), 4)) , l_153)))) > g_132) && g_61) >= g_60) == g_60)), l_157[0][4])));
            }
            for (g_61 = 0; (g_61 != (-9)); --g_61)
            { 
                int8_t l_162 = 3L;
                l_161 ^= 7L;
                if (l_162)
                    break;
            }
            g_107[2] = l_123;
        }
        else
        { 
            int64_t l_172 = 0x814EA1F162AC31A6LL;
            uint16_t l_178[2][1];
            int32_t l_186 = 6L;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_178[i][j] = 0x7CA1L;
            }
            l_178[1][0] ^= (safe_add_func_int8_t_s_s(((safe_add_func_int8_t_s_s(((safe_add_func_int8_t_s_s((g_177 = (g_51 = ((-1L) | (g_34 = ((safe_lshift_func_uint16_t_u_s((g_171 , l_172), 13)) != ((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u((18446744073709551609UL == g_34), l_172)), 0x6F01L)) <= l_140[0])))))), g_171.f1)) == l_140[0]), 1L)) , l_123), g_91));
            l_186 = (((0x4E5FD258L ^ (safe_lshift_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s((g_183 |= g_60), (g_60 < (safe_unary_minus_func_uint8_t_u((g_92 , l_137)))))) != (-1L)), 2))) || g_185) , 0x28B098A2L);
        }
    }
    return g_60;
}



static int32_t  func_13(uint32_t  p_14, const union U2  p_15, uint8_t  p_16)
{ 
    uint8_t l_120 = 0UL;
    for (g_117 = 0; (g_117 <= 4); g_117 += 1)
    { 
        int i;
        return g_107[g_117];
    }
    --l_120;
    return g_43[3];
}



static int16_t  func_17(int64_t  p_18)
{ 
    union U2 l_25[4][2][4] = {{{{-8L},{-8L},{-2L},{-8L}},{{-8L},{0x4C20F746L},{0x4C20F746L},{-8L}}},{{{0x4C20F746L},{-8L},{0x4C20F746L},{0x4C20F746L}},{{-8L},{-8L},{-2L},{-8L}}},{{{-8L},{0x4C20F746L},{0x4C20F746L},{-8L}},{{0x4C20F746L},{-8L},{0x4C20F746L},{0x4C20F746L}}},{{{-8L},{-8L},{-2L},{-8L}},{{-8L},{0x4C20F746L},{0x4C20F746L},{-8L}}}};
    int32_t l_33 = 0x29CBC21BL;
    int32_t l_62 = 0x4A037A76L;
    struct S0 l_67 = {0x574F207EL,1L,0xEBL,1L};
    uint32_t l_105 = 18446744073709551614UL;
    int32_t l_111[4];
    int8_t l_112 = 1L;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_111[i] = 0xBA9F0D2BL;
    l_62 ^= func_19(l_25[1][1][2], p_18, (((+((((safe_div_func_uint16_t_u_u((g_34 = (safe_sub_func_int16_t_s_s((l_33 ^= (safe_rshift_func_int16_t_s_u(2L, 8))), (g_2 > l_25[1][1][2].f0)))), 65535UL)) == 0L) < 252UL) || p_18)) && g_34) != g_8), l_25[1][1][2].f0, p_18);
    l_62 = (g_2 & (~(+((safe_lshift_func_int16_t_s_u(((p_18 >= ((l_67 , (safe_mod_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((l_33 |= p_18), g_34)) & l_67.f2), (-2L)))) <= g_8)) ^ 1L), 1)) >= g_61))));
    if (((g_43[3] && (safe_div_func_uint64_t_u_u(g_60, (safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((l_25[1][1][2].f0 != (((safe_lshift_func_uint16_t_u_u(((p_18 , p_18) | l_67.f1), 10)) | 0x331FL) != l_67.f3)) && 0x577DL), g_43[0])), 4))))) > 1L))
    { 
        int16_t l_89 = 0x3E38L;
        int32_t l_90 = 0x2B617F2EL;
        int32_t l_97 = 1L;
        for (g_61 = 4; (g_61 >= 0); g_61 -= 1)
        { 
            uint16_t l_82 = 0x8DBEL;
            g_91 = ((l_82 ^ (((safe_lshift_func_int8_t_s_u(g_60, 3)) && (safe_rshift_func_int8_t_s_u((l_90 = (l_82 , (safe_sub_func_uint8_t_u_u(9UL, l_89)))), 2))) < p_18)) , g_61);
        }
        l_97 = (p_18 <= (((l_90 = ((l_25[1][1][2] = g_92) , (safe_rshift_func_int16_t_s_u(0x2697L, (safe_div_func_int8_t_s_s((l_33 || p_18), g_34)))))) & l_89) , g_60));
    }
    else
    { 
        uint32_t l_108 = 4294967294UL;
        int32_t l_109 = (-3L);
        int32_t l_110 = (-10L);
        int32_t l_113 = 0x8F7E2F80L;
        int32_t l_114 = (-1L);
        int32_t l_115 = 5L;
        int32_t l_116[1][5][2] = {{{(-5L),0L},{0L,(-5L)},{0L,0L},{(-5L),0L},{0L,(-5L)}}};
        int i, j, k;
        for (g_51 = 0; (g_51 >= 24); g_51 = safe_add_func_int32_t_s_s(g_51, 2))
        { 
            for (g_60 = 8; (g_60 != (-20)); g_60--)
            { 
                uint16_t l_106 = 0x1955L;
                if (g_34)
                    break;
                l_33 |= (safe_add_func_uint16_t_u_u(p_18, ((((18446744073709551613UL >= (l_105 = (!0xD497L))) > (g_107[1] = l_106)) != 0x3893D913L) | l_108)));
            }
        }
        g_117++;
        l_62 = 0x0D08A62AL;
    }
    return p_18;
}



static int32_t  func_19(union U2  p_20, int64_t  p_21, int32_t  p_22, uint8_t  p_23, uint8_t  p_24)
{ 
    int64_t l_35 = (-5L);
    if (((l_35 = 0L) || (((safe_lshift_func_uint8_t_u_u(g_8, 3)) | (l_35 & (safe_lshift_func_uint16_t_u_s(1UL, p_23)))) ^ 0xF9L)))
    { 
        int64_t l_42 = 0xC5395F87B70D8AC5LL;
        g_43[3] ^= (p_22 == (safe_rshift_func_int8_t_s_s(0L, l_42)));
    }
    else
    { 
        for (p_21 = 0; (p_21 <= 20); ++p_21)
        { 
            g_51 ^= (safe_rshift_func_int8_t_s_u((!((safe_div_func_int8_t_s_s(g_8, p_22)) < p_22)), 0));
        }
        g_61 = (g_60 = (p_22 | (safe_mul_func_int16_t_s_s((safe_div_func_int32_t_s_s(0x5D487C75L, (safe_rshift_func_int8_t_s_s(0x73L, ((safe_rshift_func_int16_t_s_u(g_43[3], 0)) & 9UL))))), g_8))));
    }
    return g_60;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_43[i], "g_43[i]", print_hash_value);

    }
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_92.f0, "g_92.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_107[i], "g_107[i]", print_hash_value);

    }
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_171.f0, "g_171.f0", print_hash_value);
    transparent_crc(g_171.f1, "g_171.f1", print_hash_value);
    transparent_crc(g_171.f2, "g_171.f2", print_hash_value);
    transparent_crc(g_171.f3, "g_171.f3", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
