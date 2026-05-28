// SPDX-License-Identifier: MIT
// cctest_csmith_ff75d6a7.c --- cctest case csmith_ff75d6a7 (csmith seed 4285912743)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa302941f */
/* @exp_ticks 0x3709 */

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

// Options:   -s 4285912743 -o /tmp/csmith_gen_p0e8z22z/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int8_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   int32_t  f0;
   int64_t  f1;
};
#pragma pack(pop)

struct S3 {
   uint32_t  f0;
   struct S1  f1;
   struct S1  f2;
   uint64_t  f3;
   struct S2  f4;
   uint8_t  f5;
};

union U4 {
   int8_t  f0;
   uint16_t  f1;
   int8_t  f2;
};

union U5 {
   int32_t  f0;
   uint32_t  f1;
};


static const uint32_t g_4 = 0UL;
static uint32_t g_56 = 0xF5E69144L;
static int32_t g_59 = 0xBAA2DF50L;
static struct S1 g_60 = {-1L};
static int32_t g_87 = 0x74657C2AL;
static uint64_t g_102 = 0xA3708275CA95679DLL;
static struct S0 g_106 = {0x7136C1A4L};
static uint32_t g_126[3][5] = {{0x9CF69D43L,0x9CF69D43L,0x9CF69D43L,0x9CF69D43L,0x9CF69D43L},{0x9CF69D43L,0x9CF69D43L,0x9CF69D43L,0x9CF69D43L,0x9CF69D43L},{0x9CF69D43L,0x9CF69D43L,0x9CF69D43L,0x9CF69D43L,0x9CF69D43L}};
static int16_t g_127 = (-1L);
static uint64_t g_134 = 18446744073709551615UL;
static uint32_t g_136 = 0x124A524AL;
static int32_t g_138 = 0xD5DEA337L;
static struct S0 g_144 = {18446744073709551615UL};
static int32_t g_154 = 0x1017A0ABL;
static union U4 g_166 = {0x1DL};



static union U5  func_1(void);
static struct S1  func_11(union U4  p_12, uint8_t  p_13, struct S0  p_14, uint16_t  p_15, const uint32_t  p_16);
static union U4  func_17(int32_t  p_18, uint32_t  p_19);
static int8_t  func_21(int64_t  p_22);




static union U5  func_1(void)
{ 
    uint32_t l_20 = 0x3826A056L;
    uint8_t l_105 = 0x33L;
    int32_t l_107 = 0L;
    struct S1 l_137 = {0xA6L};
    int32_t l_139 = (-1L);
    int32_t l_140 = 0xC8E59B3DL;
    struct S0 l_145 = {0x5B4EFAD5L};
    union U4 l_167 = {0xDAL};
    union U5 l_168[3] = {{0L},{0L},{0L}};
    int i;
    l_140 &= (safe_div_func_uint64_t_u_u((g_4 != g_4), (safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s((l_139 = (g_4 < ((g_138 = (safe_add_func_int16_t_s_s(((l_137 = func_11(func_17(l_20, l_20), l_105, g_106, l_107, g_106.f0)) , g_60.f0), (-1L)))) > l_20))), g_4)), l_107))));
    for (g_102 = 0; (g_102 > 29); g_102++)
    { 
        struct S0 l_143[5] = {{0x78255715L},{0x78255715L},{0x78255715L},{0x78255715L},{0x78255715L}};
        int32_t l_156 = 1L;
        int i;
        l_145 = (g_144 = l_143[3]);
        for (l_140 = 0; (l_140 <= 19); ++l_140)
        { 
            uint32_t l_153 = 4294967287UL;
            int32_t l_155 = 0xB00BEA9BL;
            l_156 = ((g_106.f0 & g_136) , ((((l_155 &= (safe_add_func_uint16_t_u_u(((((safe_div_func_uint8_t_u_u(((+(g_154 = (l_153 | l_153))) , l_153), l_105)) >= g_127) > l_153) || g_127), l_107))) ^ 0x00D0L) == 9L) , 0x73B43E12L));
            if (l_139)
                break;
        }
        for (g_60.f0 = (-4); (g_60.f0 >= 25); g_60.f0++)
        { 
            uint8_t l_161 = 253UL;
            for (l_107 = 11; (l_107 == (-1)); l_107--)
            { 
                l_161 |= (g_138 = g_127);
            }
        }
    }
    g_87 ^= (((g_106.f0 && (g_102 = (safe_div_func_int64_t_s_s((safe_mul_func_int8_t_s_s(l_145.f0, (((((l_167 = g_166) , g_166.f0) && g_138) >= 0L) >= g_126[0][4]))), 0xFB26F9E2A9A63C7BLL)))) != 0x36L) & g_144.f0);
    return l_168[2];
}



static struct S1  func_11(union U4  p_12, uint8_t  p_13, struct S0  p_14, uint16_t  p_15, const uint32_t  p_16)
{ 
    struct S1 l_108[1] = {{5L}};
    int32_t l_116 = (-1L);
    struct S3 l_133[2][3][4] = {{{{0xAF7B95B8L,{1L},{-6L},2UL,{0x4B7E93FEL,2L},254UL},{0xAF7B95B8L,{1L},{-6L},2UL,{0x4B7E93FEL,2L},254UL},{4294967288UL,{0xFEL},{0x51L},0xC2773854AF0FF7F8LL,{-7L,0xF80B5AD64697844ALL},0xBEL},{4294967295UL,{-1L},{0x85L},0xFF1F9D108F377315LL,{0xC3613B7DL,0xF6EE45795A9035C0LL},1UL}},{{4294967295UL,{0x92L},{0x94L},0x02220EF4093C7B1CLL,{3L,1L},0x3FL},{1UL,{0xB7L},{0L},0x33C274765F4E7881LL,{-1L,-1L},0x4AL},{4294967295UL,{0x92L},{0x94L},0x02220EF4093C7B1CLL,{3L,1L},0x3FL},{4294967288UL,{0xFEL},{0x51L},0xC2773854AF0FF7F8LL,{-7L,0xF80B5AD64697844ALL},0xBEL}},{{4294967295UL,{0x92L},{0x94L},0x02220EF4093C7B1CLL,{3L,1L},0x3FL},{4294967288UL,{0xFEL},{0x51L},0xC2773854AF0FF7F8LL,{-7L,0xF80B5AD64697844ALL},0xBEL},{4294967288UL,{0xFEL},{0x51L},0xC2773854AF0FF7F8LL,{-7L,0xF80B5AD64697844ALL},0xBEL},{4294967295UL,{0x92L},{0x94L},0x02220EF4093C7B1CLL,{3L,1L},0x3FL}}},{{{0xAF7B95B8L,{1L},{-6L},2UL,{0x4B7E93FEL,2L},254UL},{4294967288UL,{0xFEL},{0x51L},0xC2773854AF0FF7F8LL,{-7L,0xF80B5AD64697844ALL},0xBEL},{4294967295UL,{-1L},{0x85L},0xFF1F9D108F377315LL,{0xC3613B7DL,0xF6EE45795A9035C0LL},1UL},{4294967288UL,{0xFEL},{0x51L},0xC2773854AF0FF7F8LL,{-7L,0xF80B5AD64697844ALL},0xBEL}},{{4294967288UL,{0xFEL},{0x51L},0xC2773854AF0FF7F8LL,{-7L,0xF80B5AD64697844ALL},0xBEL},{1UL,{0xB7L},{0L},0x33C274765F4E7881LL,{-1L,-1L},0x4AL},{4294967295UL,{-1L},{0x85L},0xFF1F9D108F377315LL,{0xC3613B7DL,0xF6EE45795A9035C0LL},1UL},{4294967295UL,{-1L},{0x85L},0xFF1F9D108F377315LL,{0xC3613B7DL,0xF6EE45795A9035C0LL},1UL}},{{0xAF7B95B8L,{1L},{-6L},2UL,{0x4B7E93FEL,2L},254UL},{0xAF7B95B8L,{1L},{-6L},2UL,{0x4B7E93FEL,2L},254UL},{4294967295UL,{0x92L},{0x94L},0x02220EF4093C7B1CLL,{3L,1L},0x3FL},{1UL,{0xB7L},{0L},0x33C274765F4E7881LL,{-1L,-1L},0x4AL}}}};
    int i, j, k;
    for (g_106.f0 = 0; (g_106.f0 <= 0); g_106.f0 += 1)
    { 
        int32_t l_117 = (-10L);
        l_116 = (g_106.f0 && (((safe_unary_minus_func_uint8_t_u(((1UL ^ p_12.f0) , ((safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s(p_16, (-9L))), l_116)), l_117)) < 0x27E8BA16L)))) > p_16) , g_4));
    }
    for (p_15 = 4; (p_15 == 33); p_15++)
    { 
        uint32_t l_120 = 0xD181DD90L;
        for (p_12.f2 = 0; (p_12.f2 <= 0); p_12.f2 += 1)
        { 
            if (l_120)
                break;
        }
        for (g_56 = 0; (g_56 < 35); g_56 = safe_add_func_int64_t_s_s(g_56, 8))
        { 
            const uint16_t l_135 = 0x4D05L;
            for (g_102 = 0; (g_102 > 57); ++g_102)
            { 
                const uint64_t l_125 = 18446744073709551612UL;
                g_59 = 0xE60B5F8EL;
                g_127 &= (((((l_125 | ((g_102 != l_116) , (p_12.f1 = ((g_126[1][2] = p_12.f0) & 0x8EL)))) >= 0x79L) > 0x215CFFABL) == 65534UL) , p_12.f1);
            }
            g_59 ^= (((((g_136 ^= (safe_unary_minus_func_uint8_t_u((((safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(l_116, 0xA5590F52L)), (((g_134 ^= (l_133[1][2][1] , 0UL)) ^ g_102) && l_120))) < 0x12L) != l_135)))) > p_15) < 8L) | l_133[1][2][1].f4.f0) , l_135);
        }
    }
    return g_60;
}



static union U4  func_17(int32_t  p_18, uint32_t  p_19)
{ 
    struct S1 l_61[3] = {{0L},{0L},{0L}};
    int32_t l_62 = 0xA4CB52C2L;
    struct S2 l_73 = {0x132FC9DAL,-1L};
    uint32_t l_74 = 0x8D362EA1L;
    struct S2 l_103 = {-1L,4L};
    union U4 l_104 = {1L};
    int i;
    l_62 |= ((func_21(p_18) | p_18) >= (((((l_61[0] = g_60) , 18446744073709551615UL) || (-1L)) < p_18) , l_61[0].f0));
    if ((p_18 ^= l_61[0].f0))
    { 
        l_62 = g_4;
    }
    else
    { 
        uint32_t l_70 = 3UL;
        union U5 l_100 = {8L};
        g_60 = l_61[2];
        for (l_62 = (-18); (l_62 > (-20)); --l_62)
        { 
            uint8_t l_88 = 1UL;
            const uint16_t l_101 = 0x955DL;
            g_59 |= (safe_add_func_int32_t_s_s(((((safe_rshift_func_int8_t_s_u((g_60.f0 &= 0xCDL), p_18)) <= ((l_61[0].f0 || ((+(0x645CCAEAL & (-1L))) && p_18)) == l_70)) > 6L) & 0x684E8D7FF0BA59A1LL), (-6L)));
            g_59 = 0xE720F54FL;
            if ((g_59 |= (safe_rshift_func_uint8_t_u_s(((l_73 , (++l_74)) & p_18), (((safe_div_func_uint8_t_u_u((g_87 = ((0xC0630FC3L & (safe_mod_func_int16_t_s_s((((safe_div_func_int8_t_s_s((safe_div_func_uint8_t_u_u(6UL, 252UL)), 255UL)) ^ p_19) && 0L), p_19))) || 0xF28BL)), 0x0FL)) != l_88) || p_18)))))
            { 
                p_18 &= 0x0FED0A01L;
                if (g_87)
                    break;
            }
            else
            { 
                union U5 l_91 = {0x7CE96EA6L};
                g_87 = (p_18 = ((safe_div_func_uint32_t_u_u((0x68L > ((l_91 , ((safe_div_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u(((g_102 = (l_91.f0 > ((safe_div_func_uint32_t_u_u((((safe_add_func_int64_t_s_s((l_100 , g_59), p_19)) < g_87) , p_18), p_18)) || l_101))) && l_88), 0x2CA4FAC9L)), p_18)) && g_60.f0)) && g_4)), 0x2FA99DB6L)) != l_61[0].f0));
            }
        }
    }
    l_103 = (l_73 = l_73);
    return l_104;
}



static int8_t  func_21(int64_t  p_22)
{ 
    struct S0 l_29 = {0UL};
    int32_t l_42 = (-1L);
    int32_t l_43 = 0xCB5CB1BEL;
    l_43 &= ((safe_rshift_func_int16_t_s_u(((safe_sub_func_int32_t_s_s(((((safe_sub_func_uint16_t_u_u((l_29 , (safe_div_func_int8_t_s_s((safe_div_func_uint32_t_u_u((g_4 & ((safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((l_42 = (safe_rshift_func_uint8_t_u_s((((l_29.f0 && p_22) ^ p_22) >= l_29.f0), l_29.f0))), p_22)) > 0xF7503AE5685E9D07LL), p_22)), 14)) | l_29.f0)), p_22)), g_4))), g_4)) && 0x863780D7L) || 0xBAB6L) && g_4), l_29.f0)) && g_4), 9)) ^ l_29.f0);
    for (l_43 = 0; (l_43 == 24); l_43 = safe_add_func_uint16_t_u_u(l_43, 9))
    { 
        const uint64_t l_52 = 0x87840EF1F3E16851LL;
        if (g_4)
        { 
            uint16_t l_53 = 0x3BADL;
            l_42 &= (0UL & (safe_div_func_uint32_t_u_u(((((safe_rshift_func_uint16_t_u_s(0x1DB4L, g_4)) , ((((safe_sub_func_uint16_t_u_u(p_22, p_22)) < l_52) , 65535UL) < p_22)) < l_53) > 0x9EE19476L), p_22)));
            return l_43;
        }
        else
        { 
            for (l_42 = (-19); (l_42 < (-20)); l_42 = safe_sub_func_uint64_t_u_u(l_42, 1))
            { 
                g_56++;
            }
            return g_56;
        }
    }
    g_59 |= g_4;
    return l_29.f0;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_60.f0, "g_60.f0", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_106.f0, "g_106.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_126[i][j], "g_126[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_144.f0, "g_144.f0", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_166.f0, "g_166.f0", print_hash_value);
    transparent_crc(g_166.f2, "g_166.f2", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
