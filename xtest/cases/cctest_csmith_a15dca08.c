// SPDX-License-Identifier: MIT
// cctest_csmith_a15dca08.c --- cctest case csmith_a15dca08 (csmith seed 2707278344)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd87eb40a */
/* @exp_ticks 0x3377 */

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

// Options:   -s 2707278344 -o /tmp/csmith_gen_lk97jzxc/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint8_t  f0;
};
#pragma pack(pop)

struct S1 {
   int16_t  f0;
   uint16_t  f1;
   int16_t  f2;
};

union U2 {
   uint64_t  f0;
   int32_t  f1;
   uint32_t  f2;
};


static int8_t g_2 = 0xEEL;
static int32_t g_26 = 0x1E33ECDCL;
static struct S0 g_35 = {0xD4L};
static struct S1 g_38 = {0L,7UL,0xA52BL};
static uint32_t g_53 = 0x0C4F31BCL;
static int8_t g_67 = 0L;
static uint64_t g_68 = 0xD33F623BA0E38899LL;
static const int8_t g_87 = 0x53L;
static uint8_t g_91 = 0x75L;
static uint32_t g_94 = 0x052D3D22L;
static uint64_t g_98 = 18446744073709551615UL;
static int32_t g_134 = (-1L);
static union U2 g_140 = {0xFA6678658A4148A9LL};
static uint64_t g_181 = 3UL;
static int8_t g_202 = 1L;



static int16_t  func_1(void);
static uint32_t  func_3(uint32_t  p_4, struct S1  p_5, int8_t  p_6, union U2  p_7);
static int32_t  func_13(int32_t  p_14, int8_t  p_15, int8_t  p_16, union U2  p_17, uint8_t  p_18);
static const uint64_t  func_32(struct S0  p_33, uint32_t  p_34);




static int16_t  func_1(void)
{ 
    uint32_t l_12 = 18446744073709551607UL;
    struct S1 l_102 = {-1L,0xED36L,0xFFC8L};
    uint16_t l_120[2];
    int64_t l_143[2][5][2] = {{{1L,0x00D59F51D59E5908LL},{0x00D59F51D59E5908LL,1L},{0x00D59F51D59E5908LL,0x00D59F51D59E5908LL},{1L,0x00D59F51D59E5908LL},{0x00D59F51D59E5908LL,1L}},{{0x00D59F51D59E5908LL,0x00D59F51D59E5908LL},{1L,0x00D59F51D59E5908LL},{0x00D59F51D59E5908LL,1L},{0x00D59F51D59E5908LL,0x00D59F51D59E5908LL},{1L,0x00D59F51D59E5908LL}}};
    int32_t l_144 = (-2L);
    int32_t l_194 = 0xF5F0B503L;
    int32_t l_201 = 0L;
    int32_t l_204 = 0x30DA47F4L;
    uint8_t l_205 = 0x3BL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_120[i] = 0x1E33L;
    if (g_2)
    { 
        union U2 l_19 = {0xFD81438367457993LL};
        uint32_t l_101 = 0UL;
        uint64_t l_113 = 18446744073709551615UL;
        int32_t l_154 = 0x21752400L;
        if (((func_3((((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u((l_12 , g_2), ((func_13(g_2, (l_12 && l_12), g_2, l_19, g_2) , l_101) > l_12))), g_35.f0)) , l_19.f0) < g_87), l_102, g_87, l_19) ^ g_35.f0) , g_98))
        { 
            const int64_t l_112[4][5] = {{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L}};
            int i, j;
            if (((safe_mod_func_uint8_t_u_u(g_26, l_112[3][1])) || 1L))
            { 
                return l_113;
            }
            else
            { 
                g_26 = (safe_add_func_uint64_t_u_u((((safe_sub_func_int32_t_s_s(((g_94 != (l_112[1][4] < ((safe_sub_func_uint16_t_u_u((g_87 != (0x2FL != l_102.f1)), g_38.f0)) ^ l_101))) <= 0xC11142F3EDF114FALL), g_68)) | (-9L)) != 0x8190269BL), g_2));
            }
            g_26 ^= (-1L);
        }
        else
        { 
            uint8_t l_157[4];
            uint16_t l_158 = 0x220EL;
            int i;
            for (i = 0; i < 4; i++)
                l_157[i] = 0x5EL;
            for (g_98 = 0; (g_98 <= 1); g_98 += 1)
            { 
                int32_t l_135[5][1][1];
                int i, j, k;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_135[i][j][k] = 0x2A01D187L;
                    }
                }
                l_19.f1 = ((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(((l_120[g_98] ^ (g_2 = (safe_div_func_int64_t_s_s((((l_135[1][0][0] = (g_53 ^= (((g_94 = (((safe_rshift_func_int16_t_s_s(((((g_134 &= (l_120[g_98] | (g_35.f0 ^ ((safe_mod_func_int16_t_s_s((!g_98), (-1L))) & 1L)))) < g_98) & g_35.f0) > 0x938C4D50L), 4)) < (-5L)) && l_102.f1)) , g_26) > g_67))) ^ 0xBC6B9C53L) >= g_87), l_102.f0)))) > g_26), l_120[g_98])) , l_135[2][0][0]), 1L)) <= g_87);
            }
            for (g_94 = 27; (g_94 >= 2); g_94--)
            { 
                uint8_t l_145 = 0UL;
                int32_t l_163[2][3] = {{6L,6L,0x592CA975L},{6L,6L,0x592CA975L}};
                int i, j;
                l_144 = (safe_add_func_int16_t_s_s(g_35.f0, ((g_140 , (safe_sub_func_uint64_t_u_u(0x688B2FF17D062AD8LL, (g_35.f0 , g_38.f0)))) > l_143[1][4][0])));
                l_145++;
                g_26 = (safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((((safe_add_func_uint8_t_u_u(((l_19.f1 = g_134) ^ ((g_140.f0--) == (l_157[2] , (++l_158)))), l_154)) > (((g_68 = ((((safe_mul_func_uint16_t_u_u((((l_163[0][1] = ((l_157[2] >= l_145) | g_134)) , g_67) >= l_157[3]), l_157[3])) & g_53) ^ g_91) || 1L)) >= 18446744073709551615UL) & 0xDFL)) > g_38.f2), 7UL)), g_98));
            }
        }
        g_26 ^= (safe_lshift_func_int16_t_s_u(l_102.f1, l_19.f1));
    }
    else
    { 
        int8_t l_176 = 5L;
        int32_t l_200 = 0x602BA409L;
        int32_t l_203 = 0xDCDF2A61L;
        if ((((g_181 |= (safe_lshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u(l_120[1], (safe_div_func_uint8_t_u_u((((safe_div_func_int64_t_s_s((l_102.f1 || (((safe_add_func_int32_t_s_s(l_176, (((((safe_lshift_func_int8_t_s_u((safe_mod_func_int64_t_s_s((l_176 != 9L), l_176)), 1)) || g_98) || 1UL) == l_102.f2) != 0xBDL))) == 0x482C0EE4DF8AF388LL) > g_38.f2)), l_176)) >= 65535UL) <= 0xB4L), l_144)))), l_102.f0))) | g_140.f0) && l_176))
        { 
            if ((l_12 <= g_38.f2))
            { 
                int8_t l_182 = 1L;
                return l_182;
            }
            else
            { 
                int32_t l_183 = 0xF37C5CFFL;
                return l_183;
            }
        }
        else
        { 
            const uint32_t l_184 = 0xA5802A5FL;
            g_26 = (g_134 > (l_184 >= (g_98 |= (safe_add_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_u(((((safe_sub_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_uint64_t_u((l_194 , (((safe_div_func_int64_t_s_s((g_38.f1 > g_68), 0x2EBE5BDD16FCC1B0LL)) , 18446744073709551615UL) & l_184)))), g_53)) == l_12), 0L)) ^ l_144) != 65530UL) | l_184), l_143[1][3][0])) || 4294967295UL), 0x52070758AC69C4ABLL)))));
        }
        l_144 = (~(safe_lshift_func_uint8_t_u_u(l_144, 7)));
        l_205--;
    }
    return l_205;
}



static uint32_t  func_3(uint32_t  p_4, struct S1  p_5, int8_t  p_6, union U2  p_7)
{ 
    uint8_t l_109 = 246UL;
    p_7.f1 = (safe_mod_func_uint64_t_u_u((0xBE60L > (safe_div_func_uint16_t_u_u((p_5.f1 = (p_7 , (safe_rshift_func_int16_t_s_s((g_38.f2 = g_38.f0), 3)))), p_7.f1))), g_53));
    return l_109;
}



static int32_t  func_13(int32_t  p_14, int8_t  p_15, int8_t  p_16, union U2  p_17, uint8_t  p_18)
{ 
    uint32_t l_20 = 9UL;
    uint64_t l_23[3][1][3];
    int32_t l_73 = 9L;
    int32_t l_74 = (-1L);
    int32_t l_75 = 0x8C46E721L;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
                l_23[i][j][k] = 1UL;
        }
    }
lbl_97:
    --l_20;
    for (p_17.f1 = 0; (p_17.f1 <= 0); p_17.f1 += 1)
    { 
        uint32_t l_72[3][2] = {{18446744073709551610UL,18446744073709551610UL},{1UL,18446744073709551610UL},{18446744073709551610UL,1UL}};
        int32_t l_76 = 0xD736D3DFL;
        struct S1 l_85 = {0xBCE7L,0xE83BL,0x0DECL};
        uint64_t l_88 = 0x6A8AB26F9336AE27LL;
        int32_t l_90 = 0L;
        int i, j;
        for (p_14 = 0; (p_14 >= 0); p_14 -= 1)
        { 
            int32_t l_24[3][4] = {{0L,0L,0xB2E809B4L,0L},{0L,9L,9L,0L},{9L,0L,9L,9L}};
            int i, j;
            return l_24[1][1];
        }
        for (p_18 = 0; (p_18 <= 0); p_18 += 1)
        { 
            uint8_t l_27 = 0xEEL;
            for (l_20 = 0; (l_20 <= 0); l_20 += 1)
            { 
                int32_t l_25 = 0x9C214F16L;
                int i, j, k;
                l_25 = (l_23[(l_20 + 2)][p_18][(l_20 + 2)] <= l_23[1][0][0]);
                l_27--;
                if (g_26)
                    continue;
            }
            for (p_16 = 0; (p_16 <= 0); p_16 += 1)
            { 
                int i, j, k;
                p_14 &= (g_67 = (safe_sub_func_uint64_t_u_u((8L != l_23[p_16][p_17.f1][(p_16 + 1)]), func_32(g_35, l_20))));
                --g_68;
            }
        }
        for (g_67 = 0; (g_67 <= 0); g_67 += 1)
        { 
            uint8_t l_71 = 7UL;
            l_71 = (p_16 , 5L);
            l_76 = (0L | (l_72[1][1] > (l_72[1][0] | (l_75 = (l_74 = (l_73 = (((0xCF3046699CBFF9F6LL < 1UL) == g_26) , g_53)))))));
            for (l_71 = 0; l_71 < 3; l_71 += 1)
            {
                for (l_73 = 0; l_73 < 1; l_73 += 1)
                {
                    for (p_18 = 0; p_18 < 3; p_18 += 1)
                    {
                        l_23[l_71][l_73][p_18] = 0UL;
                    }
                }
            }
            for (l_71 = 0; (l_71 <= 0); l_71 += 1)
            { 
                struct S1 l_86 = {1L,65527UL,0x4830L};
                int32_t l_89 = 0xF80E5663L;
                l_88 &= (safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((p_18 |= (((((safe_lshift_func_int16_t_s_u(((((g_38.f1 = (((safe_mul_func_int16_t_s_s((-8L), ((l_85 = g_38) , 65535UL))) & (l_86 , l_76)) == 6L)) | g_38.f2) == l_71) & 1L), g_87)) <= l_71) >= l_86.f2) && 0x66612900EB00D6BFLL) < p_14)), 5)), 0L));
                g_91++;
                return p_17.f1;
            }
        }
        for (g_38.f1 = 0; (g_38.f1 <= 0); g_38.f1 += 1)
        { 
            for (p_15 = 0; (p_15 >= 0); p_15 -= 1)
            { 
                ++g_94;
            }
            for (p_18 = 0; (p_18 <= 0); p_18 += 1)
            { 
                if (g_67)
                    goto lbl_97;
                if (p_15)
                    break;
                ++g_98;
            }
        }
    }
    return l_73;
}



static const uint64_t  func_32(struct S0  p_33, uint32_t  p_34)
{ 
    struct S1 l_39 = {-1L,0x296AL,6L};
    union U2 l_47 = {0x0EABF554C62B4191LL};
    int32_t l_65[5][1];
    int32_t l_66 = 0xCA85E45CL;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_65[i][j] = 1L;
    }
    for (p_34 = (-28); (p_34 <= 1); p_34 = safe_add_func_int16_t_s_s(p_34, 8))
    { 
        uint8_t l_46 = 0UL;
        struct S0 l_54 = {1UL};
        int32_t l_55 = (-7L);
        l_39 = g_38;
        if ((((safe_mul_func_int16_t_s_s((p_33.f0 && (((((safe_sub_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((((l_46 || (((l_47 , ((((+(l_47.f1 &= (p_34 != p_34))) > l_39.f0) == g_38.f1) == l_46)) || 0xBBD9L) == 0UL)) & 0x5CL) == 0xC99CL), l_39.f2)), g_38.f2)) && (-1L)) < g_26) <= p_34) != 0xFBL)), 65527UL)) & l_39.f1) & g_35.f0))
        { 
            g_26 = ((+((safe_mul_func_uint16_t_u_u(65535UL, ((-10L) >= (((((+(p_33.f0 = l_46)) != 6L) | p_34) , g_38.f0) != g_53)))) || p_34)) <= g_26);
        }
        else
        { 
            int32_t l_56[1];
            int i;
            for (i = 0; i < 1; i++)
                l_56[i] = 0x10F657D2L;
            l_54 = g_35;
            l_56[0] |= ((p_33.f0 & (((l_55 = 0UL) && ((1UL | (l_55 < 18446744073709551608UL)) > g_53)) ^ 0x00L)) , g_38.f2);
        }
    }
    l_66 = (safe_mod_func_int8_t_s_s(((g_38 , (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((((g_38.f0 != ((l_47.f1 = (((g_53 = (safe_mul_func_int16_t_s_s(l_39.f2, (4294967295UL || l_47.f1)))) | g_35.f0) <= p_33.f0)) && g_26)) , l_65[2][0]) >= g_38.f0), g_26)), p_34))) != g_26), p_33.f0));
    g_26 = 0x9D3D8B2FL;
    return g_35.f0;
}





int test_main(void)
{
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_35.f0, "g_35.f0", print_hash_value);
    transparent_crc(g_38.f0, "g_38.f0", print_hash_value);
    transparent_crc(g_38.f1, "g_38.f1", print_hash_value);
    transparent_crc(g_38.f2, "g_38.f2", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_140.f0, "g_140.f0", print_hash_value);
    transparent_crc(g_140.f1, "g_140.f1", print_hash_value);
    transparent_crc(g_140.f2, "g_140.f2", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
