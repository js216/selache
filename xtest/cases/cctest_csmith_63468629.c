// SPDX-License-Identifier: MIT
// cctest_csmith_63468629.c --- cctest case csmith_63468629 (csmith seed 1665566249)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd630f30b */
/* @exp_ticks 0x4ea8 */

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

// Options:   -s 1665566249 -o /tmp/csmith_gen_xuru488d/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const uint8_t  f0;
   uint16_t  f1;
   int32_t  f2;
   int64_t  f3;
   uint64_t  f4;
   uint32_t  f5;
};
#pragma pack(pop)

union U1 {
   const struct S0  f0;
   int32_t  f1;
   int8_t  f2;
};


static int32_t g_2[1][3] = {{0x7BF5CD53L,0x7BF5CD53L,0x7BF5CD53L}};
static int32_t g_6 = 0x166941FCL;
static int64_t g_40 = 0x71694A98A1BD053ALL;
static int32_t g_42 = 0L;
static uint32_t g_44 = 1UL;
static int16_t g_49 = 0L;
static uint64_t g_50 = 18446744073709551615UL;
static uint64_t g_56[4][4][1] = {{{0xB3DAD933B151854ELL},{18446744073709551610UL},{3UL},{0x656207CCB15B75D3LL}},{{3UL},{18446744073709551610UL},{0xB3DAD933B151854ELL},{0xB3DAD933B151854ELL}},{{18446744073709551610UL},{3UL},{0x656207CCB15B75D3LL},{3UL}},{{18446744073709551610UL},{0xB3DAD933B151854ELL},{0xB3DAD933B151854ELL},{18446744073709551610UL}}};
static uint64_t g_66 = 0x113C509C0D0DA963LL;
static uint16_t g_79 = 0xBC76L;
static uint8_t g_98[5][3][2] = {{{0x7BL,0x7BL},{0x7BL,0x86L},{255UL,0xEFL}},{{0x86L,0xEFL},{255UL,0x86L},{0x7BL,0x7BL}},{{0x7BL,0x86L},{255UL,0xEFL},{0x86L,0xEFL}},{{255UL,0x86L},{0x7BL,0x7BL},{0x7BL,0x86L}},{{255UL,0xEFL},{0x86L,0x7BL},{5UL,255UL}}};
static int64_t g_119 = 0x76B532C91DF6875CLL;
static int16_t g_138 = 1L;
static uint32_t g_153 = 0x8F3A3E21L;
static uint16_t g_156 = 0xE5F1L;
static int16_t g_159 = 0x3E55L;
static int8_t g_160 = 0L;
static int32_t g_166 = 7L;
static int32_t g_167 = 0x1A31D27BL;
static uint32_t g_168[3][1] = {{4294967295UL},{4294967295UL},{4294967295UL}};
static const struct S0 g_178[5] = {{0xDCL,0x5B18L,0xE96879FCL,1L,0x2B2DEDBDE70362B2LL,18446744073709551615UL},{0xDCL,0x5B18L,0xE96879FCL,1L,0x2B2DEDBDE70362B2LL,18446744073709551615UL},{0xDCL,0x5B18L,0xE96879FCL,1L,0x2B2DEDBDE70362B2LL,18446744073709551615UL},{0xDCL,0x5B18L,0xE96879FCL,1L,0x2B2DEDBDE70362B2LL,18446744073709551615UL},{0xDCL,0x5B18L,0xE96879FCL,1L,0x2B2DEDBDE70362B2LL,18446744073709551615UL}};
static int16_t g_198 = 0L;
static int8_t g_199 = (-4L);
static int64_t g_200[4] = {0xE45CAA373232EF97LL,0xE45CAA373232EF97LL,0xE45CAA373232EF97LL,0xE45CAA373232EF97LL};
static uint8_t g_202 = 246UL;



static const uint32_t  func_1(void);
static uint8_t  func_9(uint8_t  p_10, const int16_t  p_11, uint16_t  p_12, struct S0  p_13);
static int16_t  func_15(int8_t  p_16);
static const int64_t  func_21(uint32_t  p_22, uint32_t  p_23, uint16_t  p_24, int64_t  p_25, const int64_t  p_26);




static const uint32_t  func_1(void)
{ 
    int32_t l_5[4];
    uint32_t l_162 = 0x5A70E1A0L;
    uint8_t l_185 = 248UL;
    uint64_t l_259 = 5UL;
    int32_t l_300 = 0x34A9D08FL;
    uint32_t l_319 = 4294967295UL;
    int i;
    for (i = 0; i < 4; i++)
        l_5[i] = 0xAA0D7227L;
    for (g_2[0][2] = 0; (g_2[0][2] > 20); g_2[0][2]++)
    { 
        struct S0 l_14 = {0xEAL,0x3CF8L,-4L,0xF2D6273D5943E2F7LL,18446744073709551612UL,18446744073709551615UL};
        int8_t l_137 = 0x8AL;
        int32_t l_155 = 0x285B31AEL;
        if (g_2[0][1])
        { 
            int32_t l_136 = 0x7BDD452DL;
            for (g_6 = 3; (g_6 >= 0); g_6 -= 1)
            { 
                int i;
                l_5[g_6] = (safe_lshift_func_int8_t_s_u((func_9((l_5[g_6] >= (g_2[0][2] != g_2[0][2])), (0L | l_5[2]), g_6, l_14) <= g_6), 6));
                g_138 ^= (safe_mod_func_int32_t_s_s((safe_unary_minus_func_int8_t_s((0x20L | (((l_14.f2 = (((safe_add_func_int8_t_s_s((safe_div_func_int64_t_s_s((1UL != ((l_136 = (safe_add_func_int64_t_s_s((7UL ^ ((safe_unary_minus_func_int32_t_s(l_5[g_6])) ^ g_44)), 0x78CC6E09C6F5E584LL))) , g_50)), g_56[0][3][0])), 9L)) < 0x6F84042AL) != g_40)) == g_50) , l_5[g_6])))), l_137));
                return g_98[2][0][0];
            }
        }
        else
        { 
            uint64_t l_146 = 0UL;
            int32_t l_161 = (-9L);
            int64_t l_165 = 0x89FCF5468D3076AELL;
            for (l_14.f2 = 0; (l_14.f2 <= 3); l_14.f2 += 1)
            { 
                int i;
                if (l_5[l_14.f2])
                    break;
                if (g_138)
                    break;
            }
            for (l_137 = 0; (l_137 > 21); l_137 = safe_add_func_int64_t_s_s(l_137, 5))
            { 
                l_5[1] = 9L;
                l_146 = (safe_lshift_func_uint16_t_u_u(((+(safe_sub_func_uint64_t_u_u(l_14.f2, l_5[3]))) , g_119), 9));
            }
            if ((g_153 |= (l_14.f2 = (safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(0xBFL, 2)) , (((g_79 |= g_119) , ((((((g_79 = g_49) ^ (-1L)) ^ g_6) == g_2[0][0]) && g_50) & g_49)) < 4294967295UL)), g_98[1][1][0])), 4294967290UL)))))
            { 
                uint32_t l_154[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_154[i] = 0x71E7B35EL;
                l_154[0] = l_146;
                g_156++;
                ++l_162;
            }
            else
            { 
                l_14.f2 = l_162;
                l_165 = l_14.f1;
            }
        }
        ++g_168[1][0];
    }
    if ((+(safe_add_func_uint8_t_u_u((g_98[1][1][0] = ((safe_mod_func_uint32_t_u_u(g_98[1][1][0], (safe_add_func_int8_t_s_s(0L, 0xE3L)))) , (g_178[4] , 0x28L))), l_162))))
    { 
        int16_t l_179 = 0x3DD6L;
        int32_t l_180 = 1L;
        int32_t l_181 = 0x790059E3L;
        int32_t l_182 = 0x38EFF3EBL;
        int32_t l_183[1];
        int16_t l_184 = 1L;
        uint64_t l_190[4][2];
        int32_t l_201 = 1L;
        int i, j;
        for (i = 0; i < 1; i++)
            l_183[i] = 0L;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 2; j++)
                l_190[i][j] = 18446744073709551615UL;
        }
        l_185++;
        for (g_50 = 0; (g_50 <= 0); g_50 += 1)
        { 
            uint64_t l_191[1][4];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                    l_191[i][j] = 0UL;
            }
            for (l_180 = 0; (l_180 <= 0); l_180 += 1)
            { 
                int i, j;
                g_2[0][2] = ((0xAAL ^ g_168[l_180][l_180]) <= ((safe_mod_func_uint64_t_u_u(((l_183[l_180] ^ (((-1L) && 0xD2C5A230L) != l_5[l_180])) | l_190[0][0]), l_191[0][3])) , g_138));
                l_183[l_180] = (safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s(g_98[2][1][1], (safe_mod_func_uint8_t_u_u((g_198 = (g_178[0] , g_138)), (++g_202))))), ((g_2[0][2] = g_166) > l_185)));
                l_181 = g_79;
            }
            g_6 |= (safe_mod_func_int64_t_s_s(((((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((0x10D7L ^ (g_79 = (safe_rshift_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s((((safe_add_func_int8_t_s_s(((l_183[g_50] != (l_5[(g_50 + 3)] | (safe_mod_func_uint64_t_u_u((safe_div_func_uint8_t_u_u(g_2[0][2], l_162)), 0xD98822D358E9FEB4LL)))) != g_166), g_168[1][0])) ^ 0x1571C5A3L) >= 0xBC32F6A4L), g_79)) | 0x9BL) | g_98[1][1][1]), g_138)))) | g_159), g_2[0][2])), 0UL)) | g_200[2]) && g_178[4].f1) <= g_159), g_160));
            for (l_179 = 0; (l_179 <= 0); l_179 += 1)
            { 
                uint64_t l_233 = 0x2D75E7628BC1734ELL;
                int32_t l_239 = (-5L);
                int i, j;
                l_5[3] |= (safe_rshift_func_int16_t_s_s(((g_168[1][0] = (g_168[(l_179 + 2)][l_179] , (safe_sub_func_uint8_t_u_u(l_191[0][0], (safe_mod_func_int64_t_s_s((((safe_div_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(((((safe_mul_func_int8_t_s_s(((g_166 , (g_168[(l_179 + 2)][l_179] & (-1L))) <= l_162), g_178[4].f3)) , g_160) <= 0x2B76836BL) || g_40), 13)), l_162)) >= g_178[4].f3) == l_233), (-3L))))))) < l_183[g_50]), 3));
                g_2[0][2] = (((g_168[1][0] = (safe_add_func_int32_t_s_s(g_50, (!(((safe_mod_func_uint8_t_u_u(g_178[4].f0, l_162)) , (l_239 = g_156)) || 0xF959L))))) & 0x9D798BD2L) <= g_178[4].f5);
            }
        }
        for (g_44 = 24; (g_44 >= 60); ++g_44)
        { 
            int64_t l_244[4][4] = {{0x996229258A53ACA8LL,(-3L),(-4L),(-4L)},{0x1C9ACD293EDD8F24LL,0x1C9ACD293EDD8F24LL,8L,(-3L)},{(-3L),0x996229258A53ACA8LL,8L,0x996229258A53ACA8LL},{0x1C9ACD293EDD8F24LL,(-1L),(-4L),8L}};
            int32_t l_245 = (-10L);
            int i, j;
            for (g_66 = (-19); (g_66 <= 31); g_66 = safe_add_func_int16_t_s_s(g_66, 7))
            { 
                l_244[2][2] = 6L;
                l_245 = (l_5[0] = l_179);
            }
        }
    }
    else
    { 
        int32_t l_246 = 0x0B9419DEL;
        const int32_t l_260[1][1] = {{0xDE0F109CL}};
        int32_t l_305 = 0xDB0181DCL;
        int32_t l_313[1];
        uint16_t l_348 = 0xBD4AL;
        int i, j;
        for (i = 0; i < 1; i++)
            l_313[i] = 0xA30DCA21L;
        l_246 = 8L;
        l_5[2] = ((((safe_sub_func_int32_t_s_s(((safe_mod_func_int64_t_s_s(l_246, (safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(g_2[0][1], (0xFF78L <= ((safe_sub_func_int32_t_s_s(((l_259 &= ((safe_mod_func_int32_t_s_s(l_162, g_178[4].f0)) , g_166)) <= l_162), l_185)) >= g_178[4].f3)))) == l_260[0][0]), l_185)))) > l_5[2]), l_185)) <= l_5[1]) == g_44) > g_202);
        if ((((g_42 || (g_202 = (g_2[0][2] && (safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((l_5[2] |= l_246), (safe_lshift_func_int8_t_s_s(l_162, g_56[0][3][0])))), l_259)), 3UL))))) & g_2[0][2]) >= g_160))
        { 
            int32_t l_284 = 0x1094EE7DL;
            int32_t l_285 = (-10L);
            for (g_40 = 28; (g_40 != 1); --g_40)
            { 
                return g_49;
            }
            l_285 = (safe_rshift_func_uint16_t_u_u(((-10L) || l_260[0][0]), (safe_mul_func_int8_t_s_s(((+((safe_sub_func_int64_t_s_s(0xB289A04E641A28E5LL, (((safe_lshift_func_int16_t_s_s(((safe_mod_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(65535UL, 0x0531L)), l_259)) ^ 0L), 15)) <= (-9L)) & l_259))) & l_246)) & 1L), l_284))));
            for (g_79 = 0; (g_79 <= 0); g_79 += 1)
            { 
                return g_198;
            }
        }
        else
        { 
            int32_t l_299 = 0x62FF8B2BL;
            int32_t l_306 = 0x02ABD1A8L;
            int32_t l_307 = 0L;
            int32_t l_308 = 0xCCFB4439L;
            int32_t l_310 = (-9L);
            int32_t l_311[4];
            uint64_t l_373[5][5][1] = {{{18446744073709551611UL},{0UL},{18446744073709551611UL},{0UL},{18446744073709551611UL}},{{0UL},{18446744073709551611UL},{0UL},{18446744073709551611UL},{0UL}},{{18446744073709551611UL},{0UL},{18446744073709551611UL},{0UL},{18446744073709551611UL}},{{0UL},{18446744073709551611UL},{0UL},{18446744073709551611UL},{0UL}},{{18446744073709551611UL},{0UL},{18446744073709551611UL},{0UL},{18446744073709551611UL}}};
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_311[i] = (-6L);
            if (((((safe_div_func_int32_t_s_s(((g_56[0][3][0] < (safe_rshift_func_int16_t_s_s(g_42, (~((safe_sub_func_uint64_t_u_u(((safe_sub_func_int64_t_s_s((!(g_98[3][0][0] &= (+(l_185 || l_5[2])))), l_299)) , l_162), 0x6F046711D07B9890LL)) , g_168[1][0]))))) | 1L), l_300)) && 0UL) > 255UL) || g_98[4][2][0]))
            { 
                int16_t l_301 = (-10L);
                uint32_t l_302 = 3UL;
                int32_t l_309 = 0xE616235AL;
                int32_t l_312 = 1L;
                int32_t l_314 = 0x1FBE3D4AL;
                int32_t l_315 = 0x0DFBF983L;
                int32_t l_316 = 0x75A24C56L;
                int16_t l_317 = 0xF62FL;
                int32_t l_318 = 0L;
                uint64_t l_347 = 0xBDAC5F200AAEA3A5LL;
                --l_302;
                l_319--;
                g_2[0][2] = (safe_unary_minus_func_uint16_t_u((((((safe_rshift_func_uint8_t_u_u(0xA0L, 0)) == (safe_sub_func_int64_t_s_s(((((safe_lshift_func_int16_t_s_s(((safe_div_func_int64_t_s_s(((safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(((l_5[0] = (((l_308 ^= ((g_6 = ((safe_mod_func_int32_t_s_s((safe_div_func_uint16_t_u_u(0UL, ((safe_sub_func_uint32_t_u_u(((l_347 = (((0x60L > l_260[0][0]) , l_162) >= (-10L))) , l_306), l_311[2])) | g_56[1][0][0]))), l_311[3])) && g_156)) || 0x59F6053CL)) != (-7L)) , 0xADD65BEBL)) , l_185), 249UL)) == 0x379ABE34B0513A6BLL), 0UL)), 0L)) , l_260[0][0]), l_260[0][0])), 0x2EL)) || l_299), g_156)) || 1L), l_312)) < l_313[0]) == l_348) , l_307), 0xE1E7725FC3209E22LL))) < g_40) < l_317) <= l_302)));
            }
            else
            { 
                uint8_t l_349[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_349[i] = 0xEFL;
                --l_349[0];
            }
            l_305 = (safe_mul_func_int16_t_s_s((((g_168[1][0] = (l_313[0] |= ((((safe_mul_func_int16_t_s_s((g_178[4].f5 < (safe_lshift_func_uint8_t_u_u(((l_5[0] ^= l_319) != ((safe_sub_func_int8_t_s_s(0x42L, (safe_mod_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_s((((safe_add_func_uint64_t_u_u(g_2[0][1], l_260[0][0])) || l_300) >= g_160), 0)) < g_44), g_49)))) && 0xB5C4E9EE496C6600LL)), l_162))), l_185)) , g_198) , 0UL) , 0x9639D0DBL))) < (-3L)) | 0UL), (-1L)));
            l_306 = ((l_373[4][1][0] = (safe_rshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s((248UL ^ (g_160 > ((+(8UL ^ (0x75B8159A78E7382CLL || g_40))) , l_311[2]))), 0xAB00L)), g_79)), 6))) != 0x8CL);
        }
    }
    return g_159;
}



static uint8_t  func_9(uint8_t  p_10, const int16_t  p_11, uint16_t  p_12, struct S0  p_13)
{ 
    int32_t l_17[1][3];
    int32_t l_67[2];
    int32_t l_68 = (-10L);
    int8_t l_77 = 0x90L;
    uint32_t l_80 = 0x9281337FL;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_17[i][j] = 0x211521FAL;
    }
    for (i = 0; i < 2; i++)
        l_67[i] = 0x0452CFD9L;
lbl_101:
    l_68 = (l_67[1] = (func_15(l_17[0][2]) , (0L & g_6)));
    for (g_50 = 0; (g_50 <= 0); g_50 += 1)
    { 
        int16_t l_78 = (-1L);
        union U1 l_91[4] = {{{1UL,4UL,0x822056F0L,0x031241CAE3A4B37CLL,18446744073709551615UL,0xD5AD9A11L}},{{1UL,4UL,0x822056F0L,0x031241CAE3A4B37CLL,18446744073709551615UL,0xD5AD9A11L}},{{1UL,4UL,0x822056F0L,0x031241CAE3A4B37CLL,18446744073709551615UL,0xD5AD9A11L}},{{1UL,4UL,0x822056F0L,0x031241CAE3A4B37CLL,18446744073709551615UL,0xD5AD9A11L}}};
        int32_t l_97 = 1L;
        int i;
        l_80 = ((0UL ^ ((g_79 = (((safe_rshift_func_int8_t_s_s((+(l_77 = (((~g_66) < (safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u((g_44 = 6UL), g_40)), g_42))) == g_2[0][2]))), 5)) > 8L) | l_78)) && g_2[0][1])) <= l_78);
        for (l_78 = 0; (l_78 <= 0); l_78 += 1)
        { 
            int16_t l_89 = 0x5DFBL;
            uint16_t l_93 = 65530UL;
            int32_t l_95[1][1];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_95[i][j] = 0x4AB4704BL;
            }
            for (g_49 = 0; (g_49 <= 0); g_49 += 1)
            { 
                int32_t l_90 = 0L;
                int i, j, k;
                l_67[(l_78 + 1)] = ((safe_sub_func_uint8_t_u_u(0UL, l_17[g_50][(g_50 + 1)])) >= (((0L | (((-1L) | g_56[(g_49 + 3)][(g_49 + 2)][g_50]) && l_67[(g_49 + 1)])) != p_13.f3) , 4294967295UL));
                l_90 &= (18446744073709551614UL <= (l_67[1] = (g_2[0][2] , (0x77L && (safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((safe_div_func_uint64_t_u_u((g_56[g_50][(g_50 + 3)][g_50] = ((l_89 != 1L) || 0x5DL)), p_13.f5)), p_13.f2)), 4))))));
            }
            if ((((((l_17[g_50][(l_78 + 2)] , l_91[1]) , l_17[g_50][g_50]) , (p_13.f4 = (+g_56[0][3][0]))) & 7L) != l_93))
            { 
                uint32_t l_94 = 0x138347E9L;
                int32_t l_96 = 7L;
                p_13.f2 = g_66;
                if (l_94)
                    break;
                ++g_98[1][1][0];
            }
            else
            { 
                if (g_6)
                    goto lbl_101;
            }
            l_67[1] = ((((safe_mod_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(g_98[1][1][0], ((!4294967295UL) & (safe_div_func_int16_t_s_s((g_40 != g_42), l_91[1].f0.f2))))), 6UL)) , 0x5BL) ^ l_93) || g_2[0][2]);
            for (p_13.f3 = 0; (p_13.f3 <= 0); p_13.f3 += 1)
            { 
                int i, j, k;
                l_67[1] &= (g_119 = ((0xC897B4F3L == ((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_uint16_t_u((safe_mul_func_uint16_t_u_u((g_79 ^= (safe_rshift_func_uint8_t_u_u(g_56[(g_50 + 1)][g_50][l_78], 0))), (safe_mod_func_uint64_t_u_u((g_56[(l_78 + 1)][(l_78 + 2)][p_13.f3] && (l_95[0][0] ^= (safe_unary_minus_func_uint8_t_u(g_56[(l_78 + 2)][(l_78 + 2)][p_13.f3])))), 0x14308392A3DF0C45LL)))))), 9)) == g_50)) && g_79));
                if (l_67[0])
                    break;
                p_13.f2 = p_13.f1;
            }
        }
    }
    p_13.f2 = (safe_div_func_uint8_t_u_u(l_17[0][2], ((safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s((g_98[1][1][0] != (((p_13.f2 , (-1L)) , p_13.f0) == p_12)), g_56[0][3][0])), p_13.f5)) & 0x9E7EL)));
    return g_42;
}



static int16_t  func_15(int8_t  p_16)
{ 
    uint32_t l_18 = 0xCA4F0670L;
    int32_t l_19 = 0x72585FAFL;
    if ((l_19 = l_18))
    { 
        uint64_t l_20[4][1][4] = {{{18446744073709551615UL,0x35F19716E289AA50LL,18446744073709551615UL,0x35F19716E289AA50LL}},{{18446744073709551615UL,0x35F19716E289AA50LL,18446744073709551615UL,0x35F19716E289AA50LL}},{{18446744073709551615UL,0x35F19716E289AA50LL,18446744073709551615UL,0x35F19716E289AA50LL}},{{18446744073709551615UL,0x35F19716E289AA50LL,18446744073709551615UL,0x35F19716E289AA50LL}}};
        int i, j, k;
        for (p_16 = 0; (p_16 <= 0); p_16 += 1)
        { 
            int64_t l_41 = 0x34D56B862B336FDELL;
            for (l_19 = 0; (l_19 <= 0); l_19 += 1)
            { 
                int32_t l_31 = 0L;
                int32_t l_43[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_43[i] = 0xB1506F57L;
                g_40 = ((((func_21((l_31 = (safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(g_2[0][1], (((((l_31 != (g_6 == ((safe_sub_func_int16_t_s_s(((p_16 , p_16) , g_2[0][2]), p_16)) >= 0xA4L))) | g_6) < g_2[0][2]) , g_6) == 0x9EL))), p_16))), g_2[0][2], l_20[3][0][3], l_20[0][0][1], g_6) | l_18) , p_16) == 5UL) > 7L);
                l_41 |= p_16;
                ++g_44;
            }
            g_50 = (g_49 = (g_42 ^ (safe_div_func_int64_t_s_s((-5L), l_18))));
            for (g_44 = 0; (g_44 <= 0); g_44 += 1)
            { 
                return l_18;
            }
        }
        return p_16;
    }
    else
    { 
        uint64_t l_59 = 18446744073709551615UL;
        for (l_18 = 29; (l_18 >= 20); --l_18)
        { 
            int16_t l_53 = (-3L);
            int32_t l_54 = 0x3CB4EA99L;
            int32_t l_55 = 0L;
            --g_56[0][3][0];
        }
        g_66 = (g_2[0][2] & ((l_19 = l_59) == ((safe_mod_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(p_16, (safe_sub_func_uint64_t_u_u(l_59, 18446744073709551609UL)))) | 1L), g_50)) < p_16)));
    }
    return p_16;
}



static const int64_t  func_21(uint32_t  p_22, uint32_t  p_23, uint16_t  p_24, int64_t  p_25, const int64_t  p_26)
{ 
    uint16_t l_36 = 0x898AL;
    uint32_t l_39 = 9UL;
    for (p_23 = 0; (p_23 >= 25); p_23 = safe_add_func_int32_t_s_s(p_23, 8))
    { 
        ++l_36;
    }
    l_39 = 0x21DABEE0L;
    return l_39;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_56[i][j][k], "g_56[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_98[i][j][k], "g_98[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_168[i][j], "g_168[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_178[i].f0, "g_178[i].f0", print_hash_value);
        transparent_crc(g_178[i].f1, "g_178[i].f1", print_hash_value);
        transparent_crc(g_178[i].f2, "g_178[i].f2", print_hash_value);
        transparent_crc(g_178[i].f3, "g_178[i].f3", print_hash_value);
        transparent_crc(g_178[i].f4, "g_178[i].f4", print_hash_value);
        transparent_crc(g_178[i].f5, "g_178[i].f5", print_hash_value);

    }
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_200[i], "g_200[i]", print_hash_value);

    }
    transparent_crc(g_202, "g_202", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
