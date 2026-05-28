// SPDX-License-Identifier: MIT
// cctest_csmith_96332a09.c --- cctest case csmith_96332a09 (csmith seed 2519935497)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x177613fc */
/* @exp_ticks 0x5ca8 */

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

// Options:   -s 2519935497 -o /tmp/csmith_gen_9imtf7oz/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const uint32_t  f0;
   int8_t  f1;
   const int32_t  f2;
   int8_t  f3;
};
#pragma pack(pop)

union U2 {
   struct S0  f0;
   int8_t  f1;
};

union U3 {
   uint8_t  f0;
   uint32_t  f1;
};


static uint32_t g_2 = 0x00F47A6DL;
static uint64_t g_17 = 0x1ECE3051EBF0DDD9LL;
static int8_t g_19 = 6L;
static uint8_t g_22 = 0x0EL;
static int8_t g_32[3][3][5] = {{{(-1L),(-1L),(-1L),0xE5L,(-1L)},{0x17L,(-1L),0xE5L,0x17L,0xE5L},{0x17L,0x17L,3L,(-1L),1L}},{{(-1L),1L,0xE5L,0xE5L,1L},{1L,(-1L),(-1L),1L,0xE5L},{(-1L),1L,3L,1L,(-1L)}},{{(-1L),0x17L,(-1L),0xE5L,0x17L},{(-1L),(-1L),(-1L),(-1L),0xE5L},{1L,(-1L),3L,0x17L,0x17L}}};
static uint32_t g_33 = 0x1FAFBF26L;
static int8_t g_40 = (-1L);
static int32_t g_49 = 0x7762969FL;
static int32_t g_51 = 0x8D7EFBAEL;
static int32_t g_64 = 6L;
static int8_t g_80 = 0xCDL;
static union U3 g_84 = {0xCFL};
static uint32_t g_87 = 0xF4458B99L;
static uint16_t g_113 = 65532UL;
static uint64_t g_119 = 0x58279F83FA7B1138LL;
static uint32_t g_136 = 0x4074BD28L;
static int32_t g_160[4] = {0x79F888D3L,0x79F888D3L,0x79F888D3L,0x79F888D3L};
static uint32_t g_168 = 0UL;
static union U2 g_183 = {{0UL,0L,-1L,0xD9L}};
static int32_t g_185 = 0xBE1BD848L;



static const union U2  func_1(void);
static struct S0  func_11(union U3  p_12);
static union U3  func_13(uint32_t  p_14, uint8_t  p_15);
static int32_t  func_26(union U3  p_27);




static const union U2  func_1(void)
{ 
    int64_t l_16 = 1L;
    int32_t l_201 = 0xB2CCD057L;
    const union U2 l_218 = {{0xB3BDE5FCL,0x87L,1L,1L}};
    g_2--;
    l_201 |= ((safe_mul_func_uint32_t_u_u((safe_add_func_uint64_t_u_u(((safe_div_func_uint16_t_u_u(((func_11(func_13(l_16, (g_17 = 252UL))) , l_16) , 1UL), l_16)) ^ l_16), 18446744073709551613UL)), 0UL)) , 0L);
    for (g_119 = 0; (g_119 != 55); g_119++)
    { 
        int32_t l_214 = 1L;
        int32_t l_217 = (-5L);
        l_217 = (safe_add_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((safe_add_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u(g_32[0][1][2], 6)) , g_87), (safe_lshift_func_int8_t_s_s((l_214 = g_113), (safe_mod_func_uint32_t_u_u((((l_217 <= g_84.f0) <= 0L) || l_217), g_168)))))), l_16)), l_217));
    }
    return l_218;
}



static struct S0  func_11(union U3  p_12)
{ 
    union U3 l_28 = {0x62L};
    union U2 l_47 = {{18446744073709551614UL,0x3BL,0xC767DBF1L,0x95L}};
    int64_t l_48 = 0xC74E2B783560277ELL;
    const int8_t l_58 = 9L;
    int32_t l_107 = (-1L);
    int32_t l_111 = (-1L);
    int32_t l_117 = 0x54F23DFBL;
    int32_t l_118 = 3L;
    uint64_t l_178 = 0xEB93CA2B8C224E53LL;
    struct S0 l_200[2] = {{0xBC8B4DF1L,0xE3L,3L,8L},{0xBC8B4DF1L,0xE3L,3L,8L}};
    int i;
    if (func_26((p_12 = l_28)))
    { 
        uint8_t l_39 = 0x72L;
        uint32_t l_42 = 0UL;
        int32_t l_50[2];
        int i;
        for (i = 0; i < 2; i++)
            l_50[i] = 0L;
        g_33++;
        g_51 = (+(safe_add_func_int64_t_s_s(l_39, ((l_50[1] |= ((g_17 = ((g_49 ^= ((g_40 ^= 0x5C6AL) >= (((~(((((l_42++) <= (safe_lshift_func_uint16_t_u_u(((l_48 = (((((l_47 , ((-1L) < p_12.f0)) , g_22) < l_28.f0) != l_47.f0.f1) != g_22)) , l_39), l_39))) == g_17) && l_28.f0) >= l_39)) ^ 0x0BL) || l_42))) && l_47.f1)) && 0x5D5FCA44BAB92A1DLL)) && l_47.f0.f1))));
    }
    else
    { 
        uint64_t l_79 = 1UL;
        int32_t l_88 = 0x52CFD912L;
        int32_t l_116 = 0x6B32335DL;
        int8_t l_133 = 0L;
        int32_t l_135[5] = {0xE4E2A804L,0xE4E2A804L,0xE4E2A804L,0xE4E2A804L,0xE4E2A804L};
        uint32_t l_161[3];
        int i;
        for (i = 0; i < 3; i++)
            l_161[i] = 1UL;
        if ((safe_sub_func_uint32_t_u_u((g_40 ^ ((safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(255UL, g_40)), (l_58 , g_22))) == g_40)), 6UL)))
        { 
            int16_t l_63 = (-1L);
            uint64_t l_81 = 18446744073709551614UL;
            for (p_12.f0 = 0; (p_12.f0 >= 37); p_12.f0 = safe_add_func_uint16_t_u_u(p_12.f0, 2))
            { 
                uint64_t l_65 = 0x6F5737FB643E267ALL;
                g_64 &= (l_63 = (safe_rshift_func_uint16_t_u_u(0xAD58L, 4)));
                l_65 = 0xF575434BL;
            }
            if ((safe_div_func_uint32_t_u_u((((!(0xA04BL == ((g_80 &= (safe_rshift_func_uint16_t_u_s((((safe_add_func_int64_t_s_s(0x92973452C795732BLL, (((safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((p_12.f0 , p_12.f0) , 0x933BL), g_17)), p_12.f0)), 0xCE765620L)) == l_79) , 0x6636227FA2E55FDCLL))) | g_64) ^ l_63), 1))) != l_79))) ^ l_81) != 0x7322E546L), l_79)))
            { 
                g_64 |= ((safe_add_func_int16_t_s_s((((g_84 , ((((p_12.f0 <= (safe_lshift_func_int16_t_s_u((g_87 &= 0xC0D0L), 8))) , (l_88 = l_63)) <= l_47.f1) ^ 5L)) & g_84.f0) , l_63), p_12.f0)) == 0x6BFD34DB6457B54CLL);
            }
            else
            { 
                uint8_t l_99 = 0xE0L;
                l_99 = (safe_rshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((0xE0D7L & (((((((safe_lshift_func_uint8_t_u_u(((18446744073709551608UL | (safe_add_func_uint32_t_u_u((0x7097499C904586DBLL && ((18446744073709551615UL && g_51) < 0UL)), g_19))) != l_58), g_49)) ^ g_17) , 1L) , 0xBBL) == g_17) & l_47.f0.f0) <= g_17)) , p_12.f0), g_51)), g_64));
            }
        }
        else
        { 
            uint64_t l_102[3];
            int32_t l_132 = (-3L);
            int32_t l_134[1];
            int i;
            for (i = 0; i < 3; i++)
                l_102[i] = 0x4FDBC366FF5FBB4CLL;
            for (i = 0; i < 1; i++)
                l_134[i] = (-1L);
            for (p_12.f0 = 0; (p_12.f0 <= 2); p_12.f0 += 1)
            { 
                uint8_t l_110 = 252UL;
                int32_t l_112 = (-3L);
                g_64 = (safe_mul_func_uint8_t_u_u(g_19, (l_102[0] &= g_87)));
                l_112 = (((safe_sub_func_uint8_t_u_u(((l_107 = (safe_rshift_func_uint16_t_u_s(65535UL, 0))) | (p_12.f0 & l_102[0])), (safe_add_func_int64_t_s_s(((((l_111 = (g_22 < l_110)) >= g_22) & 0L) == 0x11L), g_22)))) , p_12.f0) | 6L);
                --g_113;
            }
            ++g_119;
            if ((safe_mod_func_uint32_t_u_u(((g_19 >= ((safe_add_func_int16_t_s_s(0xBB0BL, (l_132 = (safe_add_func_uint16_t_u_u(((0xCF3CB9137EFE7B18LL ^ (safe_sub_func_int64_t_s_s((safe_add_func_int8_t_s_s(l_116, l_116)), 0UL))) , 0UL), 0x3AF9L))))) , l_133)) || g_32[1][2][1]), g_22)))
            { 
                --g_136;
            }
            else
            { 
                l_117 &= (safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((p_12.f0 ^ ((safe_div_func_int64_t_s_s((func_13((l_107 = (safe_rshift_func_int16_t_s_u((safe_sub_func_int64_t_s_s((g_160[3] = ((~0x20E3L) > ((safe_rshift_func_uint8_t_u_u((g_84.f0 = ((safe_add_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((p_12.f0 & (safe_mul_func_int8_t_s_s((g_32[2][0][4] = (safe_sub_func_uint64_t_u_u(((g_84.f0 , 0L) >= g_87), 0x75B16568BFC0376BLL))), g_40))), l_28.f0)) > g_19), g_19)) && g_87)), p_12.f0)) | 8L))), (-3L))), l_161[0]))), l_102[0]) , 0x79CB204CE78BFBDALL), g_113)) ^ 65531UL)), p_12.f0)), 12));
            }
        }
        g_160[0] = g_119;
    }
    for (l_28.f1 = (-29); (l_28.f1 == 13); l_28.f1++)
    { 
        int8_t l_166 = 0x2DL;
        int32_t l_167 = 0xF84042ADL;
        int32_t l_176 = 0x6CD38516L;
        int32_t l_177 = 0L;
        const int32_t l_184 = 0L;
        g_64 ^= ((g_2 < (safe_add_func_uint8_t_u_u(((++g_168) != (p_12.f0 <= 0L)), ((safe_rshift_func_int8_t_s_s(((+l_47.f0.f3) && g_160[3]), p_12.f0)) && 252UL)))) , p_12.f0);
        g_185 |= (safe_sub_func_int8_t_s_s((((g_64 , (--l_178)) , ((l_118 ^= (((6L ^ (l_117 = ((safe_mul_func_uint8_t_u_u((g_183 , 255UL), g_160[2])) , p_12.f0))) | p_12.f0) <= p_12.f0)) != l_184)) == p_12.f0), 0x63L));
        for (g_113 = 0; (g_113 == 32); g_113 = safe_add_func_uint8_t_u_u(g_113, 3))
        { 
            for (l_107 = 25; (l_107 == (-21)); l_107 = safe_sub_func_uint8_t_u_u(l_107, 5))
            { 
                int8_t l_192[2][5][3];
                int32_t l_196 = (-1L);
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 5; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_192[i][j][k] = 3L;
                    }
                }
                g_185 &= (((safe_div_func_int8_t_s_s((0UL >= (l_192[1][3][2] |= p_12.f0)), ((safe_unary_minus_func_uint16_t_u(((safe_rshift_func_uint16_t_u_s(g_40, 2)) & (l_111 = ((0xD32EL ^ p_12.f0) < l_196))))) | 0xCF54L))) , l_192[1][3][2]) && 0L);
            }
        }
    }
    if ((l_118 = p_12.f0))
    { 
        struct S0 l_197 = {18446744073709551615UL,0x15L,0x4C801A31L,0L};
        return l_197;
    }
    else
    { 
        g_160[2] = ((++p_12.f0) ^ 255UL);
    }
    return l_200[0];
}



static union U3  func_13(uint32_t  p_14, uint8_t  p_15)
{ 
    int32_t l_18 = (-1L);
    int32_t l_20 = 0xFA017779L;
    int32_t l_21 = (-1L);
    union U3 l_25 = {0UL};
    --g_22;
    return l_25;
}



static int32_t  func_26(union U3  p_27)
{ 
    int16_t l_31 = 0x7C86L;
    for (g_17 = 0; (g_17 >= 27); g_17 = safe_add_func_uint16_t_u_u(g_17, 8))
    { 
        if (p_27.f0)
            break;
        return l_31;
    }
    return g_22;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_32[i][j][k], "g_32[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_84.f0, "g_84.f0", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_160[i], "g_160[i]", print_hash_value);

    }
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_183.f0.f0, "g_183.f0.f0", print_hash_value);
    transparent_crc(g_183.f0.f1, "g_183.f0.f1", print_hash_value);
    transparent_crc(g_183.f0.f2, "g_183.f0.f2", print_hash_value);
    transparent_crc(g_183.f0.f3, "g_183.f0.f3", print_hash_value);
    transparent_crc(g_183.f1, "g_183.f1", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
