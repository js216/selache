// SPDX-License-Identifier: MIT
// cctest_csmith_2ed95939.c --- cctest case csmith_2ed95939 (csmith seed 785996089)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x98d58080 */
/* @exp_ticks 0x499b */

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

// Options:   -s 785996089 -o /tmp/csmith_gen_kjh1e2tf/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
   uint32_t  f1;
};
#pragma pack(pop)

union U1 {
   int8_t  f0;
   uint32_t  f1;
   uint64_t  f2;
   int32_t  f3;
};


static int32_t g_2[6] = {5L,5L,5L,5L,5L,5L};
static uint32_t g_37 = 0xF4F9A023L;
static union U1 g_54 = {0xA7L};
static int32_t g_56 = 0x767C8FA1L;
static struct S0 g_61 = {0xB167L,18446744073709551615UL};
static int32_t *g_69 = (void*)0;
static int64_t g_85 = (-9L);
static int32_t g_101 = 0L;
static int8_t g_119 = 0x97L;
static uint8_t g_135 = 254UL;
static int16_t g_142 = 0x0E08L;
static int32_t g_145 = (-3L);
static int32_t *g_144[6][6][4] = {{{&g_145,(void*)0,&g_145,&g_145},{&g_145,(void*)0,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,(void*)0},{(void*)0,&g_145,&g_145,&g_145},{&g_145,(void*)0,&g_145,&g_145}},{{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,(void*)0,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,(void*)0,(void*)0,&g_145},{(void*)0,&g_145,(void*)0,(void*)0}},{{&g_145,&g_145,&g_145,&g_145},{&g_145,(void*)0,&g_145,(void*)0},{(void*)0,&g_145,&g_145,&g_145},{&g_145,(void*)0,&g_145,&g_145},{(void*)0,&g_145,&g_145,(void*)0},{&g_145,&g_145,&g_145,&g_145}},{{&g_145,&g_145,&g_145,(void*)0},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,(void*)0},{&g_145,(void*)0,&g_145,&g_145}},{{(void*)0,&g_145,&g_145,&g_145},{&g_145,(void*)0,&g_145,&g_145},{(void*)0,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,(void*)0,&g_145},{(void*)0,&g_145,(void*)0,&g_145}},{{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,(void*)0,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{(void*)0,(void*)0,&g_145,&g_145}}};
static uint16_t g_183 = 0xB2B6L;
static int32_t * const **g_217 = (void*)0;
static uint64_t g_226 = 8UL;
static uint64_t *g_225 = &g_226;
static int16_t g_229 = 0x93F4L;
static int8_t g_267 = 0L;
static int32_t **g_307 = (void*)0;
static int32_t ***g_306 = &g_307;
static int32_t ****g_305 = &g_306;
static uint16_t g_368 = 65535UL;
static int32_t *****g_421 = &g_305;
static int16_t g_517 = 0xD7AEL;
static uint32_t *g_546[1][3] = {{&g_37,&g_37,&g_37}};
static uint32_t *g_547[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint16_t g_635[1] = {0x4702L};
static struct S0 g_672 = {0x5F3BL,1UL};
static uint32_t g_688 = 0x7B7421BCL;
static int32_t *g_691[7][5][2] = {{{&g_56,(void*)0},{&g_145,&g_56},{(void*)0,&g_2[3]},{(void*)0,&g_56},{&g_145,(void*)0}},{{&g_56,(void*)0},{&g_2[5],&g_2[5]},{&g_101,&g_56},{&g_56,&g_101},{&g_2[5],&g_56}},{{&g_56,&g_2[5]},{&g_101,&g_101},{&g_56,&g_2[5]},{&g_101,&g_145},{&g_101,&g_56}},{{&g_56,&g_2[5]},{(void*)0,&g_101},{&g_101,(void*)0},{&g_56,(void*)0},{&g_101,&g_101}},{{(void*)0,&g_2[5]},{&g_56,&g_56},{&g_101,&g_145},{&g_101,&g_2[5]},{&g_56,&g_101}},{{&g_101,&g_2[5]},{&g_56,&g_56},{&g_2[5],&g_101},{&g_56,&g_56},{&g_101,&g_2[5]}},{{&g_2[5],(void*)0},{&g_56,(void*)0},{&g_145,&g_56},{(void*)0,&g_2[3]},{(void*)0,&g_56}}};
static uint16_t **g_748 = (void*)0;
static int64_t g_778 = 1L;
static int64_t g_794 = 7L;
static uint8_t g_812 = 0x46L;
static union U1 **g_830 = (void*)0;
static int32_t g_845 = (-8L);
static int16_t g_850[7] = {0x432AL,0xDEFCL,0x432AL,0x432AL,0xDEFCL,0x432AL,0L};
static uint32_t **** const g_940 = (void*)0;
static int16_t g_997 = 0L;
static int8_t *g_1011 = &g_54.f0;
static int8_t **g_1010[3] = {&g_1011,&g_1011,&g_1011};
static uint64_t g_1023[1][5][4] = {{{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}}};
static uint32_t **g_1060 = &g_546[0][2];
static uint32_t ***g_1059 = &g_1060;
static uint32_t ****g_1058 = &g_1059;
static uint16_t g_1064[2][4][2] = {{{0xB160L,0xB160L},{0xB160L,0xB160L},{0xB160L,0xB160L},{0xB160L,0xB160L}},{{0xB160L,0xB160L},{0xB160L,0xB160L},{0xB160L,0xB160L},{0xB160L,0xB160L}}};
static union U1 g_1102 = {0xEFL};
static int64_t g_1103 = (-1L);
static int64_t g_1150 = 6L;
static uint64_t g_1174 = 18446744073709551606UL;
static int32_t ***g_1207 = &g_307;
static int32_t **** const g_1206 = &g_1207;
static int32_t **** const *g_1205 = &g_1206;
static int32_t **** const g_1215 = (void*)0;
static int32_t **** const *g_1214[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint8_t g_1261 = 0xBAL;
static uint16_t g_1275 = 65534UL;
static uint16_t g_1291[2] = {0x03EFL,0x03EFL};
static uint64_t g_1311 = 0xF7B220099C5EE24BLL;
static int32_t * const g_1337 = &g_845;
static int32_t * const *g_1336 = &g_1337;
static int32_t * const **g_1335 = &g_1336;
static const int8_t g_1383 = 0xB3L;
static int32_t *g_1420 = &g_1102.f3;
static int32_t **g_1419[1][6] = {{&g_1420,&g_1420,&g_1420,&g_1420,&g_1420,&g_1420}};
static int32_t ***g_1418 = &g_1419[0][3];
static int32_t ****g_1417 = &g_1418;
static int32_t ** const *g_1423 = &g_1419[0][0];
static int32_t ** const **g_1422 = &g_1423;
static const union U1 g_1436 = {0x19L};
static const union U1 *g_1435 = &g_1436;
static int16_t g_1443 = 1L;
static struct S0 *g_1512 = &g_61;
static const uint64_t g_1543[5] = {1UL,1UL,1UL,1UL,1UL};
static int64_t g_1553 = 0x3A6B726122131820LL;
static int64_t g_1596 = 0x001759CF59C4A4DELL;
static int16_t *g_1614 = &g_229;
static int16_t **g_1613 = &g_1614;
static uint16_t g_1622 = 9UL;
static const int32_t g_1651 = (-1L);



static const int8_t  func_1(void);
static int8_t  func_6(int32_t  p_7);
static uint16_t  func_10(int8_t  p_11);
static const int32_t * func_12(union U1  p_13, uint16_t  p_14, int32_t  p_15);
static int32_t * func_19(int32_t * p_20, int32_t * p_21, int32_t * p_22, uint16_t  p_23, int32_t * p_24);
static int32_t * func_25(const int64_t  p_26, int32_t * p_27);
static uint32_t  func_38(union U1  p_39, const uint32_t  p_40, union U1  p_41);
static union U1  func_42(int32_t  p_43, uint16_t  p_44, int32_t  p_45);




static const int8_t  func_1(void)
{ 
    int32_t l_5 = (-9L);
    uint16_t *l_634 = &g_635[0];
    uint8_t *l_811 = &g_812;
    int32_t l_813 = 0x0002C92FL;
    int32_t l_841 = 0L;
    int32_t l_842 = (-1L);
    int32_t l_843 = 0x7AF8A024L;
    int32_t l_844[4] = {(-1L),(-1L),(-1L),(-1L)};
    int32_t l_854 = 0xADE3BD91L;
    union U1 *l_877 = &g_54;
    union U1 **l_876 = &l_877;
    uint16_t l_912 = 0UL;
    uint8_t l_1024[1];
    int32_t *****l_1025 = &g_305;
    uint64_t **l_1067 = &g_225;
    int64_t l_1073 = 0x63BBDAE1CB17CB43LL;
    int32_t l_1074 = 0x9B9AD99FL;
    uint64_t l_1075 = 0xAD3C6CB20A0FD89CLL;
    struct S0 l_1119 = {1UL,1UL};
    int32_t l_1131 = 0xD8EADEFCL;
    int32_t *l_1176 = &g_2[2];
    int32_t *l_1177 = &l_854;
    int32_t *l_1178[3][1];
    uint8_t l_1179[1];
    int8_t l_1186[2][7][5] = {{{1L,0x67L,0xD5L,(-9L),(-7L)},{(-1L),0xD4L,0x8FL,0x8FL,0xD4L},{1L,(-8L),0x93L,0xF1L,(-1L)},{0L,4L,(-1L),0x5AL,0x5CL},{(-8L),(-1L),3L,9L,9L},{0L,0x1AL,0L,2L,0x8FL},{1L,0x93L,(-9L),(-8L),1L}},{{(-1L),0x5AL,2L,(-1L),0L},{1L,1L,(-9L),1L,1L},{0xD4L,0xBDL,0L,4L,(-1L)},{0xF1L,(-1L),3L,(-1L),0xD5L},{0x4FL,0L,(-1L),0xBDL,(-1L)},{(-1L),(-1L),0x93L,3L,1L},{(-1L),0x5CL,0x8FL,2L,0L}}};
    uint64_t l_1218 = 0x976ECEB2E564A692LL;
    int64_t l_1219 = (-8L);
    int32_t l_1274[1];
    int32_t *l_1310 = &l_1274[0];
    int32_t ** const l_1309[1] = {&l_1310};
    int32_t ** const *l_1308 = &l_1309[0];
    uint32_t l_1329 = 0x31A5B6E9L;
    uint32_t l_1343[5][2];
    uint16_t l_1372 = 65529UL;
    const int8_t *l_1382 = &g_1383;
    const int8_t **l_1381 = &l_1382;
    uint32_t l_1440 = 4294967290UL;
    int16_t l_1446 = 0x4F8EL;
    uint32_t l_1453[7][7][1] = {{{0x098ABF5CL},{0xB236D074L},{0x098ABF5CL},{0x2A2D3DD0L},{0x371DD9D8L},{0x5715B327L},{4UL}},{{0xB236D074L},{0x0BE46FB4L},{4294967293UL},{0x371DD9D8L},{4294967293UL},{0x0BE46FB4L},{0xB236D074L}},{{4UL},{0x5715B327L},{0x371DD9D8L},{0x2A2D3DD0L},{0x098ABF5CL},{0xB236D074L},{0x098ABF5CL}},{{0x2A2D3DD0L},{0x371DD9D8L},{0x5715B327L},{4UL},{0xB236D074L},{0x0BE46FB4L},{4294967293UL}},{{0x371DD9D8L},{4294967293UL},{0x0BE46FB4L},{0xB236D074L},{4UL},{0x5715B327L},{0x371DD9D8L}},{{0x2A2D3DD0L},{0x098ABF5CL},{0xB236D074L},{0x098ABF5CL},{0x2A2D3DD0L},{0x371DD9D8L},{0x5715B327L}},{{4UL},{0xB236D074L},{0x0BE46FB4L},{4294967293UL},{0x371DD9D8L},{4294967293UL},{0x0BE46FB4L}}};
    int16_t l_1459 = 1L;
    int8_t l_1474 = 0x20L;
    int32_t l_1490 = 1L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1024[i] = 0x7CL;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_1178[i][j] = &g_56;
    }
    for (i = 0; i < 1; i++)
        l_1179[i] = 0UL;
    for (i = 0; i < 1; i++)
        l_1274[i] = 1L;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
            l_1343[i][j] = 4294967295UL;
    }
    for (g_2[5] = 0; (g_2[5] == 24); ++g_2[5])
    { 
        return g_2[0];
    }
    return g_1651;
}



static int8_t  func_6(int32_t  p_7)
{ 
    int32_t *****l_641[3][4] = {{&g_305,&g_305,&g_305,&g_305},{&g_305,&g_305,&g_305,&g_305},{&g_305,&g_305,&g_305,&g_305}};
    const struct S0 l_642 = {0xA659L,0x3C6783CFL};
    int32_t l_644 = 0xEBF8D06FL;
    struct S0 l_674 = {1UL,18446744073709551615UL};
    uint32_t **l_701[7][3] = {{&g_546[0][1],&g_546[0][2],&g_546[0][1]},{&g_546[0][1],&g_546[0][2],&g_546[0][1]},{&g_546[0][1],&g_546[0][2],&g_546[0][1]},{&g_546[0][1],&g_546[0][2],&g_546[0][1]},{&g_546[0][1],&g_546[0][2],&g_546[0][1]},{&g_546[0][1],&g_546[0][2],&g_546[0][1]},{&g_546[0][1],&g_546[0][2],&g_546[0][1]}};
    uint32_t ***l_700 = &l_701[6][0];
    int i, j;
    for (g_517 = 0; (g_517 <= 0); g_517 += 1)
    { 
        uint16_t l_638 = 0x0932L;
        int32_t **l_643 = &g_144[3][4][0];
        int32_t l_646 = 0xBD91FE29L;
        int32_t l_649 = 0x791654ADL;
        struct S0 *l_671 = &g_672;
        int64_t l_780[3][4] = {{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L}};
        uint32_t ****l_791 = &l_700;
        int32_t l_799 = (-4L);
        int32_t l_800 = 0xCAA91319L;
        int32_t l_801[4] = {0xBCEEE883L,0xBCEEE883L,0xBCEEE883L,0xBCEEE883L};
        int i, j;
        l_638++;
        l_641[1][2] = l_641[1][0];
        if (g_635[g_517])
        { 
            int16_t l_645 = 0x2FACL;
            int32_t l_647 = 0L;
            int32_t l_648 = 0xD40E1222L;
            int32_t l_650 = 0x9C9087BEL;
            uint16_t l_651 = 65534UL;
            int i;
            l_644 ^= ((l_642 , (**g_305)) == l_643);
            l_651--;
            (*g_69) = (+g_635[g_517]);
        }
        else
        { 
            uint32_t **l_663 = &g_546[0][2];
            uint32_t ***l_664 = &l_663;
            const int32_t l_667 = 0xD4B78185L;
            uint8_t *l_670 = &g_135;
            (*g_69) = (safe_mod_func_int16_t_s_s(p_7, (safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((((*l_670) = (((((void*)0 == &l_638) , &g_547[3]) != ((*l_664) = l_663)) > (((safe_lshift_func_int8_t_s_s((l_667 <= ((safe_mod_func_int64_t_s_s(l_667, p_7)) | p_7)), l_667)) ^ 1L) == g_119))) >= l_667), 6)) && (*g_69)), g_635[0])), p_7))));
            return p_7;
        }
        (*l_671) = (g_61 = ((p_7 , (p_7 , ((g_142 < (p_7 > ((0x5C7F012A986EB13DLL ^ (p_7 & ((p_7 || p_7) <= 4294967295UL))) , 0x75L))) >= 0x92FF0EFF1DA59FD2LL))) , l_642));
        for (l_638 = 0; (l_638 <= 0); l_638 += 1)
        { 
            const struct S0 l_676 = {0x6488L,6UL};
            int32_t l_687 = 0xABC84E6BL;
            int32_t *l_728 = &g_54.f3;
            int32_t **l_727 = &l_728;
            uint64_t **l_731 = &g_225;
            uint32_t l_771[6][7] = {{0x634F8FD6L,0x634F8FD6L,18446744073709551612UL,1UL,18446744073709551612UL,0x634F8FD6L,0x634F8FD6L},{0x634F8FD6L,18446744073709551612UL,1UL,18446744073709551612UL,0x634F8FD6L,0x634F8FD6L,18446744073709551612UL},{18446744073709551615UL,0x8EDE4CF7L,18446744073709551615UL,18446744073709551612UL,18446744073709551612UL,18446744073709551615UL,0x8EDE4CF7L},{18446744073709551612UL,0x8EDE4CF7L,1UL,1UL,0x8EDE4CF7L,18446744073709551612UL,0x8EDE4CF7L},{18446744073709551615UL,18446744073709551612UL,18446744073709551612UL,18446744073709551615UL,0x8EDE4CF7L,18446744073709551615UL,18446744073709551612UL},{0x634F8FD6L,0x634F8FD6L,18446744073709551612UL,1UL,18446744073709551612UL,0x634F8FD6L,0x634F8FD6L}};
            int32_t l_795 = 0x3331BF27L;
            int32_t l_797 = 0x706772AEL;
            int32_t l_798[6] = {0x1ED3D4BFL,0x1ED3D4BFL,0x5F1D4F2BL,0x1ED3D4BFL,0x1ED3D4BFL,0x5F1D4F2BL};
            uint32_t l_802 = 0x1765B65EL;
            int i, j;
            for (g_135 = 0; (g_135 <= 0); g_135 += 1)
            { 
                uint32_t l_693 = 0x1EC39194L;
                uint32_t ***l_703 = &l_701[6][2];
                uint32_t ****l_702 = &l_703;
                int8_t *l_704 = &g_267;
                int64_t *l_705 = &g_85;
                int32_t l_721 = 0x9FC216FBL;
                int i;
                for (g_226 = 0; (g_226 <= 0); g_226 += 1)
                { 
                    struct S0 l_673 = {0xBCDAL,18446744073709551609UL};
                    union U1 *l_681 = &g_54;
                    union U1 **l_682 = &l_681;
                    int32_t **l_683 = (void*)0;
                    int32_t *l_685 = &g_54.f3;
                    int32_t **l_684 = &l_685;
                    int32_t l_686 = (-1L);
                    int32_t *l_692 = &l_687;
                    int i, j;
                    l_674 = l_673;
                    (*g_69) = ((safe_unary_minus_func_int32_t_s(((l_676 , (safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((((*l_682) = l_681) != &g_54), (((*l_684) = (void*)0) == g_546[g_135][(g_517 + 2)]))) , g_56), ((g_229 >= g_368) <= p_7)))) || p_7))) < g_61.f0);
                    --g_688;
                    l_692 = &l_687;
                    (*l_671) = l_674;
                }
                (*l_643) = func_25(((l_693 == p_7) , ((*l_705) ^= (((*l_704) = ((safe_add_func_int16_t_s_s(p_7, (safe_rshift_func_uint16_t_u_s((g_635[g_517] ^= (((safe_div_func_uint16_t_u_u((l_700 == ((*l_702) = &l_701[6][0])), ((p_7 , 0xB6A2L) ^ p_7))) == g_2[5]) && 0UL)), g_61.f1)))) <= 0xC764D9A14D089B8CLL)) <= p_7))), &l_687);
                (*g_69) = (safe_mod_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_s(((safe_unary_minus_func_uint64_t_u((p_7 , (g_635[0] == (safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((((safe_rshift_func_uint16_t_u_s((((safe_mod_func_uint8_t_u_u(p_7, g_688)) != ((p_7 && l_721) != ((*l_704) = (g_672 , p_7)))) & g_635[g_517]), 13)) != p_7) , l_687), g_226)) | 0x4225L), (-1L))))))) , l_693), p_7)) < 18446744073709551608UL) != 0L), g_635[0]));
                for (g_229 = 0; (g_229 >= 0); g_229 -= 1)
                { 
                    uint8_t l_722 = 255UL;
                    return l_722;
                }
                (*l_671) = l_676;
            }
            if ((safe_sub_func_uint64_t_u_u(((g_226 != 0x92L) , ((**l_731) = (safe_lshift_func_int16_t_s_s(((((((g_69 == ((*l_727) = (void*)0)) >= ((safe_add_func_uint32_t_u_u(((g_183 || ((((l_731 == (void*)0) <= p_7) <= g_635[0]) & 1L)) & p_7), p_7)) , l_687)) , g_2[5]) , g_688) < p_7) >= l_676.f1), 4)))), p_7)))
            { 
                int8_t l_744 = (-1L);
                uint16_t *l_747 = &g_672.f0;
                uint16_t ** const l_746[3] = {&l_747,&l_747,&l_747};
                int16_t *l_772 = &g_229;
                int64_t *l_773 = (void*)0;
                int64_t *l_774 = &g_85;
                uint32_t l_775[4] = {0x45401014L,0x45401014L,0x45401014L,0x45401014L};
                int16_t *l_776 = &g_142;
                int64_t *l_777 = &g_778;
                int32_t *l_779 = &g_2[5];
                int i;
                for (l_649 = 0; (l_649 >= 0); l_649 -= 1)
                { 
                    int8_t *l_745 = &l_744;
                    (*g_69) ^= ((safe_rshift_func_int16_t_s_u(((safe_div_func_int16_t_s_s((p_7 > (((safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(0x1EL, ((*g_225) || (((*l_745) = ((safe_add_func_int8_t_s_s((g_56 <= ((0x3EEB25BDL != p_7) == ((l_744 <= p_7) < g_229))), g_688)) & g_56)) == g_229)))), 6)) , l_746[0]) != g_748)), g_56)) | 0xEFL), 14)) | 0UL);
                    if (p_7)
                        break;
                    l_674 = (*l_671);
                }
                (*l_643) = func_25(((*l_777) = ((p_7 <= ((safe_add_func_uint8_t_u_u((p_7 == (((*l_776) = (safe_add_func_uint16_t_u_u(0xCBDAL, (((safe_mod_func_int64_t_s_s(((*l_774) = ((l_676.f0 , (safe_rshift_func_int16_t_s_u(0x3515L, 11))) < ((((safe_mod_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((~(safe_mul_func_int16_t_s_s(((+((safe_rshift_func_int16_t_s_s(l_771[4][0], ((*l_772) ^= 1L))) && g_517)) , 0xB655L), p_7))), p_7)), l_771[4][0])) | 1UL), 3)) , p_7), p_7)) && p_7) ^ p_7) ^ g_183))), 1UL)) | 0x95C4F5446C5D5B3ALL) < l_775[2])))) && p_7)), g_517)) > g_56)) != p_7)), l_779);
                if ((*l_779))
                    break;
            }
            else
            { 
                uint64_t l_781 = 0xB5688B370E27203ELL;
                int32_t *l_783 = &g_56;
                int32_t l_796[5][3][4] = {{{(-3L),(-2L),5L,0x51F02AB6L},{(-10L),(-9L),1L,5L},{0x51F02AB6L,(-9L),(-8L),0x51F02AB6L}},{{(-9L),(-2L),(-10L),(-3L)},{(-1L),(-9L),(-1L),1L},{0x51F02AB6L,(-3L),(-1L),0L}},{{(-9L),(-10L),5L,(-3L)},{5L,0x51F02AB6L,5L,(-2L)},{(-9L),(-9L),(-1L),1L}},{{0x51F02AB6L,(-1L),(-1L),0x51F02AB6L},{(-1L),0x51F02AB6L,(-10L),5L},{(-9L),(-9L),(-8L),0L}},{{0x51F02AB6L,5L,1L,0L},{(-10L),(-9L),5L,5L},{(-3L),0x51F02AB6L,0xAEFCAF85L,0x51F02AB6L}}};
                int i, j, k;
                if (l_780[2][2])
                { 
                    int8_t l_782[1][2];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_782[i][j] = 0xBEL;
                    }
                    l_781 ^= 0x673465EFL;
                    if (l_771[3][5])
                        break;
                    (*g_69) ^= l_782[0][0];
                    (*l_643) = l_783;
                }
                else
                { 
                    uint16_t l_784 = 0xDC8AL;
                    l_784++;
                    if (l_687)
                        continue;
                    (*g_69) &= (-7L);
                }
                (*l_783) |= ((safe_mul_func_int8_t_s_s(((safe_div_func_uint32_t_u_u(p_7, 0x8837E9EAL)) , (0x008AL > 65528UL)), ((l_771[3][5] != (l_791 != ((safe_div_func_uint16_t_u_u(p_7, p_7)) , &l_700))) > g_517))) == 0x9134L);
                --l_802;
            }
            (*l_643) = (void*)0;
        }
    }
    return p_7;
}



static uint16_t  func_10(int8_t  p_11)
{ 
    union U1 l_16 = {5L};
    uint16_t l_32 = 0UL;
    uint32_t *l_35 = (void*)0;
    uint32_t *l_36 = &g_37;
    union U1 l_63 = {4L};
    int32_t *l_68 = &g_2[5];
    int32_t **l_67[7] = {&l_68,&l_68,&l_68,&l_68,&l_68,&l_68,&l_68};
    const int32_t *l_632[4][2][6] = {{{&g_56,(void*)0,&g_56,&g_56,(void*)0,&g_56},{&g_2[2],(void*)0,&g_2[2],&g_56,&g_2[2],&g_56}},{{&g_56,(void*)0,&g_56,&g_56,(void*)0,&g_56},{&g_2[2],(void*)0,&g_2[2],&g_56,&g_2[2],&g_56}},{{&g_56,(void*)0,&g_56,(void*)0,&g_56,(void*)0},{&g_2[4],&g_56,&g_2[4],(void*)0,&g_2[2],(void*)0}},{{&g_2[5],&g_56,&g_2[5],(void*)0,&g_56,(void*)0},{&g_2[4],&g_56,&g_2[4],(void*)0,&g_2[2],(void*)0}}};
    const int32_t **l_631 = &l_632[1][0][3];
    uint32_t l_633[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_633[i] = 18446744073709551615UL;
    (*l_631) = func_12(l_16, (safe_lshift_func_uint16_t_u_u(((l_16.f0 , func_19((g_69 = func_25((safe_mul_func_int8_t_s_s((p_11 , (safe_lshift_func_uint8_t_u_s(g_2[5], 4))), (l_32 != (safe_add_func_uint32_t_u_u(((*l_36) = p_11), func_38(func_42((safe_rshift_func_uint8_t_u_u(l_16.f0, l_16.f0)), l_16.f0, p_11), g_2[5], l_63)))))), l_36)), &g_2[5], &g_2[3], g_2[2], &g_2[1])) != g_144[4][4][2]), 6)), p_11);
    (*g_69) |= 0x88F41A2AL;
    return l_633[2];
}



static const int32_t * func_12(union U1  p_13, uint16_t  p_14, int32_t  p_15)
{ 
    union U1 l_146 = {0x6DL};
    int16_t *l_150 = &g_142;
    uint8_t *l_157 = &g_135;
    int32_t l_159 = 0L;
    int32_t l_181 = 0xD2EE02ECL;
    uint64_t *l_190 = &l_146.f2;
    struct S0 *l_237 = (void*)0;
    int32_t * const ***l_244 = &g_217;
    int32_t l_252 = 0L;
    int32_t l_253 = 0xEE29DF94L;
    int32_t *l_272 = &g_145;
    struct S0 l_274 = {0UL,18446744073709551615UL};
    int16_t l_293 = 0L;
    int32_t l_320 = 0L;
    int16_t l_406 = 0xAF35L;
    int32_t l_469 = 0xA5C093C5L;
    int32_t l_470 = 0x127474FAL;
    int32_t l_471 = 0x600C7A5CL;
    int32_t l_472 = 4L;
    int32_t l_473[5][2] = {{(-1L),0x51932E26L},{0x51932E26L,(-1L)},{0x51932E26L,0x51932E26L},{(-1L),0x51932E26L},{0x51932E26L,(-1L)}};
    int64_t l_474 = 0xB2FF600C9B70DB72LL;
    uint8_t l_476 = 255UL;
    int64_t l_524 = 0x565F498262B84163LL;
    uint32_t *l_545 = &g_37;
    int32_t l_564 = 0xC6477534L;
    int64_t l_566 = 0xC71D2C828B5EAA5FLL;
    uint32_t l_604 = 1UL;
    int8_t l_630[1];
    int i, j;
    for (i = 0; i < 1; i++)
        l_630[i] = 0xB0L;
    if ((l_146 , (safe_add_func_uint32_t_u_u((l_146.f0 <= (~((*l_150) = 0x1537L))), (safe_rshift_func_int8_t_s_u((safe_add_func_int64_t_s_s((g_85 &= ((((3UL == ((((safe_mul_func_int16_t_s_s(((((*l_157) = (0xC586C6A208CA92D9LL && (l_146 , ((p_14 || l_146.f0) , l_146.f0)))) <= l_146.f0) >= p_14), g_56)) & p_15) >= 0x4AB0L) < g_37)) , g_119) <= g_119) | g_54.f3)), 1L)), 7))))))
    { 
        int32_t l_169 = 0x716F66F7L;
        int32_t l_174 = 0xC79C0CF3L;
        int32_t l_179 = (-1L);
        if ((!((*g_69) = ((*g_69) != 0xE7CDA8B2L))))
        { 
            l_159 |= (p_14 < l_146.f0);
            return &g_145;
        }
        else
        { 
            uint32_t l_166[3];
            int32_t l_172 = 0x44E6814EL;
            int32_t l_173 = 0L;
            int32_t l_175 = (-2L);
            int32_t l_176 = (-3L);
            int32_t l_178 = (-1L);
            int i;
            for (i = 0; i < 3; i++)
                l_166[i] = 0UL;
            for (g_61.f1 = 0; (g_61.f1 < 49); g_61.f1 = safe_add_func_int16_t_s_s(g_61.f1, 8))
            { 
                int8_t l_170[4] = {0xE5L,0xE5L,0xE5L,0xE5L};
                int32_t l_171 = 7L;
                int32_t l_177 = (-2L);
                int32_t l_180 = 0x602268D0L;
                int32_t l_182 = 6L;
                struct S0 l_188[7] = {{0xFA95L,18446744073709551611UL},{0xFA95L,18446744073709551611UL},{0xFA95L,18446744073709551611UL},{0xFA95L,18446744073709551611UL},{0xFA95L,18446744073709551611UL},{0xFA95L,18446744073709551611UL},{0xFA95L,18446744073709551611UL}};
                int i;
                for (l_146.f2 = (-11); (l_146.f2 == 38); ++l_146.f2)
                { 
                    int32_t *l_164 = &g_2[5];
                    int32_t *l_165[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    struct S0 *l_189 = &l_188[6];
                    uint32_t *l_199 = (void*)0;
                    uint32_t *l_200 = &l_166[1];
                    int i;
                    --l_166[2];
                    --g_183;
                    if (l_179)
                        continue;
                    (*l_164) = (safe_mod_func_uint32_t_u_u(((*l_200) |= (p_15 <= ((((*l_189) = l_188[6]) , (((l_190 != (void*)0) > (safe_mod_func_uint16_t_u_u((((((((safe_mul_func_int8_t_s_s(l_171, 0x7DL)) || ((safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u(g_135, l_180)), p_14)) | g_85)) >= 0x3BE2858DL) , p_13.f0) | 3UL) ^ g_54.f0) <= p_15), p_15))) >= 0x0861L)) | g_183))), 0x7DCF5926L));
                    return &g_145;
                }
            }
        }
    }
    else
    { 
        int32_t l_205 = 0xA1AEF994L;
        l_205 = (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(g_142, 6)), 0));
    }
    g_144[4][4][2] = &g_2[3];
    for (l_181 = (-20); (l_181 <= 0); l_181 = safe_add_func_uint8_t_u_u(l_181, 3))
    { 
        uint16_t *l_233 = &g_61.f0;
        int32_t l_245 = 0L;
        int64_t l_261[6] = {0L,0L,0L,0L,0L,0L};
        int32_t l_262 = (-1L);
        int32_t l_263 = (-1L);
        int32_t l_266 = 0x51E06E49L;
        int32_t **l_273 = &g_144[4][4][2];
        int i;
        for (g_183 = 26; (g_183 > 36); ++g_183)
        { 
            uint16_t *l_232 = &g_61.f0;
            int32_t l_234 = 0L;
            struct S0 l_235[2] = {{0xC587L,0x63060AC4L},{0xC587L,0x63060AC4L}};
            int32_t l_256 = 0xE2562001L;
            uint32_t l_257[2][6][7] = {{{0UL,4294967286UL,0UL,4294967286UL,4294967286UL,0UL,4294967286UL},{4294967295UL,6UL,0xA5FD6FEAL,0xA5FD6FEAL,6UL,4294967295UL,6UL},{0UL,4294967286UL,4294967286UL,0UL,4294967286UL,0UL,4294967286UL},{1UL,1UL,4294967295UL,0xA5FD6FEAL,4294967295UL,1UL,1UL},{4294967295UL,4294967286UL,0xC4754AE1L,4294967286UL,4294967295UL,4294967295UL,4294967286UL},{0xFD65F528L,6UL,0xFD65F528L,4294967295UL,4294967295UL,0xFD65F528L,6UL}},{{4294967286UL,4294967286UL,0xC4754AE1L,0xC4754AE1L,4294967286UL,4294967286UL,4294967286UL},{0xFD65F528L,4294967295UL,4294967295UL,0xFD65F528L,6UL,0xFD65F528L,4294967295UL},{4294967295UL,4294967295UL,4294967286UL,0xC4754AE1L,4294967286UL,4294967295UL,4294967295UL},{1UL,4294967295UL,0xA5FD6FEAL,4294967295UL,1UL,1UL,4294967295UL},{0UL,4294967286UL,0UL,4294967286UL,4294967286UL,0UL,4294967286UL},{4294967295UL,6UL,0xA5FD6FEAL,0xA5FD6FEAL,6UL,4294967295UL,6UL}}};
            int32_t l_264 = 0x6BB4594AL;
            int32_t l_265 = 0x2D4CAE69L;
            int32_t *l_271 = &l_265;
            int i, j, k;
            for (g_101 = 18; (g_101 < (-19)); --g_101)
            { 
                for (g_54.f1 = 0; (g_54.f1 <= 58); ++g_54.f1)
                { 
                    const uint64_t l_214 = 0x3C3769B55EDAC480LL;
                    if (l_214)
                        break;
                }
            }
            for (p_13.f2 = 0; (p_13.f2 != 42); p_13.f2 = safe_add_func_uint8_t_u_u(p_13.f2, 3))
            { 
                int32_t * const ***l_218 = &g_217;
                int32_t l_250 = 0L;
                int32_t l_251 = 0x4F619B41L;
                int64_t l_254 = 0xA7E2C62B3468687BLL;
                int32_t *l_260[7][2][1] = {{{&l_250},{(void*)0}},{{&l_250},{(void*)0}},{{&l_250},{(void*)0}},{{&l_250},{(void*)0}},{{&l_250},{(void*)0}},{{&l_250},{(void*)0}},{{&l_250},{(void*)0}}};
                uint64_t l_268 = 18446744073709551612UL;
                int i, j, k;
                (*l_218) = g_217;
                for (g_119 = 3; (g_119 >= 0); g_119 -= 1)
                { 
                    uint32_t *l_227 = &g_37;
                    int16_t *l_228 = &g_229;
                    uint16_t *l_231 = &g_61.f0;
                    uint16_t **l_230[4] = {&l_231,&l_231,&l_231,&l_231};
                    struct S0 *l_236 = &l_235[0];
                    int32_t *l_246 = &l_159;
                    int32_t *l_247 = &l_245;
                    int32_t *l_248 = (void*)0;
                    int32_t *l_249[3][6][1] = {{{(void*)0},{&g_56},{(void*)0},{&g_56},{(void*)0},{&g_56}},{{(void*)0},{&g_56},{(void*)0},{&g_56},{(void*)0},{&g_56}},{{(void*)0},{&g_56},{(void*)0},{&g_56},{(void*)0},{&g_56}}};
                    int32_t l_255 = (-2L);
                    int i, j, k;
                    l_234 = (safe_sub_func_uint32_t_u_u((1UL <= (safe_add_func_int8_t_s_s((((l_232 = (((safe_sub_func_uint32_t_u_u(((*l_227) = (0x244882DFL || (p_14 > (l_190 == g_225)))), 0xF50E07B2L)) , ((((*l_228) = ((*l_150) = 0xAFA5L)) , g_119) || 9L)) , &p_14)) != l_233) >= g_2[5]), 1L))), p_13.f2));
                    (*l_236) = l_235[1];
                    (*g_69) = ((l_237 == &g_61) != (safe_add_func_int8_t_s_s(g_54.f0, (l_245 = (((void*)0 == &g_135) & (safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(p_13.f3, ((*l_233) = ((((void*)0 == l_244) , 5L) != l_245)))), p_14)))))));
                    l_257[1][3][3]--;
                }
                l_268--;
                if (p_13.f2)
                    break;
            }
            l_256 |= 0xFC2021FBL;
            l_272 = l_271;
        }
        (*l_273) = &l_266;
        (*l_273) = ((l_274 , ((*g_225) = (safe_div_func_uint32_t_u_u(((p_14 < ((*l_157) ^= (safe_unary_minus_func_int8_t_s(g_54.f0)))) & (-1L)), g_37)))) , &g_101);
        (*g_69) ^= (safe_mod_func_uint32_t_u_u((l_274 , p_15), 9L));
    }
    for (p_13.f1 = 0; (p_13.f1 <= 5); p_13.f1 += 1)
    { 
        int32_t * const * const l_285 = &g_69;
        int8_t *l_286[3][2][7] = {{{&g_267,&g_267,&g_119,(void*)0,&g_267,&g_119,&g_267},{&g_267,&l_146.f0,&l_146.f0,&g_267,&g_54.f0,(void*)0,&g_267}},{{&g_267,&g_267,&g_267,&g_267,&l_146.f0,&g_119,&g_119},{&g_54.f0,&l_146.f0,&g_54.f0,(void*)0,(void*)0,&g_54.f0,&l_146.f0}},{{&l_146.f0,&g_119,&g_119,&l_146.f0,&g_267,&g_267,&l_146.f0},{(void*)0,&l_146.f0,(void*)0,&g_119,&l_146.f0,&g_267,&g_267}}};
        const int32_t *l_288 = &g_145;
        struct S0 l_304[1] = {{0xF512L,0xB28F6E9EL}};
        uint64_t *l_321 = &g_226;
        int32_t l_328 = 0x8DB4B3EDL;
        int32_t l_331 = 0L;
        int32_t l_332 = 0xD3CAC74BL;
        uint32_t l_334 = 0x669896BEL;
        union U1 l_359 = {0x32L};
        uint64_t l_360 = 18446744073709551615UL;
        int32_t *l_367[1];
        uint32_t l_394 = 4294967287UL;
        int64_t l_395[2];
        int32_t *l_404 = (void*)0;
        const int32_t l_407[6] = {0x82F5772AL,(-1L),(-1L),0x82F5772AL,(-1L),(-1L)};
        uint16_t **l_410 = (void*)0;
        uint16_t **l_411 = (void*)0;
        int32_t *****l_420 = &g_305;
        int8_t l_460 = 0x8CL;
        int16_t l_468 = 0xE98BL;
        uint64_t *l_599 = (void*)0;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_367[i] = &l_253;
        for (i = 0; i < 2; i++)
            l_395[i] = 2L;
        if (((safe_lshift_func_uint16_t_u_s(g_2[p_13.f1], 10)) >= (p_14 == ((((((!((g_267 = (l_285 == (l_146 , l_285))) != (safe_unary_minus_func_uint32_t_u((0x56L | 0xADL))))) || (*g_225)) == (**l_285)) <= p_13.f1) <= p_13.f0) >= g_61.f0))))
        { 
            return l_288;
        }
        else
        { 
            int64_t l_289[6][2][7] = {{{0L,0xC66F5831237CA5B1LL,1L,0L,1L,0xC66F5831237CA5B1LL,0L},{(-6L),0L,0xC66F5831237CA5B1LL,1L,0L,1L,0xC66F5831237CA5B1LL}},{{0L,0L,0xE2F2D2754F78D936LL,0x8E5D4F6F6D356F01LL,0x9CA378054361898ELL,0xE2F2D2754F78D936LL,0x9CA378054361898ELL},{0x8E5D4F6F6D356F01LL,0xC66F5831237CA5B1LL,0xC66F5831237CA5B1LL,0x8E5D4F6F6D356F01LL,1L,(-6L),0x8E5D4F6F6D356F01LL}},{{(-6L),0x9CA378054361898ELL,1L,1L,0x9CA378054361898ELL,(-6L),0xC66F5831237CA5B1LL},{0x9CA378054361898ELL,0x8E5D4F6F6D356F01LL,0xE2F2D2754F78D936LL,0L,0L,0xE2F2D2754F78D936LL,0x8E5D4F6F6D356F01LL}},{{0x9CA378054361898ELL,0xC66F5831237CA5B1LL,(-6L),0x9CA378054361898ELL,1L,1L,0x9CA378054361898ELL},{(-6L),0x8E5D4F6F6D356F01LL,(-6L),1L,0x8E5D4F6F6D356F01LL,0xC66F5831237CA5B1LL,0xC66F5831237CA5B1LL}},{{0x8E5D4F6F6D356F01LL,0x9CA378054361898ELL,0xE2F2D2754F78D936LL,0x9CA378054361898ELL,0x8E5D4F6F6D356F01LL,0xE2F2D2754F78D936LL,0L},{0L,0xC66F5831237CA5B1LL,1L,0L,1L,0xC66F5831237CA5B1LL,0L}},{{(-6L),0L,0xC66F5831237CA5B1LL,1L,0L,1L,0xC66F5831237CA5B1LL},{0L,0L,0xE2F2D2754F78D936LL,0x8E5D4F6F6D356F01LL,0x9CA378054361898ELL,0xE2F2D2754F78D936LL,0x9CA378054361898ELL}}};
            int32_t *l_290 = &l_253;
            int i, j, k;
            if (l_289[2][1][6])
                break;
            l_290 = l_290;
        }
        if ((safe_sub_func_int16_t_s_s(l_293, ((g_61 , g_142) | 0xE8E0L))))
        { 
            const int32_t *l_294[2][2][3] = {{{(void*)0,(void*)0,&l_253},{(void*)0,(void*)0,(void*)0}},{{&g_101,(void*)0,(void*)0},{(void*)0,&g_101,&l_253}}};
            int i, j, k;
            return &g_145;
        }
        else
        { 
            int64_t *l_297 = (void*)0;
            int64_t *l_298 = (void*)0;
            int64_t *l_299 = &g_85;
            int32_t *****l_308 = &g_305;
            uint32_t *l_318 = &g_37;
            const int32_t l_319 = 0xC9E93917L;
            int32_t l_329 = 0x6FBF4255L;
            int32_t l_330 = 0xBF1236BCL;
            int32_t l_333[3];
            uint32_t l_376 = 0xAE991AB5L;
            union U1 *l_402[1];
            int32_t *l_405 = &l_359.f3;
            int i;
            for (i = 0; i < 3; i++)
                l_333[i] = 0x74BA816AL;
            for (i = 0; i < 1; i++)
                l_402[i] = &l_359;
            if (((safe_sub_func_int16_t_s_s(((*l_150) |= 0L), (((((((*l_299) |= (-1L)) , (((*l_299) ^= 0xBFE89841C2129FDFLL) > (safe_sub_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((((+(((((((&g_217 != (l_304[0] , ((*l_308) = g_305))) | (safe_mul_func_int16_t_s_s((((safe_div_func_int16_t_s_s((~(((safe_mul_func_uint8_t_u_u(((((*l_157) = (((*l_318) = (safe_add_func_uint16_t_u_u(((p_15 >= 3UL) | (*g_225)), p_14))) > p_13.f3)) < 0x39L) == 0UL), p_14)) < p_13.f1) != l_319)), l_320)) , g_229) > (*g_225)), g_145))) & 0x7969E0E3L) || p_15) | 0xA9CFC381L) , p_13.f3) , p_14)) , &g_226) == l_321))), (-6L))))) <= p_13.f0) < p_13.f0) & 18446744073709551609UL) & 0UL))) ^ 0L))
            { 
                const int32_t *l_322 = (void*)0;
                return l_322;
            }
            else
            { 
                const int32_t **l_323 = &l_288;
                int32_t l_324 = 0x469C5E9BL;
                int32_t l_327[6];
                uint16_t *l_364 = (void*)0;
                uint16_t *l_365 = (void*)0;
                const struct S0 *l_366 = (void*)0;
                int i;
                for (i = 0; i < 6; i++)
                    l_327[i] = (-8L);
                (*l_323) = &l_319;
                for (l_146.f1 = 0; (l_146.f1 <= 3); l_146.f1 += 1)
                { 
                    int32_t *l_325 = &g_101;
                    int32_t *l_326[4] = {&l_181,&l_181,&l_181,&l_181};
                    uint16_t *l_346 = (void*)0;
                    uint64_t * const l_351 = &g_226;
                    uint16_t *l_358 = &g_183;
                    const int8_t *l_361 = &g_267;
                    int i;
                    --l_334;
                    (*l_325) ^= ((*g_69) &= p_13.f1);
                    l_327[2] &= (safe_div_func_int16_t_s_s(((*l_150) = (safe_mul_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s((p_15 < ((~(p_14++)) & ((safe_rshift_func_uint8_t_u_u((((*l_325) ^= ((void*)0 == l_351)) , (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(p_15, (safe_mul_func_int16_t_s_s(((g_226 < (((*l_358) = 0UL) != ((((((g_54.f3 <= g_85) , l_359) , (*l_288)) < (**l_323)) <= 0xE952L) > 6UL))) == (**l_323)), p_15)))), p_13.f3))), 5)) < (**l_285)))), 0x6FL)), 0)) | 0x482C53F3L) | 0x388B4046L), 0UL))), l_360));
                    l_327[3] = (l_361 != (void*)0);
                    if ((*g_69))
                        continue;
                }
                if (p_13.f1)
                    break;
                (*l_323) = (((((**l_285) = ((-6L) && (safe_lshift_func_uint16_t_u_u((p_14 = (**l_285)), 9)))) == (p_13.f3 && (9UL == (g_61 , ((l_366 != &l_304[0]) && 65533UL))))) ^ (-7L)) , l_367[0]);
            }
            --g_368;
            for (l_330 = 0; (l_330 <= 3); l_330 += 1)
            { 
                const struct S0 *l_373 = &l_274;
                int32_t l_377 = 0x77BDA6F5L;
                (*g_69) = (safe_lshift_func_int16_t_s_u(((void*)0 == l_373), (safe_lshift_func_uint16_t_u_u(((*l_288) , (l_376 < ((((void*)0 == l_157) , ((*l_150) &= p_13.f3)) ^ l_377))), g_85))));
                for (g_142 = 3; (g_142 >= 0); g_142 -= 1)
                { 
                    int i, j, k;
                    g_144[p_13.f1][p_13.f1][l_330] = &l_377;
                    l_329 = (p_13.f3 <= (((((0UL ^ ((safe_sub_func_int8_t_s_s(p_14, ((&g_226 != (((safe_div_func_int32_t_s_s(p_14, (((+(g_267 = (safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((((safe_unary_minus_func_int64_t_s(((safe_lshift_func_int16_t_s_u(((((g_119 != (p_13.f1 >= p_15)) , p_15) <= (*g_225)) != l_377), (**l_285))) , p_13.f3))) != l_394) == 0UL) && l_377), g_226)), 6)) >= g_85), p_14)))) ^ 65534UL) ^ g_85))) , 4294967293UL) , (void*)0)) , g_85))) && l_395[0])) != g_61.f1) <= 3L) , l_286[0][0][2]) != (void*)0));
                }
                if ((**l_285))
                    break;
                for (l_293 = 15; (l_293 != (-3)); l_293 = safe_sub_func_uint64_t_u_u(l_293, 6))
                { 
                    if (p_13.f3)
                        break;
                    (**l_285) &= (-1L);
                }
            }
            g_2[p_13.f1] |= ((safe_unary_minus_func_uint8_t_u(((g_54 , ((((*l_318) = p_13.f3) , (((safe_unary_minus_func_uint64_t_u((safe_mul_func_int16_t_s_s(g_37, ((g_54 = g_54) , (~(((*l_405) = ((p_13.f0 , l_404) == (void*)0)) , g_61.f1))))))) > 0xD93F8C166A06F390LL) , l_406)) | 0UL)) <= l_407[5]))) < p_13.f0);
        }
        (**l_285) = (safe_lshift_func_int16_t_s_s(((l_411 = l_410) == (void*)0), 4));
        for (p_15 = 0; (p_15 <= 3); p_15 += 1)
        { 
            int16_t l_412 = 0L;
            int32_t l_433 = 0x4F3697CAL;
            int32_t l_434 = 1L;
            uint8_t * const l_453 = (void*)0;
            int32_t l_464[6][3][4] = {{{0x8E0F0D33L,0x8E0F0D33L,0x990CAACBL,0x990CAACBL},{0x8E0F0D33L,0x8E0F0D33L,0x990CAACBL,0x990CAACBL},{0x8E0F0D33L,0x8E0F0D33L,0x990CAACBL,0x990CAACBL}},{{0x8E0F0D33L,0x8E0F0D33L,0x990CAACBL,0x990CAACBL},{0x8E0F0D33L,0x8E0F0D33L,0x990CAACBL,0x990CAACBL},{0x8E0F0D33L,0x8E0F0D33L,0x990CAACBL,0x990CAACBL}},{{0x8E0F0D33L,0x8E0F0D33L,0x990CAACBL,0x990CAACBL},{0x8E0F0D33L,0x8E0F0D33L,0x990CAACBL,0x990CAACBL},{0x8E0F0D33L,0x8E0F0D33L,0x990CAACBL,0x990CAACBL}},{{0x8E0F0D33L,0x8E0F0D33L,0x990CAACBL,0x990CAACBL},{0x8E0F0D33L,0x8E0F0D33L,0x990CAACBL,0x990CAACBL},{0x8E0F0D33L,0x8E0F0D33L,0x990CAACBL,0x990CAACBL}},{{0x8E0F0D33L,0x8E0F0D33L,0x990CAACBL,0x990CAACBL},{0x8E0F0D33L,0x8E0F0D33L,0x990CAACBL,0x990CAACBL},{0x8E0F0D33L,0x8E0F0D33L,0x990CAACBL,0x990CAACBL}},{{0x8E0F0D33L,0x8E0F0D33L,0x990CAACBL,0x990CAACBL},{0x8E0F0D33L,0x8E0F0D33L,0x990CAACBL,0x990CAACBL},{0x8E0F0D33L,0x8E0F0D33L,0x990CAACBL,0x990CAACBL}}};
            uint32_t l_465 = 6UL;
            int8_t l_475 = 0xBEL;
            uint32_t *l_543 = &l_394;
            int32_t *l_556[1];
            struct S0 l_574 = {0x8C57L,0xEB71E493L};
            uint64_t **l_577 = (void*)0;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_556[i] = &g_2[0];
        }
    }
    return &g_2[5];
}



static int32_t * func_19(int32_t * p_20, int32_t * p_21, int32_t * p_22, uint16_t  p_23, int32_t * p_24)
{ 
    const int64_t l_75 = 0xB2EDFD6825D0BC5DLL;
    uint32_t *l_76 = &g_37;
    struct S0 *l_83[7] = {&g_61,(void*)0,&g_61,&g_61,(void*)0,&g_61,&g_61};
    int64_t *l_84 = &g_85;
    uint32_t l_86 = 0UL;
    int32_t *l_87 = &g_56;
    uint64_t l_88 = 8UL;
    const int32_t l_132 = 1L;
    uint8_t *l_133 = (void*)0;
    uint8_t *l_134 = &g_135;
    int16_t *l_140 = (void*)0;
    int16_t *l_141 = &g_142;
    uint16_t *l_143 = &g_61.f0;
    int i;
    (*l_87) |= ((safe_rshift_func_int8_t_s_s(((void*)0 == &p_22), ((((safe_mod_func_uint16_t_u_u((((+(l_75 <= (++(*l_76)))) | 18446744073709551615UL) , ((((safe_sub_func_int64_t_s_s(((*l_84) ^= (((safe_rshift_func_int8_t_s_u(((g_61 , l_83[5]) != l_83[5]), 6)) ^ 0xFAE11B4C5108D7EBLL) != g_54.f3)), l_86)) && g_54.f1) , &g_61) == (void*)0)), p_23)) , 0x1EL) && g_61.f0) > g_2[5]))) , l_86);
    l_88++;
    for (g_54.f1 = 0; (g_54.f1 <= 35); g_54.f1 = safe_add_func_uint16_t_u_u(g_54.f1, 6))
    { 
        int32_t *l_100 = &g_101;
        int64_t *l_108 = &g_85;
        uint64_t *l_109 = &l_88;
        uint16_t *l_117 = (void*)0;
        uint16_t *l_118 = &g_61.f0;
        int32_t l_120 = 0x5B34FEB1L;
        int32_t *l_121 = (void*)0;
        int32_t l_122 = (-1L);
        int32_t *l_123 = &l_122;
        int32_t *l_124[3];
        uint32_t l_125 = 0xD72A7422L;
        int i;
        for (i = 0; i < 3; i++)
            l_124[i] = &g_101;
        (*l_100) |= (safe_sub_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_s(g_61.f0, (*l_87))) & 9UL), (((safe_mod_func_int8_t_s_s(0xA3L, p_23)) , (~0xECL)) & ((((*g_69) = ((*p_21) &= 0xA374779CL)) | (*l_87)) , (*l_87)))));
        (*p_21) ^= (((safe_rshift_func_int8_t_s_s((*l_87), g_54.f0)) < (safe_div_func_uint64_t_u_u(((*l_109) ^= (safe_rshift_func_uint8_t_u_u((&g_85 == (l_108 = &g_85)), 4))), ((*l_87) && (~0UL))))) != ((((safe_mod_func_int8_t_s_s((((*l_118) = (safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(p_23, (*l_87))), p_23))) || g_54.f3), p_23)) > p_23) ^ (*l_100)) , 3UL));
        l_125--;
        if ((*g_69))
            break;
    }
    (*g_69) |= (g_54.f1 != ((((*l_134) = ((safe_mul_func_uint8_t_u_u(g_2[5], ((safe_lshift_func_int8_t_s_s(0xE7L, 5)) > l_132))) && g_119)) >= (((((((safe_lshift_func_uint16_t_u_s(((*l_143) = ((p_23 || (((*l_141) = ((safe_mod_func_uint64_t_u_u(p_23, p_23)) , 1L)) || g_61.f0)) > 0x5BE9L)), 4)) ^ 0x1FL) < g_54.f0) > 0UL) <= p_23) != p_23) >= 0x42E135D2L)) | (*l_87)));
    return &g_2[5];
}



static int32_t * func_25(const int64_t  p_26, int32_t * p_27)
{ 
    for (g_54.f2 = (-21); (g_54.f2 == 16); g_54.f2 = safe_add_func_int64_t_s_s(g_54.f2, 6))
    { 
        int32_t l_66 = 0x0EC253D5L;
        (*p_27) &= (l_66 , 0x883EB999L);
    }
    return p_27;
}



static uint32_t  func_38(union U1  p_39, const uint32_t  p_40, union U1  p_41)
{ 
    return g_2[5];
}



static union U1  func_42(int32_t  p_43, uint16_t  p_44, int32_t  p_45)
{ 
    struct S0 *l_62[1];
    int i;
    for (i = 0; i < 1; i++)
        l_62[i] = &g_61;
    for (p_43 = 0; (p_43 > 26); p_43 = safe_add_func_uint64_t_u_u(p_43, 2))
    { 
        uint32_t l_50[7];
        union U1 l_60 = {9L};
        int i;
        for (i = 0; i < 7; i++)
            l_50[i] = 0x1F9E6A01L;
        for (p_45 = 0; (p_45 <= 6); p_45 += 1)
        { 
            int32_t *l_53 = &g_2[5];
            int32_t *l_55 = &g_56;
            int32_t **l_57 = (void*)0;
            int32_t **l_58 = (void*)0;
            int32_t **l_59 = &l_55;
            int i;
            (*l_55) = (safe_mod_func_int64_t_s_s((l_53 != (g_54 , &g_2[5])), ((0x58D83F7CD3E5C7D8LL | l_50[p_45]) & g_2[5])));
            (*l_59) = &g_2[4];
        }
        return l_60;
    }
    g_61 = g_61;
    return g_54;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_54.f0, "g_54.f0", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_61.f0, "g_61.f0", print_hash_value);
    transparent_crc(g_61.f1, "g_61.f1", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_517, "g_517", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_635[i], "g_635[i]", print_hash_value);

    }
    transparent_crc(g_672.f0, "g_672.f0", print_hash_value);
    transparent_crc(g_672.f1, "g_672.f1", print_hash_value);
    transparent_crc(g_688, "g_688", print_hash_value);
    transparent_crc(g_778, "g_778", print_hash_value);
    transparent_crc(g_794, "g_794", print_hash_value);
    transparent_crc(g_812, "g_812", print_hash_value);
    transparent_crc(g_845, "g_845", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_850[i], "g_850[i]", print_hash_value);

    }
    transparent_crc(g_997, "g_997", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1023[i][j][k], "g_1023[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1064[i][j][k], "g_1064[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1102.f0, "g_1102.f0", print_hash_value);
    transparent_crc(g_1103, "g_1103", print_hash_value);
    transparent_crc(g_1150, "g_1150", print_hash_value);
    transparent_crc(g_1174, "g_1174", print_hash_value);
    transparent_crc(g_1261, "g_1261", print_hash_value);
    transparent_crc(g_1275, "g_1275", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1291[i], "g_1291[i]", print_hash_value);

    }
    transparent_crc(g_1311, "g_1311", print_hash_value);
    transparent_crc(g_1383, "g_1383", print_hash_value);
    transparent_crc(g_1436.f0, "g_1436.f0", print_hash_value);
    transparent_crc(g_1443, "g_1443", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1543[i], "g_1543[i]", print_hash_value);

    }
    transparent_crc(g_1553, "g_1553", print_hash_value);
    transparent_crc(g_1596, "g_1596", print_hash_value);
    transparent_crc(g_1622, "g_1622", print_hash_value);
    transparent_crc(g_1651, "g_1651", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
