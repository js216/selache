// SPDX-License-Identifier: MIT
// cctest_csmith_5fee67de.c --- cctest case csmith_5fee67de (csmith seed 1609459678)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc2b1ba6d */
/* @exp_ticks 0x4ac6 */

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

// Options:   -s 1609459678 -o /tmp/csmith_gen_w93jvwi0/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
   uint32_t  f1;
};
#pragma pack(pop)

struct S1 {
   uint64_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   struct S0  f0;
   int64_t  f1;
   const uint32_t  f2;
   int16_t  f3;
   uint8_t  f4;
};
#pragma pack(pop)

struct S3 {
   struct S1  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S4 {
   uint32_t  f0;
   struct S0  f1;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S5 {
   int32_t  f0;
};
#pragma pack(pop)

union U6 {
   const uint8_t  f0;
};

union U7 {
   int8_t  f0;
   uint16_t  f1;
};


static union U7 g_8 = {0x17L};
static struct S1 g_19[5] = {{9UL},{9UL},{9UL},{9UL},{9UL}};
static struct S4 g_30 = {0xC0AECAA7L,{0x54F8L,0xFC331464L}};
static int8_t g_44 = 0x16L;
static int32_t g_45 = (-6L);
static int32_t g_46 = (-1L);
static uint16_t g_47 = 65531UL;
static uint16_t g_62 = 65526UL;
static struct S3 g_70 = {{18446744073709551615UL}};
static uint16_t g_89[1][5][3] = {{{0x253AL,1UL,0x253AL},{65535UL,65535UL,65535UL},{0x253AL,1UL,0x253AL},{65535UL,65535UL,65535UL},{0x253AL,1UL,0x253AL}}};
static uint16_t g_104 = 65527UL;
static uint32_t g_127 = 0x8D452736L;
static int64_t g_128 = (-8L);
static struct S2 g_139 = {{0xAAD3L,0x241DCAF1L},0x1E74A9F0F70EDC5ELL,0xF8BD7A0FL,0xCAD7L,0x98L};
static union U6 g_141 = {255UL};
static struct S5 g_182[2] = {{1L},{1L}};



static int64_t  func_1(void);
static struct S3  func_2(struct S5  p_3, union U7  p_4, uint64_t  p_5, union U7  p_6);
static const struct S4  func_14(const int32_t  p_15, const int32_t  p_16, const int16_t  p_17, uint8_t  p_18);
static uint64_t  func_23(int8_t  p_24, struct S4  p_25);




static int64_t  func_1(void)
{ 
    struct S5 l_7 = {5L};
    int32_t l_13 = 0x9DADE661L;
    struct S3 l_199[2] = {{{18446744073709551615UL}},{{18446744073709551615UL}}};
    int32_t l_202[1];
    int i;
    for (i = 0; i < 1; i++)
        l_202[i] = (-7L);
    l_199[0] = func_2(l_7, g_8, (l_13 &= (safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(0x3EL, l_7.f0)), g_8.f0))), g_8);
    l_202[0] &= (l_13 != (g_139.f2 < (+(g_62 != (!((4294967294UL >= 0L) != g_89[0][3][1]))))));
    return g_127;
}



static struct S3  func_2(struct S5  p_3, union U7  p_4, uint64_t  p_5, union U7  p_6)
{ 
    struct S1 l_20 = {0x3E9973063D62A04FLL};
    int32_t l_28[5];
    int32_t l_29[2][2];
    struct S4 l_183[5] = {{4294967295UL,{0x5997L,0x6083ECD7L}},{4294967295UL,{0x5997L,0x6083ECD7L}},{4294967295UL,{0x5997L,0x6083ECD7L}},{4294967295UL,{0x5997L,0x6083ECD7L}},{4294967295UL,{0x5997L,0x6083ECD7L}}};
    int32_t l_196 = 0x7A74CFD5L;
    int32_t l_197[5] = {0x6C09E53FL,0x6C09E53FL,0x6C09E53FL,0x6C09E53FL,0x6C09E53FL};
    struct S3 l_198 = {{18446744073709551611UL}};
    int i, j;
    for (i = 0; i < 5; i++)
        l_28[i] = 0x5E2138B3L;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_29[i][j] = 0x13CD4FE9L;
    }
    l_183[0] = func_14(p_3.f0, (((l_20 = g_19[3]) , g_8.f0) & ((safe_div_func_uint64_t_u_u(func_23(((l_28[0] = ((((safe_add_func_uint32_t_u_u(l_28[0], p_4.f0)) & p_4.f0) && 0x260EL) < l_28[3])) ^ l_29[0][0]), g_30), p_6.f0)) > g_139.f2)), p_4.f0, l_29[0][0]);
    l_196 |= (safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s(p_3.f0, (safe_sub_func_uint64_t_u_u((0xEBAD2A39L < ((safe_mul_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(((l_28[0] ^= (func_14(p_6.f0, (l_29[1][0] ^= (safe_div_func_int16_t_s_s(g_8.f0, p_4.f0))), l_20.f0, g_139.f3) , 0x336772ACL)) >= g_139.f0.f1), (-2L))) != 0xD6E7BBDDL), 249UL)) != p_6.f0)), g_44)))), 1L));
    l_197[1] = 0L;
    return l_198;
}



static const struct S4  func_14(const int32_t  p_15, const int32_t  p_16, const int16_t  p_17, uint8_t  p_18)
{ 
    struct S4 l_144 = {1UL,{3UL,0x44C7A7E6L}};
    struct S5 l_181 = {5L};
    l_144 = l_144;
    l_144.f1 = l_144.f1;
    for (p_18 = 9; (p_18 <= 9); p_18 = safe_add_func_uint32_t_u_u(p_18, 9))
    { 
        int32_t l_162 = 0xB551873BL;
        int32_t l_178 = 0xB7F54350L;
        int32_t l_179 = (-5L);
        for (g_30.f1.f1 = 0; (g_30.f1.f1 >= 43); g_30.f1.f1 = safe_add_func_uint16_t_u_u(g_30.f1.f1, 9))
        { 
            uint32_t l_167 = 0xAD55D9A8L;
            int32_t l_177 = 6L;
            int32_t l_180[5];
            int i;
            for (i = 0; i < 5; i++)
                l_180[i] = 0x6BDDA40BL;
            l_167 = ((+(safe_mod_func_int16_t_s_s(((((safe_rshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u((g_47 | (safe_sub_func_uint8_t_u_u(g_139.f1, (safe_mul_func_int16_t_s_s(l_162, ((safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((p_15 >= l_162), 0x094CL)), 3)) == 0UL)))))), p_18)), p_16)) , p_17), 10)) | 0x83L) > p_15) , l_162), l_162))) & p_17);
            l_180[0] = ((safe_mod_func_int16_t_s_s(1L, ((((safe_div_func_int32_t_s_s((safe_div_func_uint64_t_u_u((~(l_178 |= (safe_lshift_func_uint8_t_u_s((((((l_162 = (0UL == (l_177 = (p_16 ^ p_16)))) ^ p_17) && p_15) >= 0x31AE8C0AL) || 65535UL), p_17)))), g_139.f1)), l_179)) || l_177) && l_167) ^ g_30.f1.f1))) , p_16);
            if (l_167)
                break;
        }
        if (l_144.f1.f1)
            break;
        g_182[0] = l_181;
    }
    return l_144;
}



static uint64_t  func_23(int8_t  p_24, struct S4  p_25)
{ 
    struct S5 l_50 = {0xB2B4B20FL};
    int16_t l_81 = 0xC75BL;
    int32_t l_88[2];
    uint8_t l_132 = 0x2FL;
    struct S2 l_140 = {{65526UL,0x092CE275L},0x91FC229ECF7F40F1LL,0x7D10A60FL,0x9342L,0x38L};
    int32_t l_142[5][4][5] = {{{8L,3L,1L,1L,3L},{0x7D48C05AL,0x81CD2028L,1L,0xE9923EC1L,(-1L)},{0L,1L,8L,0L,8L},{0x6FDCCDC4L,0x9BE39F15L,(-1L),0xE9923EC1L,1L}},{{(-4L),0L,0L,3L,3L},{0x52EC9A0CL,0x711E6C6AL,0x52EC9A0CL,0x81CD2028L,0x2FC83918L},{0L,0L,(-4L),1L,1L},{(-1L),0x9BE39F15L,0x6FDCCDC4L,(-1L),0x52EC9A0CL}},{{8L,0x05470BB3L,(-4L),1L,0L},{0x56C07334L,0xD045E245L,0x52EC9A0CL,0xD045E245L,0x56C07334L},{0x05470BB3L,1L,0L,1L,4L},{0x7D48C05AL,0L,(-1L),(-1L),0xA19F56D6L}},{{3L,(-4L),8L,1L,4L},{(-6L),(-1L),0x56C07334L,0x81CD2028L,0x56C07334L},{4L,4L,0x05470BB3L,3L,0L},{(-6L),0xDCB58CEAL,0x7D48C05AL,0xE9923EC1L,0x52EC9A0CL}},{{3L,0x45734C79L,3L,0L,1L},{0x7D48C05AL,0xDCB58CEAL,(-6L),0L,0x2FC83918L},{0x05470BB3L,4L,4L,0x05470BB3L,3L},{0x56C07334L,(-1L),(-6L),0x1760249FL,1L}}};
    int32_t l_143 = 1L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_88[i] = 5L;
    for (p_25.f1.f1 = (-12); (p_25.f1.f1 < 35); ++p_25.f1.f1)
    { 
        struct S2 l_41 = {{0xA480L,4294967295UL},0x4B9EFECF47A0CA4DLL,0x4406997BL,5L,1UL};
        int32_t l_43 = (-7L);
        for (p_24 = (-26); (p_24 > (-27)); p_24 = safe_sub_func_int64_t_s_s(p_24, 2))
        { 
            uint16_t l_35 = 0x1B3BL;
            int32_t l_42[1];
            int i;
            for (i = 0; i < 1; i++)
                l_42[i] = 7L;
            l_35 = p_24;
            for (p_25.f1.f0 = (-11); (p_25.f1.f0 != 26); p_25.f1.f0 = safe_add_func_uint8_t_u_u(p_25.f1.f0, 1))
            { 
                l_42[0] ^= (((safe_unary_minus_func_int8_t_s((0xB4404179B2C3978DLL == g_30.f0))) | (safe_mul_func_int16_t_s_s(g_30.f0, (l_41 , p_25.f0)))) ^ g_30.f1.f0);
                ++g_47;
                g_46 = (l_50 , (safe_mod_func_uint8_t_u_u(((+p_25.f1.f0) <= p_24), 0xCBL)));
            }
        }
    }
    for (p_25.f1.f0 = 18; (p_25.f1.f0 >= 7); p_25.f1.f0--)
    { 
        uint8_t l_61 = 0x28L;
        union U7 l_67 = {1L};
        int32_t l_68[1];
        struct S3 l_69 = {{0UL}};
        struct S0 l_98 = {65528UL,0UL};
        int i;
        for (i = 0; i < 1; i++)
            l_68[i] = 0x4C396C7BL;
        if ((safe_sub_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u((!255UL), p_25.f1.f1)) <= (l_61 == (g_62++))), (l_68[0] ^= ((safe_rshift_func_int8_t_s_u((((l_67 , 254UL) & 0x6CL) , 0x5BL), p_25.f0)) < l_67.f0)))))
        { 
            uint64_t l_79 = 0xA70091F4D940354ELL;
            int32_t l_80[5][1];
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                    l_80[i][j] = 0x5ED1428AL;
            }
            g_70 = (l_69 = l_69);
            if ((~(safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((!((safe_sub_func_uint16_t_u_u((l_80[0][0] = l_79), 0x06BDL)) || ((l_81 | (safe_add_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(0x4D75L, l_81)), 13)) > 0xE14FL), 0x13D96440L))) , l_80[0][0]))) , (-1L)), l_81)), l_79))))
            { 
                uint32_t l_103 = 1UL;
                ++g_89[0][3][1];
                l_68[0] &= ((((safe_sub_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(((((safe_add_func_int8_t_s_s(((((((0x3B4CL || ((g_30.f1.f0 = ((l_98 , (safe_div_func_uint64_t_u_u(6UL, (safe_mul_func_int8_t_s_s(l_79, p_25.f1.f0))))) > l_103)) | g_89[0][3][1])) < g_46) <= p_25.f0) ^ p_25.f1.f1) || 4294967287UL) && p_25.f1.f1), g_89[0][0][2])) <= 0x5FC24740L) > g_19[3].f0) == l_88[0]), l_67.f0)), 1L)) | 1UL) ^ l_103) ^ p_25.f1.f0);
                g_30 = (g_89[0][3][1] , g_30);
            }
            else
            { 
                g_104 ^= l_50.f0;
            }
            for (g_30.f0 = 0; (g_30.f0 <= 19); g_30.f0++)
            { 
                int8_t l_133 = 0x76L;
                g_45 |= (safe_add_func_int64_t_s_s((safe_div_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((p_25.f0 & g_70.f0.f0), 6)) != ((!(((~(safe_lshift_func_int16_t_s_s((-4L), ((safe_lshift_func_int16_t_s_u((g_128 ^= (g_127 = ((safe_div_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(0L, 6)), 8L)), l_61)) && 0L))), p_25.f1.f0)) && l_80[1][0])))) != l_79) ^ p_25.f1.f1)) <= g_47)), l_88[0])), l_68[0]));
                if (g_44)
                    break;
                l_80[3][0] = (p_24 & (!(l_81 != (safe_mod_func_uint32_t_u_u(((((l_68[0] ^= l_88[0]) <= ((l_132 > g_127) >= 0UL)) , l_133) | g_47), l_88[0])))));
            }
        }
        else
        { 
            uint8_t l_136 = 0xCFL;
            l_136 ^= (safe_lshift_func_int8_t_s_u(0xA9L, g_47));
        }
        l_68[0] = (l_143 = (l_50.f0 < (safe_mod_func_int32_t_s_s((g_139 , (l_142[1][3][3] ^= ((l_140 , g_141) , 0x04BDE658L))), p_25.f1.f1))));
        l_68[0] ^= g_141.f0;
    }
    return g_127;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8.f0, "g_8.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_19[i].f0, "g_19[i].f0", print_hash_value);

    }
    transparent_crc(g_30.f0, "g_30.f0", print_hash_value);
    transparent_crc(g_30.f1.f0, "g_30.f1.f0", print_hash_value);
    transparent_crc(g_30.f1.f1, "g_30.f1.f1", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_70.f0.f0, "g_70.f0.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_89[i][j][k], "g_89[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_139.f0.f0, "g_139.f0.f0", print_hash_value);
    transparent_crc(g_139.f0.f1, "g_139.f0.f1", print_hash_value);
    transparent_crc(g_139.f1, "g_139.f1", print_hash_value);
    transparent_crc(g_139.f2, "g_139.f2", print_hash_value);
    transparent_crc(g_139.f3, "g_139.f3", print_hash_value);
    transparent_crc(g_139.f4, "g_139.f4", print_hash_value);
    transparent_crc(g_141.f0, "g_141.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_182[i].f0, "g_182[i].f0", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
