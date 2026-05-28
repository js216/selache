// SPDX-License-Identifier: MIT
// cctest_csmith_9d467cc0.c --- cctest case csmith_9d467cc0 (csmith seed 2638642368)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8ca32b34 */
/* @exp_ticks 0xfc0b */

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

// Options:   -s 2638642368 -o /tmp/csmith_gen_m7qddpdf/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
};
#pragma pack(pop)

union U1 {
   uint32_t  f0;
   uint16_t  f1;
   const int8_t  f2;
   const int64_t  f3;
};

union U2 {
   uint32_t  f0;
   uint16_t  f1;
   int64_t  f2;
};


static union U1 g_10[1][7][1] = {{{{0x3A18E418L}},{{0x3A18E418L}},{{0x3A18E418L}},{{0x3A18E418L}},{{0x3A18E418L}},{{0x3A18E418L}},{{0x3A18E418L}}}};
static int32_t *g_31 = (void*)0;
static int32_t g_38 = 0xBF58AAE0L;
static int32_t g_40 = 0x040C3F30L;
static uint16_t g_45[1][6] = {{0x26AFL,0x26AFL,0xA062L,0x26AFL,0x26AFL,0xA062L}};
static const struct S0 g_46 = {4UL};
static struct S0 g_47 = {0x933B839BL};
static uint64_t g_53[5] = {0x05F4D0C653DDB209LL,0x05F4D0C653DDB209LL,0x05F4D0C653DDB209LL,0x05F4D0C653DDB209LL,0x05F4D0C653DDB209LL};
static uint32_t g_64 = 5UL;
static int16_t g_68[1] = {1L};
static union U2 g_73[5][7][5] = {{{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}}},{{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}}},{{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}}},{{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}}},{{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}},{{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL},{0xD7E942FAL}}}};
static int32_t g_78[2] = {0x64BFCE93L,0x64BFCE93L};
static int32_t *g_115 = &g_40;
static int32_t **g_114 = &g_115;
static int16_t *g_135 = (void*)0;
static uint16_t g_153 = 0x350FL;
static uint32_t g_156 = 0x915A15C4L;
static int8_t g_171 = 0xF0L;
static uint64_t g_175 = 18446744073709551614UL;
static int32_t ***g_180 = (void*)0;
static int32_t *** const *g_179 = &g_180;
static union U2 *g_198 = &g_73[0][3][0];
static int64_t g_248 = 0x782FDE8DAFFF069DLL;
static union U2 ** const g_293 = (void*)0;
static union U2 ** const * const g_292 = &g_293;
static int64_t g_331 = 1L;
static const struct S0 *g_336 = &g_47;
static int32_t g_343[4][6][5] = {{{(-1L),(-1L),(-1L),(-1L),(-1L)},{0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L}},{{(-1L),(-1L),(-1L),(-1L),(-1L)},{0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L}},{{(-1L),(-1L),(-1L),(-1L),(-1L)},{0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L}},{{(-1L),(-1L),(-1L),(-1L),(-1L)},{0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L,0xA6EB08D9L}}};
static uint64_t g_385 = 18446744073709551612UL;
static int32_t g_396 = 0xCCFFFF4AL;
static int8_t g_473 = 0x59L;
static int16_t g_495 = 1L;
static uint8_t g_496 = 255UL;
static uint16_t *g_609[2] = {&g_73[0][3][0].f1,&g_73[0][3][0].f1};
static uint16_t **g_608 = &g_609[1];
static uint64_t g_632 = 0x89707FE5C98CB16FLL;
static const int64_t g_665 = 5L;
static const int64_t *g_664[6][5] = {{&g_665,&g_665,&g_665,&g_665,&g_665},{&g_665,&g_665,&g_665,&g_665,&g_665},{&g_665,&g_665,&g_665,&g_665,&g_665},{(void*)0,&g_665,(void*)0,&g_665,(void*)0},{&g_665,&g_665,&g_665,&g_665,&g_665},{&g_665,&g_665,&g_665,&g_665,&g_665}};
static int64_t **g_690 = (void*)0;
static int64_t ***g_689 = &g_690;
static int64_t ****g_697 = &g_689;
static int64_t *****g_696 = &g_697;
static const int32_t g_712 = 0xC40CCD04L;
static const int32_t *g_711 = &g_712;
static const int32_t *g_714[1][5] = {{&g_78[0],&g_78[0],&g_78[0],&g_78[0],&g_78[0]}};
static uint8_t g_872 = 0x45L;
static int8_t **g_887 = (void*)0;
static struct S0 *g_892[7] = {&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47};
static int8_t g_941[1][1] = {{(-6L)}};
static union U1 *g_970 = &g_10[0][4][0];
static union U1 **g_969 = &g_970;
static int8_t *g_994 = &g_941[0][0];
static union U2 **g_1019 = &g_198;
static union U2 ***g_1018 = &g_1019;
static int64_t g_1028 = 0L;
static int8_t g_1057 = (-6L);
static int32_t ****g_1147 = &g_180;
static int32_t *****g_1146 = &g_1147;
static int32_t *****g_1148 = &g_1147;
static int32_t g_1237 = 0L;
static uint64_t g_1288 = 0UL;
static union U2 ****g_1326[2] = {&g_1018,&g_1018};
static union U2 *****g_1325[3] = {&g_1326[1],&g_1326[1],&g_1326[1]};
static int32_t **g_1333[7] = {&g_31,(void*)0,&g_31,&g_31,(void*)0,&g_31,&g_31};
static int32_t ***g_1332 = &g_1333[1];
static int32_t ***g_1336 = &g_1333[1];
static uint8_t **g_1337 = (void*)0;
static uint8_t g_1510 = 1UL;
static union U1 g_1556 = {1UL};
static int32_t g_1558 = 0L;
static uint8_t g_1580[1] = {3UL};
static int32_t g_1648 = 3L;
static uint16_t **g_1711 = &g_609[1];
static uint16_t g_1789 = 0xA2B0L;
static int16_t g_1865 = 0xE897L;
static int32_t *g_1867 = &g_1648;
static union U1 ** const *g_1950 = &g_969;
static union U1 ** const **g_1949 = &g_1950;
static uint64_t g_2101 = 0x170AE4FF3832A488LL;
static uint32_t *g_2103 = &g_156;
static uint32_t ** const g_2102 = &g_2103;
static uint64_t g_2118 = 0x04CC2ADA193FA8DCLL;
static uint64_t *g_2126 = &g_2118;
static uint64_t **g_2125 = &g_2126;
static const int8_t *g_2134 = (void*)0;
static uint32_t g_2260[7] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL};
static uint32_t g_2378 = 1UL;
static uint16_t ** const **g_2461 = (void*)0;
static int64_t g_2489 = 0x043892A78E8127ADLL;
static int32_t g_2502 = (-2L);
static uint64_t g_2599[2][5][1] = {{{0xF3323F5F99F7C5A0LL},{0xB0CCAEE0BEF2BFB1LL},{0xB0CCAEE0BEF2BFB1LL},{0xF3323F5F99F7C5A0LL},{0xB0CCAEE0BEF2BFB1LL}},{{0xB0CCAEE0BEF2BFB1LL},{0xF3323F5F99F7C5A0LL},{0xB0CCAEE0BEF2BFB1LL},{0xB0CCAEE0BEF2BFB1LL},{0xF3323F5F99F7C5A0LL}}};
static int8_t *g_2646 = &g_1057;
static int32_t * const ***g_2747 = (void*)0;
static const uint32_t **g_2791[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static const uint32_t ***g_2790[3] = {&g_2791[0],&g_2791[0],&g_2791[0]};
static const uint32_t ****g_2789 = &g_2790[2];
static uint32_t ****g_2792 = (void*)0;
static struct S0 **g_2816 = &g_892[5];
static struct S0 ***g_2815 = &g_2816;
static int32_t *g_2891 = &g_343[3][3][0];
static int32_t ** const g_2890 = &g_2891;
static int32_t ** const *g_2889[1] = {&g_2890};
static int32_t g_2934 = 0L;
static const uint64_t g_2937 = 18446744073709551608UL;
static union U1 ***g_3036 = (void*)0;
static union U1 ****g_3035 = &g_3036;
static union U1 *****g_3034 = &g_3035;
static int8_t g_3254 = 0x67L;
static union U1 g_3269 = {0x1498AE27L};
static int8_t g_3314 = 0x2BL;
static int64_t g_3327 = 0x1D6D79B9D87717A8LL;
static int32_t g_3333 = 0L;
static uint64_t ***g_3372 = &g_2125;
static int8_t * const *g_3384 = &g_994;
static int8_t * const **g_3383 = &g_3384;
static int8_t * const **g_3385 = &g_3384;
static uint16_t g_3576 = 65533UL;
static const int8_t g_3593[4] = {0x86L,0x86L,0x86L,0x86L};
static int32_t g_3618 = 8L;
static uint64_t ****g_3727[7] = {&g_3372,&g_3372,&g_3372,&g_3372,&g_3372,&g_3372,&g_3372};
static int32_t g_3733[1] = {0x17157F00L};
static union U2 g_3742 = {0UL};
static uint32_t g_3783 = 1UL;
static int8_t ** const **g_3800 = (void*)0;
static int8_t *g_3804 = &g_473;
static int8_t ** const g_3803 = &g_3804;
static int8_t ** const *g_3802 = &g_3803;
static int8_t ** const **g_3801[2][3][5] = {{{(void*)0,&g_3802,&g_3802,(void*)0,&g_3802},{(void*)0,&g_3802,&g_3802,&g_3802,&g_3802},{&g_3802,&g_3802,&g_3802,&g_3802,&g_3802}},{{&g_3802,&g_3802,&g_3802,&g_3802,&g_3802},{&g_3802,&g_3802,&g_3802,&g_3802,&g_3802},{&g_3802,&g_3802,&g_3802,&g_3802,&g_3802}}};
static union U1 g_3844 = {0x6E851F44L};
static uint32_t g_3849 = 0x240DAAB1L;
static uint64_t g_3865[6][1][6] = {{{6UL,0x21212FAA1E914ED2LL,0UL,0UL,0x21212FAA1E914ED2LL,6UL}},{{0xF71D185BE0D10B84LL,6UL,0x65E347D87865977ALL,0x7E66DB85B9072670LL,6UL,0x434410D69DBB52D6LL}},{{0x21212FAA1E914ED2LL,0xB1D43434F96D8EFDLL,0xD768E370C6443E69LL,6UL,0xD768E370C6443E69LL,0xB1D43434F96D8EFDLL}},{{0x21212FAA1E914ED2LL,0x434410D69DBB52D6LL,6UL,0x7E66DB85B9072670LL,0x65E347D87865977ALL,6UL}},{{0xF71D185BE0D10B84LL,6UL,0x21212FAA1E914ED2LL,0UL,0UL,0x21212FAA1E914ED2LL}},{{6UL,6UL,1UL,0xF71D185BE0D10B84LL,0x65E347D87865977ALL,0UL}}};
static int32_t g_3905 = 0L;
static int16_t g_3947 = 0x8259L;
static struct S0 g_3977 = {0UL};
static int16_t g_3988[4][4][2] = {{{0xC9E5L,0xC9E5L},{0xC9E5L,0x1783L},{0L,(-7L)},{0x1783L,(-7L)}},{{0L,0x1783L},{0xC9E5L,0xC9E5L},{0xC9E5L,0x1783L},{0L,(-7L)}},{{0x1783L,(-7L)},{0L,0x1783L},{0xC9E5L,0xC9E5L},{0xC9E5L,0x1783L}},{{0L,(-7L)},{0x1783L,(-7L)},{0L,0x1783L},{0xC9E5L,0xC9E5L}}};
static uint8_t g_4035[5] = {0xB3L,0xB3L,0xB3L,0xB3L,0xB3L};
static int16_t g_4133[6][5] = {{(-1L),(-1L),(-1L),(-1L),(-1L)},{0xA10BL,0xDAC9L,0xA10BL,0xDAC9L,0xA10BL},{(-1L),(-1L),(-1L),(-1L),(-1L)},{0xA10BL,0xDAC9L,0xA10BL,0xDAC9L,0xA10BL},{(-1L),(-1L),(-1L),(-1L),(-1L)},{0xA10BL,0xDAC9L,0xA10BL,0xDAC9L,0xA10BL}};
static uint32_t g_4168[5] = {0x3FD80EB1L,0x3FD80EB1L,0x3FD80EB1L,0x3FD80EB1L,0x3FD80EB1L};
static uint32_t g_4187 = 0x94BDE0BBL;
static uint16_t g_4224 = 65535UL;
static int32_t * const *g_4248 = &g_31;
static int32_t * const **g_4247 = &g_4248;
static const int32_t *****g_4273 = (void*)0;
static const uint8_t g_4352 = 0xF3L;
static int32_t ** const *g_4359 = &g_1333[1];
static int32_t ** const **g_4358[7] = {&g_4359,&g_4359,&g_4359,&g_4359,&g_4359,&g_4359,&g_4359};
static int32_t ** const ***g_4357 = &g_4358[1];
static int16_t **g_4431 = &g_135;
static int16_t ** const *g_4430 = &g_4431;
static int8_t g_4438[2] = {1L,1L};



static int32_t  func_1(void);
static int32_t  func_5(const int32_t * p_6, union U1  p_7, int32_t * p_8);
static int32_t * func_11(const int32_t  p_12, int32_t * p_13, union U1  p_14);
static int32_t * func_16(union U1  p_17, int8_t  p_18, int32_t * p_19, int32_t * p_20);
static union U1  func_21(int32_t * p_22, union U1  p_23);
static int32_t * func_24(uint64_t  p_25);
static uint64_t  func_26(int32_t  p_27, int32_t * p_28, uint16_t  p_29, const struct S0  p_30);
static uint16_t  func_32(int32_t  p_33);




static int32_t  func_1(void)
{ 
    const int64_t l_15 = (-2L);
    int32_t *l_1557 = &g_1558;
    struct S0 l_2994 = {4294967295UL};
    int16_t l_3005 = 0x4BC4L;
    int32_t *l_3010 = (void*)0;
    union U1 ****l_3033 = (void*)0;
    union U1 *****l_3032[6][5] = {{&l_3033,&l_3033,&l_3033,&l_3033,&l_3033},{&l_3033,&l_3033,&l_3033,(void*)0,&l_3033},{&l_3033,&l_3033,(void*)0,&l_3033,&l_3033},{&l_3033,&l_3033,&l_3033,&l_3033,&l_3033},{&l_3033,&l_3033,&l_3033,&l_3033,&l_3033},{&l_3033,&l_3033,&l_3033,&l_3033,&l_3033}};
    int32_t l_3038 = 0L;
    int32_t l_3043 = 0x96F23C9DL;
    uint64_t l_3052 = 1UL;
    uint32_t l_3056 = 6UL;
    uint32_t l_3065 = 0x4A600D63L;
    int32_t l_3085 = 0L;
    int32_t l_3086 = 1L;
    int32_t *l_3089 = &l_3043;
    int32_t *l_3090[3][3][7] = {{{&l_3086,&l_3043,(void*)0,(void*)0,&l_3043,&l_3086,&l_3043},{&g_78[0],&g_1558,(void*)0,&g_78[1],&g_78[1],&g_78[1],(void*)0},{&g_78[0],&g_78[0],&l_3086,(void*)0,&l_3086,&g_78[0],&g_78[0]}},{{&l_3086,&g_1558,&g_38,&g_1558,&l_3086,&g_2502,(void*)0},{(void*)0,&g_78[0],(void*)0,&l_3038,&l_3038,(void*)0,&g_78[0]},{&g_78[0],&g_2502,&g_78[1],&g_78[0],&l_3086,&g_78[1],&l_3086}},{{(void*)0,&l_3038,&l_3038,(void*)0,&g_78[0],(void*)0,&l_3038},{(void*)0,&g_1558,&g_78[0],&g_78[0],&g_78[0],&g_1558,(void*)0},{&l_3086,&l_3038,&l_3043,&l_3038,&l_3086,&l_3086,&l_3038}}};
    int64_t l_3092 = 0xFCCECCF823554D66LL;
    uint64_t l_3150 = 18446744073709551615UL;
    int32_t l_3152 = 7L;
    int8_t l_3158 = 0xF1L;
    int32_t l_3165 = 0x1BB48573L;
    int8_t l_3191 = 0x71L;
    uint32_t * const *l_3195 = &g_2103;
    uint32_t * const **l_3194 = &l_3195;
    uint32_t * const ***l_3193[7] = {&l_3194,&l_3194,&l_3194,&l_3194,&l_3194,&l_3194,&l_3194};
    int64_t *** const l_3199 = &g_690;
    struct S0 l_3209[1][1][4] = {{{{0x73E1CC97L},{0x73E1CC97L},{0x73E1CC97L},{0x73E1CC97L}}}};
    uint32_t l_3228 = 4294967286UL;
    const int32_t *l_3233 = &g_40;
    const int32_t **l_3232 = &l_3233;
    const int32_t ***l_3231[2][4] = {{&l_3232,&l_3232,&l_3232,&l_3232},{&l_3232,&l_3232,&l_3232,&l_3232}};
    int8_t * const **l_3245[1];
    int8_t *l_3249[4];
    int8_t l_3258 = 1L;
    union U1 **l_3277 = (void*)0;
    uint64_t l_3306 = 0x0BCE414CD4BC4B3BLL;
    uint8_t l_3317 = 255UL;
    int64_t l_3335[1];
    uint32_t l_3376 = 4294967290UL;
    int8_t l_3381 = (-1L);
    const int16_t l_3382 = 0xB2FEL;
    const union U2 *l_3387 = &g_73[0][3][0];
    const union U2 **l_3386 = &l_3387;
    int32_t l_3441 = (-7L);
    union U2 ***l_3460 = &g_1019;
    uint16_t l_3503 = 65533UL;
    int32_t *****l_3505 = &g_1147;
    int16_t l_3539[4] = {0xBBE2L,0xBBE2L,0xBBE2L,0xBBE2L};
    uint16_t l_3579 = 0xAAB9L;
    int8_t l_3585 = (-6L);
    uint32_t l_3586 = 0x82DA2B6FL;
    uint8_t l_3592 = 4UL;
    uint16_t **l_3612[7][6] = {{&g_609[1],&g_609[1],&g_609[1],&g_609[1],&g_609[1],&g_609[1]},{&g_609[1],&g_609[1],&g_609[1],&g_609[1],&g_609[1],&g_609[1]},{&g_609[1],&g_609[1],&g_609[1],&g_609[1],&g_609[1],&g_609[1]},{&g_609[1],&g_609[1],&g_609[1],&g_609[1],&g_609[1],&g_609[1]},{&g_609[1],&g_609[1],&g_609[1],&g_609[1],&g_609[1],&g_609[1]},{&g_609[1],&g_609[1],&g_609[1],&g_609[1],&g_609[1],&g_609[1]},{&g_609[1],&g_609[1],&g_609[1],&g_609[1],&g_609[1],&g_609[1]}};
    union U1 l_3663 = {0x1EC1B231L};
    int32_t l_3681 = 1L;
    uint8_t l_3714 = 1UL;
    int32_t *l_3738 = &l_3043;
    uint64_t l_3786 = 3UL;
    union U2 **** const *l_3798 = &g_1326[1];
    int16_t l_3841[7] = {0x0BDAL,0x0BDAL,0x0BDAL,0x0BDAL,0x0BDAL,0x0BDAL,0x0BDAL};
    union U1 *l_3842 = &g_10[0][6][0];
    uint16_t ****l_3919 = (void*)0;
    uint64_t l_3930 = 0x825B64AA44A49ADELL;
    struct S0 *l_4025 = (void*)0;
    int8_t l_4051 = 0xE8L;
    union U2 *l_4066 = &g_3742;
    int8_t l_4132 = (-2L);
    uint32_t l_4195 = 0x3F7C8390L;
    uint64_t l_4202 = 18446744073709551615UL;
    int32_t *l_4236 = &l_3086;
    union U2 l_4265 = {0x8DE9731EL};
    const int32_t ****l_4275[3];
    const int32_t *****l_4274 = &l_4275[1];
    int16_t l_4304[2];
    union U2 ****l_4317 = (void*)0;
    const uint32_t l_4341 = 4294967295UL;
    const uint8_t *l_4351[2];
    int32_t ****l_4361 = &g_1332;
    int32_t *****l_4360 = &l_4361;
    struct S0 l_4363 = {4294967295UL};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_3245[i] = (void*)0;
    for (i = 0; i < 4; i++)
        l_3249[i] = &g_1057;
    for (i = 0; i < 1; i++)
        l_3335[i] = 0x0BF39F2F219B3278LL;
    for (i = 0; i < 3; i++)
        l_4275[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_4304[i] = 0x20BAL;
    for (i = 0; i < 2; i++)
        l_4351[i] = &g_4352;
    return (**g_114);
}



static int32_t  func_5(const int32_t * p_6, union U1  p_7, int32_t * p_8)
{ 
    uint32_t l_2689[2];
    union U2 * const * const l_2709 = &g_198;
    union U2 * const * const *l_2708[4][2][1] = {{{&l_2709},{&l_2709}},{{&l_2709},{&l_2709}},{{&l_2709},{&l_2709}},{{&l_2709},{&l_2709}}};
    int32_t *l_2727[6][2][1] = {{{&g_2502},{(void*)0}},{{&g_2502},{(void*)0}},{{&g_2502},{(void*)0}},{{&g_2502},{(void*)0}},{{&g_2502},{(void*)0}},{{&g_2502},{(void*)0}}};
    uint32_t l_2728[6][2] = {{0x1115CDDBL,0x1115CDDBL},{0xDB49F80EL,0x1115CDDBL},{0x1115CDDBL,0xDB49F80EL},{0x1115CDDBL,0x1115CDDBL},{0xDB49F80EL,0x1115CDDBL},{0x1115CDDBL,0xDB49F80EL}};
    int32_t l_2731 = 8L;
    int32_t * const ***l_2751 = (void*)0;
    int64_t l_2770 = 2L;
    uint8_t l_2771[5][4][2] = {{{0xB9L,0x61L},{0x1FL,0x3FL},{0x3FL,0x72L},{0xB9L,0x83L}},{{0x72L,0x83L},{0xB9L,0x72L},{0x3FL,0x3FL},{0x1FL,0x61L}},{{0xB9L,0x6AL},{0x61L,0x83L},{1UL,0x61L},{0x3FL,0x1FL}},{{0x3FL,0x61L},{1UL,0x83L},{0x61L,0x6AL},{0xB9L,0x61L}},{{0x1FL,0x3FL},{0x3FL,0x72L},{0xB9L,0x83L},{0x72L,0x83L}}};
    int64_t l_2803 = 5L;
    struct S0 ***l_2817 = &g_2816;
    int16_t l_2822 = 0xC08EL;
    int32_t *l_2835[4][5] = {{&g_2502,&g_2502,&g_2502,&g_2502,&g_2502},{&g_78[0],&g_78[0],&g_1558,&g_78[0],&g_78[0]},{&g_2502,&g_2502,&l_2731,&l_2731,&g_2502},{&g_78[0],&g_1558,&g_1558,&g_78[0],&g_1558}};
    uint64_t *l_2855 = &g_2101;
    int8_t l_2866 = 0xAEL;
    int32_t ** const *l_2888 = (void*)0;
    int8_t l_2902 = 1L;
    uint8_t l_2936 = 0xFBL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_2689[i] = 18446744073709551611UL;
    return p_7.f1;
}



static int32_t * func_11(const int32_t  p_12, int32_t * p_13, union U1  p_14)
{ 
    int8_t l_1882 = 0xD2L;
    int32_t l_1904[6][4] = {{(-1L),1L,0x943F2AFEL,1L},{(-1L),(-1L),0L,1L},{0L,1L,0L,(-1L)},{(-1L),1L,0x943F2AFEL,1L},{(-1L),(-1L),0L,1L},{0L,1L,0L,(-1L)}};
    int64_t l_1905 = 0x0E5103C9C3D1C41DLL;
    struct S0 l_1926 = {0x186E901FL};
    int64_t l_1972 = 0x97EA9B924E19C781LL;
    int32_t *l_1980 = (void*)0;
    union U2 ****l_1985 = (void*)0;
    union U1 ***l_1988 = (void*)0;
    uint16_t l_1990 = 65530UL;
    uint32_t l_2067 = 18446744073709551611UL;
    uint8_t l_2076[5][6] = {{1UL,255UL,7UL,255UL,1UL,1UL},{0x16L,255UL,255UL,0x16L,248UL,0x16L},{0x16L,248UL,0x16L,255UL,255UL,0x16L},{1UL,1UL,255UL,7UL,255UL,1UL},{255UL,248UL,7UL,7UL,248UL,255UL}};
    struct S0 l_2107[7] = {{0xB14FDEF3L},{0xB14FDEF3L},{0xB14FDEF3L},{0xB14FDEF3L},{0xB14FDEF3L},{0xB14FDEF3L},{0xB14FDEF3L}};
    uint32_t l_2115 = 0UL;
    uint32_t l_2119 = 0UL;
    uint64_t * const **l_2121 = (void*)0;
    uint64_t *l_2124 = (void*)0;
    uint64_t **l_2123 = &l_2124;
    uint64_t ***l_2122[6][5] = {{&l_2123,&l_2123,&l_2123,&l_2123,&l_2123},{&l_2123,&l_2123,&l_2123,&l_2123,&l_2123},{&l_2123,&l_2123,&l_2123,&l_2123,&l_2123},{&l_2123,&l_2123,&l_2123,&l_2123,&l_2123},{&l_2123,&l_2123,&l_2123,&l_2123,&l_2123},{&l_2123,&l_2123,&l_2123,&l_2123,&l_2123}};
    int16_t *l_2127 = &g_68[0];
    uint32_t l_2207 = 9UL;
    struct S0 l_2211 = {1UL};
    uint8_t l_2227 = 0x7FL;
    int64_t ****l_2238 = &g_689;
    uint64_t l_2277[1];
    int32_t l_2280[6];
    uint16_t l_2281[2][4][6] = {{{0x4F37L,7UL,0x4F37L,0x00BBL,0x00BBL,0x4F37L},{0x6649L,0x6649L,0x00BBL,1UL,0x00BBL,0x6649L},{0x00BBL,7UL,1UL,1UL,7UL,0x00BBL},{0x6649L,0x00BBL,1UL,0x00BBL,0x6649L,0x6649L}},{{0x4F37L,0x00BBL,0x00BBL,0x4F37L,7UL,0x4F37L},{0x4F37L,7UL,0x4F37L,0x00BBL,0x00BBL,0x4F37L},{0x6649L,0x6649L,0x00BBL,1UL,0x00BBL,0x6649L},{0x00BBL,7UL,1UL,1UL,7UL,0x00BBL}}};
    union U1 **l_2338 = &g_970;
    int16_t l_2376 = 0xD2B9L;
    int8_t l_2438 = (-1L);
    int8_t l_2453 = 0L;
    int32_t *l_2458[1][7] = {{&g_38,&g_1558,&g_1558,&g_38,&g_1558,&g_1558,&g_38}};
    uint16_t l_2463 = 0x8347L;
    uint16_t l_2490 = 65530UL;
    uint32_t **l_2497 = &g_2103;
    uint32_t ***l_2496 = &l_2497;
    uint32_t ****l_2495[7][5][3] = {{{&l_2496,&l_2496,(void*)0},{&l_2496,&l_2496,&l_2496},{&l_2496,&l_2496,&l_2496},{&l_2496,&l_2496,&l_2496},{&l_2496,(void*)0,&l_2496}},{{&l_2496,&l_2496,&l_2496},{&l_2496,&l_2496,&l_2496},{&l_2496,&l_2496,&l_2496},{&l_2496,&l_2496,&l_2496},{&l_2496,&l_2496,(void*)0}},{{&l_2496,&l_2496,(void*)0},{&l_2496,&l_2496,&l_2496},{(void*)0,&l_2496,(void*)0},{&l_2496,&l_2496,&l_2496},{(void*)0,&l_2496,(void*)0}},{{&l_2496,&l_2496,(void*)0},{&l_2496,&l_2496,(void*)0},{&l_2496,&l_2496,&l_2496},{&l_2496,&l_2496,&l_2496},{&l_2496,&l_2496,&l_2496}},{{&l_2496,&l_2496,(void*)0},{&l_2496,&l_2496,&l_2496},{(void*)0,(void*)0,&l_2496},{&l_2496,&l_2496,&l_2496},{&l_2496,&l_2496,&l_2496}},{{&l_2496,&l_2496,&l_2496},{(void*)0,&l_2496,&l_2496},{&l_2496,&l_2496,&l_2496},{&l_2496,&l_2496,&l_2496},{&l_2496,&l_2496,&l_2496}},{{&l_2496,&l_2496,&l_2496},{&l_2496,&l_2496,&l_2496},{&l_2496,&l_2496,(void*)0},{&l_2496,&l_2496,&l_2496},{&l_2496,(void*)0,&l_2496}}};
    int16_t l_2515[1][6][5] = {{{(-1L),1L,(-1L),0x34E3L,0x34E3L},{(-1L),1L,(-1L),0x34E3L,0x34E3L},{(-1L),1L,(-1L),0x34E3L,0x34E3L},{(-1L),1L,(-1L),0x34E3L,0x34E3L},{(-1L),1L,(-1L),0x34E3L,0x34E3L},{(-1L),1L,(-1L),0x34E3L,0x34E3L}}};
    uint32_t l_2519 = 4294967294UL;
    int32_t ***l_2592 = &g_114;
    int32_t l_2651 = (-1L);
    int64_t l_2666 = 0xA9A52C81842F5758LL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_2277[i] = 0x13BC37C7C50A7680LL;
    for (i = 0; i < 6; i++)
        l_2280[i] = 0xE8852B7DL;
    for (g_175 = 0; (g_175 <= 3); g_175 += 1)
    { 
        uint8_t l_1883 = 0x4BL;
        union U2 l_1891 = {4294967293UL};
        int32_t l_1894 = 1L;
        int8_t l_1901[7];
        int32_t l_1903[1][5];
        int16_t l_1914 = 0x8FC7L;
        const uint16_t l_1920[1][5] = {{0xE395L,0xE395L,0xE395L,0xE395L,0xE395L}};
        int32_t ****l_1925 = &g_180;
        struct S0 l_1929 = {0x7E835B10L};
        union U2 *****l_1930 = &g_1326[1];
        int8_t * const *l_1937 = &g_994;
        int32_t l_1948[6] = {0x3E5F1242L,0x4FEF3598L,0x4FEF3598L,0x3E5F1242L,0x4FEF3598L,0x4FEF3598L};
        uint8_t l_1989 = 0xC8L;
        uint64_t l_2001 = 0x9ED89A75344A4BF2LL;
        uint8_t l_2026 = 0x4CL;
        uint32_t **l_2053 = (void*)0;
        uint32_t *l_2056[4];
        uint32_t **l_2055 = &l_2056[1];
        int i, j;
        for (i = 0; i < 7; i++)
            l_1901[i] = 0x74L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_1903[i][j] = (-3L);
        }
        for (i = 0; i < 4; i++)
            l_2056[i] = &g_47.f0;
        if (((p_14.f0 != (safe_sub_func_uint8_t_u_u(((void*)0 != (*g_696)), g_248))) >= ((safe_mul_func_uint16_t_u_u((**g_1711), (+((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(((l_1882 , 0x2D09L) && p_12), 10)) , p_12), l_1882)), p_14.f0)), 1)) == l_1882)))) <= l_1883)))
        { 
            uint8_t l_1893 = 0UL;
            int32_t l_1902 = 2L;
            int32_t l_1906 = (-1L);
            int32_t l_1907 = 0x9D725D43L;
            int32_t l_1908 = 0xFEFB25DEL;
            int32_t l_1909 = 0xC2843082L;
            int32_t l_1910 = 0x22B49950L;
            int32_t l_1911 = 1L;
            int32_t l_1912 = 0x99D12E84L;
            int32_t l_1913[1][3];
            union U2 l_1921 = {7UL};
            struct S0 l_1940[2][3][1] = {{{{4294967289UL}},{{4294967289UL}},{{4294967289UL}}},{{{4294967289UL}},{{4294967289UL}},{{4294967289UL}}}};
            uint32_t *l_1945[7][3] = {{&g_156,(void*)0,&g_156},{&g_47.f0,&g_47.f0,&g_64},{&l_1926.f0,(void*)0,&l_1926.f0},{&g_47.f0,&g_64,&g_64},{&g_156,(void*)0,&g_156},{&g_47.f0,&g_47.f0,&g_64},{&l_1926.f0,(void*)0,&l_1926.f0}};
            union U1 ** const **l_1952 = &g_1950;
            uint16_t *l_1954 = (void*)0;
            int16_t *l_1991 = &g_495;
            int64_t l_2000[4];
            uint16_t l_2016 = 1UL;
            uint8_t *l_2027 = &l_1883;
            int32_t *l_2028 = &g_38;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_1913[i][j] = (-6L);
            }
            for (i = 0; i < 4; i++)
                l_2000[i] = 8L;
            if ((safe_lshift_func_uint16_t_u_s(p_12, 7)))
            { 
                union U1 l_1888 = {1UL};
                int32_t *l_1900[1];
                uint16_t l_1915 = 0x5CB5L;
                int32_t * const *l_1924[6][6] = {{&g_115,&g_115,&g_115,&g_115,&g_115,&g_115},{&g_115,&g_115,&g_115,&g_115,&g_115,&g_115},{&g_115,&g_115,&g_115,&g_115,&g_115,&g_115},{&g_115,&g_115,&g_115,&g_115,&g_115,&g_115},{&g_115,&g_115,&g_115,&g_115,&g_115,&g_115},{&g_115,&g_115,&g_115,&g_115,&g_115,&g_115}};
                int32_t * const **l_1923 = &l_1924[1][0];
                int32_t * const ***l_1922 = &l_1923;
                const int8_t *l_1936 = &g_941[0][0];
                const int8_t **l_1935 = &l_1936;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_1900[i] = &g_1558;
                for (g_1648 = 0; (g_1648 <= 3); g_1648 += 1)
                { 
                    union U2 l_1892 = {0x30832F66L};
                    int32_t *****l_1895 = (void*)0;
                    int16_t *l_1896 = (void*)0;
                    int16_t *l_1897[3][4] = {{&g_1865,&g_68[0],&g_68[0],&g_1865},{&g_68[0],&g_1865,&g_68[0],&g_68[0]},{&g_1865,&g_1865,&g_1865,&g_1865}};
                    uint32_t l_1898 = 0x6481151DL;
                    int32_t *l_1899 = &g_78[0];
                    int i, j;
                    (*l_1899) = (((l_1898 ^= (safe_add_func_uint64_t_u_u(0x16F43583BC5B24D0LL, ((((l_1888 , (safe_div_func_int64_t_s_s((l_1882 , (g_712 ^ ((((((p_14.f0 , (((l_1891 , l_1892) , l_1893) || l_1892.f0)) < l_1894) , (**g_1018)) != &l_1891) != l_1893) | (*p_13)))), l_1882))) | l_1882) , l_1895) == l_1895)))) == 0x045CL) < l_1888.f1);
                }
                ++l_1915;
                for (l_1905 = 3; (l_1905 >= 0); l_1905 -= 1)
                { 
                    return p_13;
                }
                if ((((safe_div_func_int16_t_s_s(l_1920[0][0], (l_1882 ^ 0x3B3FL))) , ((l_1921 = l_1921) , (p_14.f2 , l_1922))) == l_1925))
                { 
                    struct S0 *l_1927 = &l_1926;
                    struct S0 *l_1928 = (void*)0;
                    int32_t **l_1934 = &g_31;
                    l_1929 = (l_1904[1][0] , ((*l_1927) = l_1926));
                    (*l_1934) = func_24((p_12 | (((&g_1326[1] != l_1930) , g_73[0][3][0].f1) != (0xE6C8L >= (((safe_sub_func_uint32_t_u_u(0x196EEC54L, (safe_unary_minus_func_uint64_t_u(p_14.f0)))) && g_331) <= 0x44L)))));
                }
                else
                { 
                    (*p_13) ^= (l_1935 != l_1937);
                }
            }
            else
            { 
                uint32_t **l_1941 = (void*)0;
                uint32_t **l_1942 = (void*)0;
                uint32_t *l_1944[5][6][7] = {{{&l_1921.f0,(void*)0,&l_1921.f0,&g_64,&l_1926.f0,(void*)0,&l_1921.f0},{&l_1940[0][2][0].f0,&l_1921.f0,(void*)0,&l_1929.f0,(void*)0,&l_1921.f0,&g_156},{(void*)0,&g_156,(void*)0,(void*)0,(void*)0,&g_47.f0,&l_1921.f0},{&g_64,&g_64,(void*)0,&l_1921.f0,&g_156,&l_1891.f0,&g_156},{&l_1940[0][2][0].f0,&g_64,&l_1921.f0,&g_156,(void*)0,(void*)0,&g_156},{&l_1929.f0,(void*)0,&l_1921.f0,&l_1921.f0,&g_156,&g_64,&l_1921.f0}},{{&l_1921.f0,&g_47.f0,&l_1921.f0,&l_1891.f0,&l_1921.f0,&l_1940[0][2][0].f0,&g_156},{(void*)0,&g_156,&l_1940[0][2][0].f0,&l_1940[0][2][0].f0,&g_156,(void*)0,&l_1921.f0},{&l_1926.f0,(void*)0,&l_1940[0][2][0].f0,(void*)0,&l_1929.f0,(void*)0,&l_1940[0][2][0].f0},{(void*)0,(void*)0,&l_1929.f0,&g_47.f0,&g_47.f0,&l_1940[0][2][0].f0,&l_1921.f0},{&l_1921.f0,(void*)0,&l_1926.f0,&g_156,&g_64,&l_1929.f0,&l_1940[0][2][0].f0},{&l_1921.f0,&g_156,(void*)0,&l_1921.f0,(void*)0,&l_1921.f0,(void*)0}},{{&l_1940[0][2][0].f0,&g_47.f0,&g_64,&g_64,&l_1891.f0,&l_1940[0][2][0].f0,&l_1891.f0},{&g_64,(void*)0,(void*)0,&g_64,&g_156,&g_156,&l_1926.f0},{&g_47.f0,&g_64,(void*)0,&g_64,&l_1929.f0,&g_47.f0,(void*)0},{&g_47.f0,&g_64,&g_47.f0,&g_64,&l_1926.f0,&l_1921.f0,&l_1940[0][2][0].f0},{&l_1940[0][2][0].f0,&g_156,&l_1940[0][2][0].f0,&l_1921.f0,&l_1891.f0,&l_1891.f0,&l_1921.f0},{&g_156,&l_1921.f0,&g_156,&g_156,&l_1940[0][2][0].f0,&g_64,(void*)0}},{{&l_1940[0][2][0].f0,&l_1929.f0,&l_1891.f0,&g_47.f0,&l_1921.f0,(void*)0,&l_1940[0][2][0].f0},{&g_64,&l_1921.f0,&g_47.f0,(void*)0,&l_1940[0][2][0].f0,&g_64,&g_156},{(void*)0,(void*)0,&g_64,&l_1940[0][2][0].f0,&l_1926.f0,&l_1891.f0,&l_1926.f0},{&g_47.f0,&l_1921.f0,&l_1940[0][2][0].f0,&l_1891.f0,(void*)0,&l_1921.f0,&l_1929.f0},{&g_47.f0,&l_1921.f0,&l_1929.f0,&l_1921.f0,(void*)0,&g_47.f0,&g_64},{&l_1940[0][2][0].f0,&l_1926.f0,&g_64,&g_156,&l_1926.f0,&g_156,&l_1929.f0}},{{&l_1940[0][2][0].f0,(void*)0,(void*)0,&l_1921.f0,&l_1921.f0,&l_1940[0][2][0].f0,&g_64},{&g_47.f0,&l_1921.f0,&g_156,(void*)0,&g_47.f0,&l_1921.f0,&g_64},{&g_47.f0,&l_1929.f0,&l_1926.f0,&l_1929.f0,&l_1926.f0,&l_1929.f0,&g_47.f0},{(void*)0,&l_1921.f0,&l_1940[0][2][0].f0,&g_47.f0,(void*)0,&l_1940[0][2][0].f0,&g_64},{&g_64,&l_1940[0][2][0].f0,&g_64,&l_1929.f0,(void*)0,&g_64,(void*)0},{&g_64,(void*)0,&g_47.f0,&l_1940[0][2][0].f0,&g_156,(void*)0,&g_64}}};
                uint32_t **l_1943 = &l_1944[2][5][6];
                int64_t *l_1946 = &l_1921.f2;
                int64_t *l_1947 = (void*)0;
                union U1 ** const ***l_1951 = &g_1949;
                int32_t l_1970 = 0xAD3F04E2L;
                int32_t l_1971 = (-7L);
                int32_t l_1973 = 0x2D450074L;
                int32_t l_1974 = 0xB65BDA12L;
                int32_t l_1975 = 0L;
                int32_t l_1976[5][2][2] = {{{1L,1L},{1L,1L}},{{1L,1L},{1L,1L}},{{1L,1L},{1L,1L}},{{1L,1L},{1L,1L}},{{1L,1L},{1L,1L}}};
                uint32_t l_1977[5] = {1UL,1UL,1UL,1UL,1UL};
                int i, j, k;
                l_1952 = ((*l_1951) = ((safe_add_func_uint32_t_u_u(l_1894, (l_1948[4] = (((l_1903[0][2] ^= ((l_1940[0][2][0] , l_1904[3][2]) || (((*l_1943) = p_13) != (((0L < 0x93L) , ((((g_156 , (*g_969)) == (*g_969)) > g_10[0][6][0].f0) && 0x0CB19F43L)) , l_1945[3][0])))) ^ p_14.f0) <= l_1920[0][4])))) , g_1949));
                for (g_40 = 3; (g_40 >= 0); g_40 -= 1)
                { 
                    struct S0 *l_1953 = &g_47;
                    uint16_t *l_1955 = &g_1789;
                    int32_t l_1960 = (-1L);
                    int32_t *l_1966 = &l_1904[0][1];
                    int32_t *l_1967 = &l_1910;
                    int32_t *l_1968 = &l_1903[0][2];
                    int32_t *l_1969[7][7][2] = {{{&g_78[1],(void*)0},{(void*)0,&l_1907},{&l_1904[1][3],&l_1910},{&l_1907,&l_1910},{&l_1904[1][3],&l_1907},{(void*)0,(void*)0},{&g_78[1],&g_78[1]}},{{&l_1907,&l_1907},{&l_1913[0][1],&l_1912},{&g_1648,&l_1960},{&l_1902,&g_1648},{(void*)0,&l_1904[1][3]},{(void*)0,&g_1648},{&l_1902,&l_1960}},{{&g_1648,&l_1912},{&l_1913[0][1],&l_1907},{&l_1907,&g_78[1]},{&g_78[1],(void*)0},{(void*)0,&l_1907},{&l_1904[1][3],&l_1910},{&l_1907,&l_1910}},{{&l_1904[1][3],&l_1907},{(void*)0,(void*)0},{&g_78[1],&g_78[1]},{&l_1907,&l_1907},{&l_1913[0][1],&l_1912},{&g_1648,&l_1960},{&l_1902,&g_1648}},{{(void*)0,&l_1904[1][3]},{(void*)0,&g_1648},{&l_1902,&l_1960},{&g_1648,&l_1912},{&l_1913[0][1],&l_1907},{&l_1907,&g_78[1]},{&g_78[1],(void*)0}},{{(void*)0,&l_1907},{&l_1904[1][3],&l_1910},{&l_1907,&l_1910},{&l_1904[1][3],&l_1907},{(void*)0,(void*)0},{&g_78[1],&g_78[1]},{&l_1907,&l_1907}},{{&l_1913[0][1],&l_1912},{&g_1648,&l_1960},{&l_1902,&g_1648},{(void*)0,&l_1904[1][3]},{(void*)0,&g_1648},{&l_1902,&l_1960},{&g_1648,&l_1912}}};
                    int i, j, k;
                    p_13 = (((*l_1953) = l_1929) , (((p_14.f1 = ((**g_608) = ((l_1955 = l_1954) == &l_1920[0][4]))) ^ (((((safe_mod_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u(l_1960, 4)) && (safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(255UL, (~((0xBDEBL | l_1926.f0) , 4L)))), 0xBCL))) && 0x6DD2L), p_12)) == 251UL) && l_1906) , p_12) < g_385)) , p_13));
                    (*p_13) |= 0xC80AE7B1L;
                    l_1977[1]++;
                    (*p_13) = (-5L);
                }
                return p_13;
            }
            l_1980 = &l_1948[4];
            l_1904[4][2] &= (safe_mul_func_int8_t_s_s((p_14.f1 || (safe_mul_func_int16_t_s_s(((*l_1991) = (((((*l_1930) = l_1985) == (void*)0) == ((((((((((safe_div_func_uint64_t_u_u(l_1914, g_53[2])) != (l_1921 , ((l_1988 = l_1988) == (*l_1952)))) < g_53[0]) > p_14.f1) < 4294967294UL) & l_1948[5]) <= p_14.f0) != l_1989) , (*p_13)) , 1UL)) && l_1990)), (*l_1980)))), (*l_1980)));
            for (g_1558 = 3; (g_1558 >= 0); g_1558 -= 1)
            { 
                uint16_t *l_1998[2][6][5] = {{{&g_45[0][4],&g_45[0][4],&g_10[0][6][0].f1,(void*)0,&g_1789},{(void*)0,(void*)0,&g_45[0][4],&g_153,&g_10[0][6][0].f1},{&g_153,(void*)0,&g_153,&g_45[0][5],&g_1556.f1},{&g_153,(void*)0,&g_1789,&g_45[0][4],&g_45[0][5]},{&l_1921.f1,&g_45[0][4],&g_153,&l_1891.f1,&g_45[0][4]},{&g_1789,(void*)0,&l_1891.f1,&l_1891.f1,(void*)0}},{{&g_10[0][6][0].f1,&g_45[0][5],(void*)0,&g_45[0][4],&g_153},{&g_1556.f1,&g_10[0][6][0].f1,&l_1891.f1,&g_45[0][5],&l_1891.f1},{&g_1789,&g_1789,&l_1891.f1,&g_153,&g_1556.f1},{&g_1556.f1,&g_1556.f1,&g_45[0][2],(void*)0,&g_1556.f1},{&g_10[0][6][0].f1,(void*)0,(void*)0,&g_45[0][2],&g_45[0][4]},{&g_45[0][2],&g_1789,&g_10[0][6][0].f1,&g_1789,&g_45[0][2]}}};
                int32_t l_1999 = (-3L);
                int16_t l_2004[4][4][2] = {{{0x2D69L,4L},{0L,0L},{0L,4L},{0x2D69L,0L}},{{4L,0L},{0x2D69L,4L},{0L,0L},{0L,4L}},{{0x2D69L,0L},{4L,0L},{0x2D69L,4L},{0L,0L}},{{0L,4L},{0x2D69L,0L},{4L,0L},{0x2D69L,4L}}};
                int i, j, k;
                (*g_1867) |= ((safe_lshift_func_int16_t_s_s(((*l_1991) = ((safe_add_func_int8_t_s_s((l_1929 , p_14.f2), (((**g_1711)--) > (l_2001++)))) <= (l_2004[2][3][1] = 1L))), 1)) || (safe_lshift_func_int16_t_s_u(p_12, 12)));
                if ((*g_711))
                    continue;
                (*p_13) &= (-1L);
                if ((*p_13))
                    break;
                if ((*p_13))
                    break;
                for (l_1990 = 0; (l_1990 <= 3); l_1990 += 1)
                { 
                    int i, j, k;
                    if (g_343[g_175][(l_1990 + 2)][l_1990])
                        break;
                    l_1999 = ((*p_13) > ((((~(safe_mod_func_int8_t_s_s(((*g_994) &= (safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(0xAEL, ((l_2004[2][1][1] || ((*g_969) == &p_14)) & (safe_div_func_uint32_t_u_u(((l_2016 , 1L) >= l_1903[0][4]), l_1910))))), p_14.f1))), g_343[g_175][(l_1990 + 2)][l_1990]))) , p_14.f2) | g_46.f0) < l_2004[2][1][0]));
                    (*l_1980) |= ((*g_1867) = (*g_1867));
                    (*l_1980) |= (*p_13);
                }
            }
            (*l_2028) ^= (safe_rshift_func_uint8_t_u_u(((l_1911 ^= p_14.f0) <= p_14.f2), ((safe_lshift_func_uint8_t_u_u(((***g_1950) , (+0xB903L)), ((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(p_12, 4)), 3)) >= (((*l_2027) = ((0x6CE155F7L | (*p_13)) | l_2026)) >= (*l_1980))))) & 0x87A6114FL)));
        }
        else
        { 
            int32_t *l_2029 = &g_38;
            struct S0 l_2051 = {8UL};
            int32_t l_2073 = (-10L);
            int32_t l_2074 = 0L;
            int32_t l_2075 = 0x758C2310L;
            uint32_t ** const l_2104 = &l_2056[1];
            for (l_1990 = 0; (l_1990 <= 3); l_1990 += 1)
            { 
                int16_t l_2037 = 1L;
                uint8_t *l_2040[4][5] = {{&g_496,&g_496,&g_1580[0],(void*)0,&g_1580[0]},{&l_1883,&l_1883,(void*)0,&g_496,(void*)0},{&g_496,&g_496,&g_1580[0],(void*)0,&g_1580[0]},{&l_1883,&l_1883,(void*)0,&g_496,(void*)0}};
                uint32_t **l_2047 = (void*)0;
                int32_t l_2050 = 0xC4C58FC3L;
                union U1 ****l_2052 = &l_1988;
                uint32_t ***l_2054 = &l_2053;
                int8_t l_2062[4][2] = {{0x59L,0x14L},{0x14L,0x59L},{0x14L,0x14L},{0x59L,0x14L}};
                uint16_t l_2065 = 3UL;
                int i, j;
                for (l_1926.f0 = 0; (l_1926.f0 <= 3); l_1926.f0 += 1)
                { 
                    return l_2029;
                }
                (*p_13) = (safe_mod_func_uint16_t_u_u(1UL, 0x7D12L));
                if ((safe_mul_func_int16_t_s_s((+(((*p_13) = (((safe_rshift_func_uint16_t_u_u((**g_1711), 2)) & (g_156 ^= (l_2037 , ((safe_sub_func_uint32_t_u_u(((++g_1580[0]) & ((safe_div_func_uint64_t_u_u((((**g_608) < (safe_add_func_uint32_t_u_u((l_2047 != (l_2055 = ((*l_2054) = (((l_2050 = (g_1556.f2 != 1L)) == (((((((((((l_2051 , l_2052) == (void*)0) == 1L) , g_1789) || 1UL) == g_1789) || p_14.f1) & 0x6A2AC77CF8A12A9ELL) != 0x03L) , p_12) < p_14.f0)) , l_2053)))), 0x6837CBF3L))) & l_1948[4]), p_14.f2)) >= 0x2B247686F9EF08FDLL)), (*l_2029))) >= (*g_994))))) || 8UL)) >= 2L)), p_14.f2)))
                { 
                    int16_t *l_2060 = &l_1914;
                    (*p_13) &= ((g_156 ^= g_45[0][3]) | ((~(safe_mul_func_int16_t_s_s(((*l_2060) = (*l_2029)), (p_14 , (~l_2062[0][1]))))) > ((l_2050 = ((safe_sub_func_int16_t_s_s((((void*)0 != &p_13) & l_2026), l_2065)) <= p_14.f0)) | 0x35F0CBF23260E939LL)));
                }
                else
                { 
                    struct S0 *l_2066[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_2066[i] = (void*)0;
                    l_1929 = l_1929;
                    (****l_1930) = (**g_1018);
                }
                for (l_2037 = 3; (l_2037 >= 0); l_2037 -= 1)
                { 
                    int32_t *l_2070 = &g_78[1];
                    int32_t *l_2071[3];
                    int64_t l_2072 = 0x63417869A76FBAC7LL;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_2071[i] = (void*)0;
                    --l_2067;
                    if (l_1891.f1)
                        break;
                    l_2076[4][3]++;
                    (*g_1867) = (0UL ^ p_14.f0);
                    return p_13;
                }
                for (l_2065 = 0; (l_2065 <= 3); l_2065 += 1)
                { 
                    l_2050 |= l_2062[3][1];
                }
            }
            for (g_1556.f1 = 0; (g_1556.f1 <= 3); g_1556.f1 += 1)
            { 
                uint8_t *l_2083 = &l_1883;
                int32_t l_2094 = (-5L);
                int64_t *l_2105 = &l_1891.f2;
                (*p_13) = (safe_lshift_func_uint8_t_u_u(((*l_2083) ^= (g_385 <= (safe_mod_func_int32_t_s_s((*p_13), l_1989)))), (safe_div_func_int32_t_s_s(((((*l_2105) = (safe_sub_func_int32_t_s_s(((safe_div_func_int8_t_s_s(((**l_1937) = (((safe_div_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((l_2094 ^= 4294967293UL) < l_1948[4]), (safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((l_1903[0][2] &= ((*l_2029) = (safe_add_func_uint8_t_u_u((1L | g_78[0]), g_2101)))), 4294967286UL)), p_14.f2)))), (-10L))) , g_2102) == l_2104)), 3L)) ^ p_14.f1), 4294967290UL))) < p_14.f1) ^ (-8L)), (*g_2103)))));
                (*p_13) = (*g_1867);
                (*p_13) = (*p_13);
                for (g_1288 = 0; (g_1288 <= 3); g_1288 += 1)
                { 
                    (*p_13) ^= (*g_711);
                    return p_13;
                }
            }
            if (l_1891.f1)
                break;
            for (g_632 = 0; (g_632 <= 3); g_632 += 1)
            { 
                struct S0 *l_2106[1][5] = {{&l_1929,&l_1929,&l_1929,&l_1929,&l_1929}};
                struct S0 l_2108 = {9UL};
                const union U2 *l_2120 = &g_73[0][3][0];
                int i, j;
                l_2107[5] = l_2051;
                l_2108 = l_2051;
                for (g_248 = 0; (g_248 >= 0); g_248 -= 1)
                { 
                    int32_t *l_2109[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_2109[i] = (void*)0;
                    return l_2109[4];
                }
                for (g_331 = 3; (g_331 >= 0); g_331 -= 1)
                { 
                    uint8_t l_2114 = 0xE1L;
                    l_1903[0][2] |= (((*l_2029) |= (safe_unary_minus_func_int32_t_s((!(safe_div_func_int8_t_s_s((2L >= (4294967295UL & (*p_13))), l_2108.f0)))))) | (((****l_1930) = ((l_2114 != (l_2115 || ((safe_add_func_int16_t_s_s(((((((**g_608) & g_2118) == (**g_1711)) , l_2119) != 18446744073709551615UL) != l_2108.f0), l_2051.f0)) & p_12))) , (****l_1930))) != l_2120));
                    (*l_2029) = 0x7C955335L;
                }
            }
            if ((*p_13))
                break;
        }
        return p_13;
    }
    g_2125 = (void*)0;
    return p_13;
}



static int32_t * func_16(union U1  p_17, int8_t  p_18, int32_t * p_19, int32_t * p_20)
{ 
    int64_t l_1565 = (-1L);
    int32_t l_1621 = 0x3AD558C5L;
    int32_t l_1639 = 0xC626372FL;
    struct S0 **l_1665 = &g_892[4];
    struct S0 ***l_1664[4];
    uint16_t **l_1710[7][5][6] = {{{&g_609[1],&g_609[1],(void*)0,&g_609[1],&g_609[1],(void*)0},{&g_609[1],&g_609[1],&g_609[1],&g_609[1],&g_609[1],&g_609[0]},{&g_609[1],&g_609[1],(void*)0,(void*)0,&g_609[1],&g_609[1]},{&g_609[0],&g_609[1],&g_609[1],&g_609[1],(void*)0,&g_609[1]},{&g_609[0],&g_609[0],&g_609[1],&g_609[0],&g_609[1],&g_609[0]}},{{&g_609[1],&g_609[1],&g_609[1],(void*)0,(void*)0,&g_609[1]},{&g_609[1],(void*)0,&g_609[0],&g_609[1],&g_609[0],&g_609[1]},{&g_609[1],(void*)0,&g_609[1],&g_609[1],&g_609[1],(void*)0},{&g_609[1],&g_609[1],&g_609[1],(void*)0,&g_609[1],&g_609[1]},{&g_609[1],(void*)0,&g_609[0],&g_609[0],&g_609[1],&g_609[0]}},{{&g_609[0],&g_609[0],&g_609[1],&g_609[1],&g_609[1],&g_609[1]},{&g_609[0],&g_609[1],&g_609[1],(void*)0,&g_609[1],(void*)0},{&g_609[1],&g_609[0],&g_609[1],&g_609[1],&g_609[1],&g_609[1]},{&g_609[1],&g_609[1],&g_609[1],&g_609[1],(void*)0,&g_609[1]},{&g_609[1],(void*)0,&g_609[0],(void*)0,&g_609[1],&g_609[1]}},{{&g_609[1],&g_609[1],&g_609[0],&g_609[0],&g_609[1],&g_609[1]},{(void*)0,&g_609[0],&g_609[1],&g_609[0],(void*)0,&g_609[1]},{&g_609[0],(void*)0,&g_609[1],&g_609[1],(void*)0,(void*)0},{&g_609[1],&g_609[1],&g_609[1],&g_609[1],&g_609[1],&g_609[1]},{&g_609[1],&g_609[1],&g_609[1],&g_609[1],(void*)0,&g_609[0]}},{{(void*)0,&g_609[1],&g_609[1],&g_609[1],&g_609[1],&g_609[1]},{&g_609[1],&g_609[0],(void*)0,(void*)0,&g_609[1],&g_609[1]},{&g_609[1],&g_609[1],&g_609[0],&g_609[0],&g_609[1],(void*)0},{(void*)0,&g_609[1],&g_609[1],&g_609[0],&g_609[1],&g_609[0]},{(void*)0,&g_609[0],&g_609[1],&g_609[1],&g_609[1],&g_609[1]}},{{&g_609[0],&g_609[1],&g_609[1],&g_609[1],(void*)0,&g_609[1]},{(void*)0,(void*)0,&g_609[1],&g_609[1],(void*)0,&g_609[1]},{&g_609[1],&g_609[1],&g_609[1],(void*)0,&g_609[1],&g_609[1]},{&g_609[0],&g_609[1],&g_609[1],&g_609[1],&g_609[1],&g_609[0]},{&g_609[1],&g_609[1],(void*)0,&g_609[1],&g_609[1],&g_609[0]}},{{&g_609[1],&g_609[1],&g_609[1],&g_609[1],&g_609[1],&g_609[1]},{&g_609[1],&g_609[0],&g_609[1],&g_609[1],(void*)0,&g_609[0]},{&g_609[1],&g_609[1],(void*)0,&g_609[1],&g_609[1],(void*)0},{&g_609[0],&g_609[1],(void*)0,(void*)0,&g_609[1],&g_609[0]},{&g_609[1],&g_609[1],&g_609[1],&g_609[1],&g_609[1],&g_609[1]}}};
    uint16_t **l_1712 = &g_609[1];
    int32_t l_1769 = 0L;
    int32_t l_1773[5][1];
    int32_t **l_1781[3][3] = {{&g_115,&g_115,&g_115},{&g_115,&g_115,&g_115},{&g_115,&g_115,&g_115}};
    union U2 ***l_1782[1][2];
    union U1 **l_1795 = &g_970;
    int32_t l_1837 = 0x15DAFCDFL;
    struct S0 l_1842 = {0x527D96F8L};
    int8_t l_1848 = 0x08L;
    uint64_t l_1849 = 0xDC79B6E56338685BLL;
    int64_t ****l_1859 = &g_689;
    uint8_t l_1864[6];
    int64_t *l_1866 = &g_1028;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1664[i] = &l_1665;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_1773[i][j] = (-8L);
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_1782[i][j] = &g_1019;
    }
    for (i = 0; i < 6; i++)
        l_1864[i] = 255UL;
    for (g_171 = (-23); (g_171 != (-14)); g_171 = safe_add_func_int8_t_s_s(g_171, 3))
    { 
        int8_t ***l_1595[4][3][7] = {{{&g_887,&g_887,&g_887,&g_887,&g_887,&g_887,&g_887},{&g_887,&g_887,&g_887,&g_887,&g_887,&g_887,&g_887},{&g_887,&g_887,&g_887,&g_887,&g_887,&g_887,&g_887}},{{&g_887,&g_887,&g_887,&g_887,&g_887,&g_887,&g_887},{&g_887,&g_887,&g_887,&g_887,&g_887,&g_887,&g_887},{&g_887,&g_887,&g_887,&g_887,&g_887,&g_887,&g_887}},{{&g_887,&g_887,&g_887,&g_887,&g_887,&g_887,&g_887},{&g_887,&g_887,&g_887,&g_887,&g_887,&g_887,&g_887},{&g_887,&g_887,&g_887,&g_887,&g_887,&g_887,&g_887}},{{&g_887,&g_887,&g_887,&g_887,&g_887,&g_887,&g_887},{&g_887,&g_887,&g_887,&g_887,&g_887,&g_887,&g_887},{&g_887,&g_887,&g_887,&g_887,&g_887,&g_887,&g_887}}};
        int32_t l_1599 = 4L;
        uint32_t l_1640[3][7][2] = {{{4294967295UL,7UL},{0UL,4294967292UL},{0x9C052BB4L,0x48D15742L},{0x48D15742L,0x6D602261L},{0x48D15742L,4294967288UL},{0xDB38B490L,0xDB38B490L},{4294967292UL,2UL}},{{4294967290UL,0x6D602261L},{0x9C052BB4L,4294967295UL},{4294967288UL,0x9C052BB4L},{7UL,4294967295UL},{7UL,0x9C052BB4L},{4294967288UL,4294967295UL},{0x9C052BB4L,0x6D602261L}},{{4294967290UL,2UL},{4294967292UL,0xDB38B490L},{0xDB38B490L,4294967288UL},{0x48D15742L,4294967288UL},{0xDB38B490L,0xDB38B490L},{4294967292UL,2UL},{4294967290UL,0x6D602261L}}};
        int8_t l_1652 = 0x23L;
        int32_t l_1708 = 1L;
        uint32_t l_1727 = 1UL;
        struct S0 l_1729 = {6UL};
        int16_t l_1735 = 0L;
        uint32_t l_1759 = 18446744073709551615UL;
        int32_t l_1766 = 0x343D57CAL;
        int32_t l_1767 = (-9L);
        int32_t l_1768 = 1L;
        int32_t l_1771 = 0x7CB3C697L;
        int32_t l_1772[2];
        uint8_t l_1775 = 0xE6L;
        const int32_t *l_1780 = &g_40;
        const int32_t **l_1779 = &l_1780;
        union U2 ***l_1783 = (void*)0;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1772[i] = 0xA8F5F957L;
        for (g_38 = 25; (g_38 == (-26)); g_38--)
        { 
            int32_t l_1572[2][7] = {{1L,0x6B4035C3L,0xDDC45143L,0x6B4035C3L,1L,0x5DEA4B95L,0x5DEA4B95L},{1L,0x6B4035C3L,0xDDC45143L,0x6B4035C3L,1L,0x5DEA4B95L,0x5DEA4B95L}};
            int32_t *l_1577 = &g_78[0];
            int64_t *l_1578 = &g_248;
            const uint64_t l_1579 = 0xD2FB30C68EE6FE8FLL;
            int8_t l_1581 = (-1L);
            int8_t ***l_1598[4][2] = {{(void*)0,&g_887},{&g_887,(void*)0},{&g_887,&g_887},{(void*)0,&g_887}};
            int8_t l_1620 = 0L;
            int32_t l_1623 = 0L;
            uint16_t l_1651[4][5] = {{0xDE9BL,1UL,0xDE9BL,1UL,0xDE9BL},{4UL,4UL,4UL,4UL,4UL},{0xDE9BL,1UL,0xDE9BL,1UL,0xDE9BL},{4UL,4UL,4UL,4UL,4UL}};
            int i, j;
        }
        if (l_1599)
            break;
        for (l_1599 = 0; (l_1599 <= 1); l_1599 += 1)
        { 
            const uint32_t l_1680 = 0xC39504CBL;
            uint64_t *l_1728 = &g_53[0];
            struct S0 *l_1734 = &l_1729;
            int32_t l_1770 = 1L;
            int32_t l_1774[1][7][3] = {{{1L,1L,0xDB2D9CB5L},{1L,1L,0xDB2D9CB5L},{1L,1L,0xDB2D9CB5L},{1L,1L,0xDB2D9CB5L},{1L,1L,0xDB2D9CB5L},{1L,1L,0xDB2D9CB5L},{1L,1L,0xDB2D9CB5L}}};
            int i, j, k;
        }
    }
    if (l_1773[0][0])
    { 
        struct S0 l_1797 = {0xC4F31DD7L};
        struct S0 **l_1803 = (void*)0;
        int32_t *l_1818 = &l_1773[0][0];
        int32_t *l_1845 = &g_78[0];
        int32_t *l_1846 = (void*)0;
        int32_t *l_1847[4];
        int i;
        for (i = 0; i < 4; i++)
            l_1847[i] = (void*)0;
        l_1797 = l_1797;
        p_19 = func_24(g_68[0]);
        (*p_20) = (*p_19);
        if (((safe_unary_minus_func_int16_t_s((p_17.f2 | (safe_sub_func_uint64_t_u_u(0xF8734ED1B0A5F0BCLL, (safe_sub_func_int8_t_s_s(0xEBL, p_17.f0))))))) , (((l_1803 = l_1803) != (void*)0) > ((((((((void*)0 != &g_1147) , p_17.f0) <= 0x468DL) | p_17.f0) == 3UL) & 0xD3F34857L) & p_17.f0))))
        { 
            (*g_31) ^= ((*p_20) = l_1797.f0);
        }
        else
        { 
            int32_t *l_1817 = &l_1639;
            struct S0 l_1831 = {0x23964AAFL};
            uint8_t l_1840 = 248UL;
            int32_t **l_1844 = &g_31;
lbl_1843:
            for (l_1639 = 0; (l_1639 >= 7); l_1639 = safe_add_func_uint8_t_u_u(l_1639, 9))
            { 
                int8_t l_1814 = 0x41L;
                (*p_20) |= ((((safe_lshift_func_int8_t_s_u((*g_994), 1)) && g_872) && (((p_17 , 0L) , p_17.f1) >= (((((safe_div_func_int32_t_s_s((safe_sub_func_int64_t_s_s((0x97DA889CL < ((safe_lshift_func_uint16_t_u_u(65534UL, (**g_608))) >= p_18)), (-1L))), l_1773[0][0])) && 1UL) , l_1814) & l_1814) ^ 0UL))) == l_1773[0][0]);
                if (g_38)
                    goto lbl_1843;
                for (g_385 = 25; (g_385 > 9); g_385 = safe_sub_func_uint8_t_u_u(g_385, 2))
                { 
                    struct S0 l_1832 = {4294967289UL};
                    uint32_t *l_1835 = &g_47.f0;
                    int64_t l_1836[6][3][1] = {{{0xD812BCDD4F5A99C1LL},{0xD812BCDD4F5A99C1LL},{0x08D3654A064A9EC9LL}},{{0xD812BCDD4F5A99C1LL},{0xD812BCDD4F5A99C1LL},{0x08D3654A064A9EC9LL}},{{0xD812BCDD4F5A99C1LL},{0xD812BCDD4F5A99C1LL},{0x08D3654A064A9EC9LL}},{{0xD812BCDD4F5A99C1LL},{0xD812BCDD4F5A99C1LL},{0x08D3654A064A9EC9LL}},{{0xD812BCDD4F5A99C1LL},{0xD812BCDD4F5A99C1LL},{0x08D3654A064A9EC9LL}},{{0xD812BCDD4F5A99C1LL},{0xD812BCDD4F5A99C1LL},{0x08D3654A064A9EC9LL}}};
                    int i, j, k;
                    (*g_31) |= (((*g_994) = ((p_19 != (l_1818 = l_1817)) != (safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_s((-8L), ((((safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((((p_18 && ((l_1832 = l_1831) , ((*l_1835) = ((safe_rshift_func_int8_t_s_u((g_1288 , p_17.f0), l_1773[0][0])) > 8UL)))) && l_1836[1][2][0]) , l_1836[3][0][0]), l_1797.f0)) > g_1510), p_17.f0)) & l_1837) , l_1836[1][0][0]) ^ p_17.f2))) == l_1836[1][2][0]), l_1797.f0)), 0x5D0EF493L)))) >= p_17.f0);
                }
                for (g_248 = (-7); (g_248 > 22); g_248 = safe_add_func_int32_t_s_s(g_248, 9))
                { 
                    int32_t **l_1841 = (void*)0;
                    p_19 = func_24(l_1840);
                    if ((*p_20))
                        continue;
                    (*g_31) &= ((*p_19) &= (*l_1817));
                    l_1831 = l_1842;
                    if ((*p_19))
                        continue;
                }
            }
            p_20 = l_1818;
            (*l_1844) = l_1817;
        }
        l_1849--;
    }
    else
    { 
        int32_t l_1854 = 0x44A44CD8L;
        int16_t *l_1855 = &g_68[0];
        int16_t *l_1856 = &g_495;
        p_20 = p_19;
        (*p_19) &= ((safe_lshift_func_uint8_t_u_s(255UL, 2)) ^ ((*l_1856) = ((*l_1855) = (p_17.f2 , l_1854))));
    }
    l_1773[0][0] &= (safe_div_func_uint32_t_u_u(((((p_17.f1 != (l_1769 = p_17.f2)) , (**g_1711)) , l_1859) != (((*l_1866) &= (safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s(l_1621, ((((l_1864[4] = l_1842.f0) || l_1565) & p_17.f2) , g_1865))), l_1639))) , l_1859)), g_665));
    return g_1867;
}



static union U1  func_21(int32_t * p_22, union U1  p_23)
{ 
    int32_t * const l_635 = &g_78[0];
    int32_t **l_636 = &g_31;
    struct S0 *l_647 = &g_47;
    uint64_t l_676 = 0UL;
    uint16_t l_679 = 0xF34FL;
    int64_t *****l_709[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_791 = (-1L);
    int32_t l_804 = 0x5B0CB342L;
    int32_t l_826 = 7L;
    int32_t l_827 = 1L;
    int32_t l_828 = 8L;
    int32_t l_829[3];
    int64_t l_844 = (-1L);
    uint32_t l_876 = 0x1AAA537AL;
    union U1 l_885[5][4] = {{{18446744073709551607UL},{0xF9821522L},{18446744073709551607UL},{8UL}},{{4UL},{18446744073709551613UL},{8UL},{8UL}},{{0xF9821522L},{0xF9821522L},{1UL},{18446744073709551613UL}},{{18446744073709551613UL},{4UL},{1UL},{4UL}},{{0xF9821522L},{18446744073709551607UL},{8UL},{1UL}}};
    int32_t ***l_936 = &g_114;
    int8_t *l_995 = &g_171;
    int16_t l_1027 = (-1L);
    uint64_t l_1033 = 0xAE044164A1994148LL;
    int16_t l_1052[7][5] = {{(-9L),0L,(-9L),0x2B3DL,0x2B3DL},{(-9L),0L,(-9L),0x2B3DL,0x2B3DL},{(-9L),0L,(-9L),0x2B3DL,0x2B3DL},{(-9L),0L,(-9L),0x2B3DL,0x2B3DL},{(-9L),0L,(-9L),0x2B3DL,0x2B3DL},{(-9L),0L,(-9L),0x2B3DL,0x2B3DL},{(-9L),0L,(-9L),0x2B3DL,0x2B3DL}};
    int32_t ****l_1145 = &g_180;
    int32_t *****l_1144 = &l_1145;
    const union U1 *l_1200 = &l_885[3][3];
    const union U1 **l_1199[5];
    struct S0 **l_1242 = &g_892[5];
    int8_t l_1278 = 0x72L;
    int32_t l_1402 = (-8L);
    uint64_t l_1406 = 0x01FB4866021AC6E8LL;
    union U2 l_1425 = {2UL};
    const int32_t l_1431 = 0x1F94A0C3L;
    union U2 **l_1439 = &g_198;
    int32_t l_1459 = 0L;
    uint16_t l_1495 = 0x0402L;
    int16_t l_1507 = (-3L);
    int16_t l_1513[3];
    int32_t *l_1530 = &l_826;
    int32_t *l_1531 = &g_78[0];
    int32_t *l_1532 = (void*)0;
    int32_t *l_1533 = &l_827;
    int32_t *l_1534 = &l_1459;
    int32_t *l_1535[7][3] = {{&l_826,&l_826,&l_826},{&l_826,&l_826,&l_826},{&l_826,&l_826,&l_826},{&l_826,&l_826,&l_826},{&l_826,&l_826,&l_826},{&l_826,&g_38,&l_826},{&g_38,&g_38,&l_826}};
    uint32_t l_1536[1];
    uint16_t l_1553[2];
    int i, j;
    for (i = 0; i < 3; i++)
        l_829[i] = (-1L);
    for (i = 0; i < 5; i++)
        l_1199[i] = &l_1200;
    for (i = 0; i < 3; i++)
        l_1513[i] = 0L;
    for (i = 0; i < 1; i++)
        l_1536[i] = 0UL;
    for (i = 0; i < 2; i++)
        l_1553[i] = 0xB8B8L;
    (*l_636) = l_635;
    return g_1556;
}



static int32_t * func_24(uint64_t  p_25)
{ 
    int32_t *l_633 = &g_78[0];
    int32_t **l_634 = &g_31;
    (*l_634) = l_633;
    return &g_38;
}



static uint64_t  func_26(int32_t  p_27, int32_t * p_28, uint16_t  p_29, const struct S0  p_30)
{ 
    int8_t l_50 = 0x11L;
    uint32_t *l_62 = (void*)0;
    uint32_t *l_63 = &g_64;
    int16_t *l_67[7][1][2] = {{{(void*)0,(void*)0}},{{&g_68[0],&g_68[0]}},{{(void*)0,(void*)0}},{{&g_68[0],(void*)0}},{{(void*)0,&g_68[0]}},{{&g_68[0],(void*)0}},{{(void*)0,&g_68[0]}}};
    union U2 l_71 = {8UL};
    union U2 *l_72[2];
    int32_t l_82 = 0x6324B7C8L;
    int32_t **l_113 = (void*)0;
    uint64_t l_230 = 0x335BF82136C56402LL;
    int64_t *l_247 = &g_248;
    struct S0 l_260[4] = {{0x9614BA55L},{0x9614BA55L},{0x9614BA55L},{0x9614BA55L}};
    int32_t *l_306 = (void*)0;
    union U2 **l_313 = &g_198;
    union U2 ***l_312[5];
    uint32_t l_387[5][1][2] = {{{1UL,0UL}},{{1UL,0UL}},{{1UL,0UL}},{{1UL,0UL}},{{1UL,0UL}}};
    struct S0 l_393 = {0x69C68050L};
    int64_t l_426 = 0xEAD75A21BD6B79A9LL;
    int16_t l_428 = 0L;
    int32_t *l_448 = (void*)0;
    int32_t l_510 = 0xBC6A34EAL;
    struct S0 l_534 = {0x8AE40B88L};
    int32_t l_541 = 0x6DF51269L;
    int32_t l_560 = 0x0856E033L;
    int32_t l_562[1];
    int16_t l_571 = 0x8814L;
    uint64_t l_573 = 18446744073709551615UL;
    const int32_t *l_597 = (void*)0;
    int32_t l_625 = (-2L);
    int8_t l_626 = 0L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_72[i] = &l_71;
    for (i = 0; i < 5; i++)
        l_312[i] = &l_313;
    for (i = 0; i < 1; i++)
        l_562[i] = 3L;
    if ((g_47 , (safe_add_func_int16_t_s_s((l_50 != (safe_mul_func_int16_t_s_s((g_53[4] , ((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s(((g_47.f0 | (safe_add_func_int16_t_s_s((g_68[0] = (safe_div_func_uint32_t_u_u(p_30.f0, (++(*l_63))))), (g_78[0] = (safe_mod_func_uint8_t_u_u(((g_73[0][3][0] = l_71) , (safe_sub_func_uint32_t_u_u((safe_add_func_uint64_t_u_u(g_38, 0x2CC684CA67B11082LL)), 0x0D5DD215L))), (-4L))))))) != l_71.f0), g_10[0][6][0].f2)), 3)) , 0xC217L)), p_29))), 65535UL))))
    { 
        uint8_t l_81[5][5] = {{1UL,2UL,2UL,1UL,0x8BL},{0x44L,0UL,0UL,0x44L,2UL},{1UL,2UL,2UL,1UL,0x8BL},{0x44L,0UL,0UL,0x44L,2UL},{1UL,2UL,2UL,1UL,0x8BL}};
        int32_t *l_94 = &g_38;
        uint8_t l_107 = 253UL;
        int32_t l_121[2];
        int32_t ***l_127[4][2] = {{&g_114,(void*)0},{(void*)0,&g_114},{(void*)0,(void*)0},{&g_114,(void*)0}};
        struct S0 l_181[1] = {{4294967295UL}};
        int32_t *l_182[1][6][2];
        int32_t l_202 = 0x64B614F7L;
        int16_t l_205 = 0L;
        int32_t *l_233 = (void*)0;
        int8_t l_281 = 6L;
        union U2 **l_310 = &l_72[1];
        union U2 ***l_309[5];
        int16_t l_320 = 0x5E64L;
        uint32_t l_341 = 4UL;
        uint8_t *l_346[1][1][2];
        uint16_t l_347 = 0x19A0L;
        uint64_t l_365 = 0x6CF543E3075481A6LL;
        uint8_t l_366 = 0xECL;
        const union U1 l_421 = {0xB3F76F24L};
        int32_t l_424 = 0x6E6E3DF9L;
        struct S0 *l_436 = &l_181[0];
        struct S0 l_445 = {1UL};
        int32_t **l_533 = &l_182[0][5][1];
        int16_t l_612[3][7] = {{0x6060L,0xCCA5L,1L,0xCCA5L,0x6060L,0x6060L,0xCCA5L},{0x668EL,0x206DL,0x668EL,0xCCA5L,0xCCA5L,0x668EL,0x206DL},{0xCCA5L,0x206DL,1L,1L,0x206DL,0xCCA5L,0x206DL}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_121[i] = 0L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
            {
                for (k = 0; k < 2; k++)
                    l_182[i][j][k] = &g_78[0];
            }
        }
        for (i = 0; i < 5; i++)
            l_309[i] = &l_310;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 2; k++)
                    l_346[i][j][k] = (void*)0;
            }
        }
        if ((((safe_mod_func_uint32_t_u_u(0xDEC7E1EFL, (-1L))) < 0x37FFL) <= l_81[0][1]))
        { 
            return p_27;
        }
        else
        { 
            int32_t **l_92 = (void*)0;
            int32_t **l_93[6][4][3] = {{{&g_31,&g_31,&g_31},{&g_31,(void*)0,&g_31},{&g_31,&g_31,&g_31},{&g_31,&g_31,&g_31}},{{&g_31,&g_31,(void*)0},{&g_31,&g_31,&g_31},{&g_31,&g_31,&g_31},{&g_31,(void*)0,&g_31}},{{&g_31,&g_31,&g_31},{&g_31,&g_31,&g_31},{&g_31,&g_31,(void*)0},{&g_31,&g_31,&g_31}},{{&g_31,&g_31,&g_31},{&g_31,(void*)0,&g_31},{&g_31,&g_31,&g_31},{&g_31,&g_31,&g_31}},{{&g_31,&g_31,(void*)0},{&g_31,&g_31,&g_31},{&g_31,&g_31,&g_31},{&g_31,(void*)0,&g_31}},{{&g_31,&g_31,&g_31},{&g_31,&g_31,&g_31},{&g_31,&g_31,(void*)0},{&g_31,&g_31,&g_31}}};
            uint32_t l_110 = 4294967295UL;
            int32_t *** const l_126 = &l_113;
            uint64_t l_157 = 0xF2BCAE1E1C95C5D0LL;
            uint16_t l_173 = 6UL;
            uint16_t *l_227 = (void*)0;
            struct S0 l_262 = {0x9D257C1AL};
            union U1 l_274 = {1UL};
            union U2 ***l_291 = (void*)0;
            union U2 ****l_311[1];
            int64_t *l_330 = &g_331;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_311[i] = &l_309[4];
            if ((((p_29 ^ ((l_82 = g_78[0]) <= ((safe_div_func_uint32_t_u_u(l_50, (safe_mul_func_int16_t_s_s((safe_div_func_uint32_t_u_u((~p_27), ((*l_63) = (safe_mul_func_int16_t_s_s(((l_94 = (p_28 = &g_78[0])) != (void*)0), (safe_lshift_func_uint8_t_u_s(p_27, p_30.f0))))))), 5UL)))) ^ l_81[2][0]))) | 4L) > p_30.f0))
            { 
                int32_t l_108 = 0xBDFF1065L;
                int32_t l_109[2];
                int32_t ***l_116 = &l_113;
                uint64_t l_123 = 3UL;
                int i;
                for (i = 0; i < 2; i++)
                    l_109[i] = 0x69BA6CE2L;
                (*p_28) = (p_27 |= (((*p_28) >= ((g_10[0][6][0] , (((*l_63) = (safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_u((((l_93[5][3][2] = &p_28) != &p_28) ^ (((-10L) >= ((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s(0x06L, 2)), (*l_94))) != l_107)) ^ l_50)), l_108)) , 18446744073709551609UL) || l_108), 0xD29FL)), 7))) , l_108)) > 0UL)) <= p_29));
                for (g_40 = 0; (g_40 <= 0); g_40 += 1)
                { 
                    int i;
                    (*l_94) = 1L;
                    if (g_53[(g_40 + 2)])
                        break;
                }
                l_110++;
                (*l_116) = (g_114 = l_113);
                for (g_47.f0 = 0; (g_47.f0 != 48); g_47.f0++)
                { 
                    int8_t l_119 = (-6L);
                    int32_t l_120 = (-10L);
                    int32_t l_122 = 0x652714D0L;
                    l_123++;
                    l_127[3][1] = l_126;
                }
            }
            else
            { 
                int32_t l_139 = 7L;
                for (l_107 = 0; (l_107 <= 44); l_107++)
                { 
                    int16_t *l_134 = &g_68[0];
                    int32_t l_138 = 1L;
                    struct S0 *l_140[5][2][2] = {{{&g_47,&g_47},{&g_47,&g_47}},{{&g_47,&g_47},{&g_47,&g_47}},{{&g_47,&g_47},{&g_47,&g_47}},{{&g_47,&g_47},{&g_47,&g_47}},{{&g_47,&g_47},{&g_47,&g_47}}};
                    int i, j, k;
                    l_121[0] ^= (((safe_mod_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u((((0UL == ((l_134 == (g_135 = (void*)0)) > (*p_28))) > ((g_73[0][3][0].f0 = (l_71.f1 > ((*l_63) |= p_30.f0))) > (safe_mod_func_int8_t_s_s((l_138 || (*l_94)), g_53[4])))) == g_53[4]), (*p_28))) > 65528UL), (*l_94))) && 0UL) , l_139);
                    g_47 = g_46;
                    return g_45[0][4];
                }
                l_139 |= (*l_94);
                for (l_71.f1 = 0; (l_71.f1 >= 54); l_71.f1 = safe_add_func_uint32_t_u_u(l_71.f1, 7))
                { 
                    if (g_45[0][4])
                        break;
                    if ((*l_94))
                        continue;
                }
            }
            if ((&p_28 != (void*)0))
            { 
                uint32_t l_151[4][5] = {{4294967294UL,0xBE310A9CL,0xBE310A9CL,4294967294UL,4294967294UL},{0UL,4294967295UL,0UL,4294967295UL,0UL},{4294967294UL,4294967294UL,0xBE310A9CL,0xBE310A9CL,4294967294UL},{4294967290UL,4294967295UL,4294967290UL,4294967295UL,4294967290UL}};
                int32_t ***l_152 = (void*)0;
                int8_t *l_154 = &l_50;
                int32_t l_155 = 0xB385C65EL;
                int i, j;
                p_27 = (safe_div_func_int8_t_s_s(((l_157 |= (g_156 |= (g_68[0] = (p_29 >= (((safe_mul_func_int8_t_s_s((g_53[1] != (((safe_rshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u(l_151[1][2], (*p_28))), 2)) , (l_155 = (((*l_154) = (((*p_28) = (((void*)0 != l_152) == (g_153 = ((((void*)0 == l_152) != g_53[4]) <= l_82)))) >= p_30.f0)) != l_151[3][3]))) ^ p_29)), 1L)) | p_30.f0) != 18446744073709551609UL))))) && g_78[0]), 0xD6L));
                for (l_71.f2 = 4; (l_71.f2 >= 0); l_71.f2 -= 1)
                { 
                    return l_71.f0;
                }
                for (l_82 = 0; (l_82 > 26); l_82++)
                { 
                    int8_t * const l_170[4][1][1] = {{{&g_171}},{{&g_171}},{{&g_171}},{{&g_171}}};
                    struct S0 *l_172 = &g_47;
                    int i, j, k;
                    (*l_172) = ((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((*l_154) = g_47.f0), g_45[0][4])), ((p_27 > ((safe_lshift_func_int16_t_s_s((((*l_94) = (safe_sub_func_int32_t_s_s((g_78[0] >= p_27), (0xFF555B3299B2AD00LL < (safe_lshift_func_uint8_t_u_s(((((p_30.f0 && (-1L)) , g_47.f0) , l_170[0][0][0]) != (void*)0), g_78[0])))))) <= p_29), 6)) > p_29)) == p_27))) , g_47);
                    (*p_28) |= 0L;
                }
                if (l_173)
                { 
                    int8_t l_174[1][5];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_174[i][j] = (-1L);
                    }
                    g_31 = (p_28 = &l_121[0]);
                    --g_175;
                }
                else
                { 
                    (*p_28) = (safe_unary_minus_func_int32_t_s((*p_28)));
                    p_28 = &l_155;
                    (*l_94) = 0L;
                }
            }
            else
            { 
                uint64_t l_191 = 18446744073709551614UL;
                int32_t l_200 = (-1L);
                int32_t l_204 = (-10L);
                int32_t l_206 = 7L;
                uint32_t l_207 = 0xF04CFCC2L;
                if ((*p_28))
                { 
                    uint32_t l_187 = 4294967294UL;
                    g_179 = &l_126;
                    l_181[0] = p_30;
                    l_182[0][0][1] = &p_27;
                    (*p_28) = (safe_mod_func_int8_t_s_s(g_38, (safe_rshift_func_uint16_t_u_u((g_38 == g_78[1]), p_30.f0))));
                    return l_187;
                }
                else
                { 
                    uint8_t l_188[3][5] = {{5UL,5UL,5UL,5UL,5UL},{0x3FL,0x88L,0x3FL,0x88L,0x3FL},{5UL,5UL,5UL,5UL,5UL}};
                    uint64_t *l_194 = &l_191;
                    union U1 l_197 = {0xDB80F26FL};
                    int32_t *l_199 = &g_40;
                    int32_t l_201 = 0x7FA5D5B2L;
                    int32_t l_203[2][2];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_203[i][j] = 0x77BE777DL;
                    }
                    ++l_188[2][3];
                    l_191++;
                    g_78[1] = (((*l_194) = p_29) , (0x2500355CF6CD2DBELL < (((((safe_rshift_func_uint16_t_u_u((&l_71 != (g_198 = (l_197 , (void*)0))), ((p_27 || (l_191 == (-1L))) <= 0x1EAD67A6L))) , 8UL) , l_199) != p_28) , l_197.f1)));
                    p_28 = &g_78[0];
                    ++l_207;
                }
                for (l_50 = 0; (l_50 <= (-30)); l_50 = safe_sub_func_int32_t_s_s(l_50, 4))
                { 
                    int32_t ****l_218[1][6][1] = {{{&l_127[3][1]},{(void*)0},{&l_127[3][1]},{(void*)0},{&l_127[3][1]},{(void*)0}}};
                    uint16_t *l_219[6];
                    int64_t *l_224 = &l_71.f2;
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_219[i] = (void*)0;
                    (*p_28) = (safe_rshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u((safe_add_func_int64_t_s_s(((*l_224) = ((l_82 = ((g_180 = &l_113) == &g_114)) & ((g_10[0][6][0] , ((p_29++) , (g_156 | ((safe_add_func_int32_t_s_s((*p_28), (l_127[2][0] == (void*)0))) & l_71.f1)))) != 1L))), g_40)), p_27)), 8));
                }
            }
            if ((g_78[1] = (l_230 &= ((-3L) >= (safe_rshift_func_uint16_t_u_s((p_29++), p_27))))))
            { 
                for (l_110 = 0; (l_110 <= 0); l_110 += 1)
                { 
                    return p_30.f0;
                }
            }
            else
            { 
                int32_t l_254 = (-8L);
                struct S0 *l_261[7][1][5] = {{{&l_260[2],(void*)0,(void*)0,&l_260[2],&l_260[1]}},{{(void*)0,(void*)0,&l_181[0],&l_260[1],&l_260[1]}},{{(void*)0,(void*)0,&l_181[0],&l_181[0],&l_181[0]}},{{&l_181[0],&l_181[0],&l_260[1],&l_260[1],&l_181[0]}},{{&l_260[1],&g_47,&l_260[1],&l_260[2],(void*)0}},{{&g_47,&l_260[1],&l_181[0],&l_260[1],&g_47}},{{&l_260[1],&g_47,&l_181[0],&g_47,&l_181[0]}}};
                union U2 **l_267 = &l_72[1];
                union U2 **l_269 = &l_72[1];
                union U2 ***l_268 = &l_269;
                uint64_t l_270[5] = {0xF3924317F4E93B77LL,0xF3924317F4E93B77LL,0xF3924317F4E93B77LL,0xF3924317F4E93B77LL,0xF3924317F4E93B77LL};
                int32_t *l_285 = &l_121[1];
                int i, j, k;
                for (l_71.f0 = 0; (l_71.f0 <= 2); l_71.f0 += 1)
                { 
                    const union U2 *l_232 = (void*)0;
                    const union U2 **l_231 = &l_232;
                    int32_t *l_234 = &g_38;
                    uint16_t *l_253 = &g_73[0][3][0].f1;
                    int32_t l_255 = (-6L);
                    if (p_29)
                        break;
                    (*l_231) = (void*)0;
                    l_234 = l_233;
                    g_31 = &l_121[1];
                    l_255 &= ((safe_mod_func_uint64_t_u_u((((safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s((g_68[0] &= (safe_mod_func_int16_t_s_s((!(~(safe_mod_func_int32_t_s_s(((*g_31) ^= ((((void*)0 == l_247) , (((((0x4DL | ((void*)0 == &g_40)) || p_30.f0) ^ (safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((((*l_253) ^= p_29) != 1L) <= 6L), 15)), 0UL))) , (*g_179)) != (*g_179))) != p_27)), 0x8E1D8DCDL)))), 0x6409L))), p_27)), 0x711FL)) | p_29) , p_27), l_254)) ^ g_53[4]);
                }
                if ((safe_mod_func_uint32_t_u_u((((g_46.f0 && 0UL) , &g_115) != ((((safe_mod_func_int8_t_s_s(((((g_47 = (l_262 = l_260[1])) , (safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((l_260[1].f0 , l_267) != ((*l_268) = &l_72[1])), p_27)), g_46.f0))) & g_68[0]) , l_230), 0xF7L)) > p_29) != l_270[4]) , (*l_126))), p_30.f0)))
                { 
                    int32_t *l_271 = &l_202;
                    int32_t l_282 = (-8L);
                    union U1 *l_284 = (void*)0;
                    union U1 **l_283 = &l_284;
                    l_271 = (void*)0;
                    l_282 = ((((safe_mod_func_uint8_t_u_u(1UL, (p_30 , (l_274 , (safe_mod_func_uint32_t_u_u((0x3D993827F1B1AC4BLL | ((p_29 >= (safe_mul_func_uint16_t_u_u(g_45[0][0], ((safe_lshift_func_uint8_t_u_u(g_153, p_27)) <= l_270[3])))) , l_281)), g_156)))))) || p_30.f0) & p_30.f0) >= p_27);
                    (*l_283) = &g_10[0][3][0];
                    l_285 = &p_27;
                    g_47 = (g_73[0][3][0] , g_46);
                }
                else
                { 
                    int8_t *l_288 = &l_281;
                    int32_t l_304 = 0x1F19CB7CL;
                    int8_t *l_305[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_305[i] = (void*)0;
                    g_38 &= (safe_add_func_int64_t_s_s((0UL < ((*l_288) ^= p_29)), (safe_rshift_func_int16_t_s_s(((((l_291 == g_292) , (safe_add_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(((safe_mod_func_int8_t_s_s((*l_285), g_45[0][4])) , ((l_304 = ((safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(g_78[0], 4294967295UL)), l_304)) > 4294967293UL)) , (*l_285))), (*l_285))) | 0xF14DL), 0UL))) >= p_27) >= 0x4A15L), p_30.f0))));
                }
                l_306 = (void*)0;
            }
            if (((safe_div_func_int16_t_s_s((((l_312[1] = l_309[4]) == &l_310) || (g_73[0][3][0].f1 > ((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(0x997EL, ((p_27 , (0x0BL == 1L)) || 0x78DEL))), 3)) > g_153))), g_53[1])) == l_320))
            { 
                uint16_t *l_323 = &g_45[0][4];
                int32_t ****l_332[2][1][5] = {{{&l_127[3][1],&l_127[3][1],&l_127[3][1],&g_180,&l_127[3][1]}},{{&l_127[3][1],&l_127[3][1],&l_127[3][1],&g_180,&l_127[3][1]}}};
                int i, j, k;
                if ((safe_mul_func_uint16_t_u_u((++(*l_323)), (g_248 || ((safe_sub_func_int64_t_s_s(((*l_247) ^= (safe_div_func_uint8_t_u_u(g_68[0], p_29))), (l_330 == &g_331))) == ((*l_63) = (l_332[0][0][4] != &l_126)))))))
                { 
                    g_31 = &g_78[0];
                    g_31 = &l_121[1];
                }
                else
                { 
                    const struct S0 **l_333 = (void*)0;
                    const struct S0 *l_335[7] = {&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47};
                    const struct S0 **l_334[2];
                    struct S0 *l_337 = (void*)0;
                    struct S0 *l_338 = &l_181[0];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_334[i] = &l_335[2];
                    l_233 = (g_31 = &g_78[1]);
                    g_336 = &p_30;
                    (*l_338) = l_260[1];
                }
                for (g_156 = 0; (g_156 <= 55); g_156 = safe_add_func_int32_t_s_s(g_156, 2))
                { 
                    if ((*g_31))
                        break;
                }
            }
            else
            { 
                uint8_t *l_342[3][7][7] = {{{&l_81[0][2],&l_81[0][1],&l_81[0][1],(void*)0,(void*)0,(void*)0,&l_81[0][1]},{(void*)0,&l_81[1][2],&l_107,(void*)0,&l_81[4][0],&l_81[2][3],(void*)0},{&l_81[0][1],&l_81[0][1],&l_107,(void*)0,(void*)0,(void*)0,&l_81[0][1]},{&l_107,(void*)0,&l_81[1][2],&l_107,&l_81[0][4],&l_81[4][3],(void*)0},{&l_81[0][3],&l_81[0][2],&l_81[0][1],&l_81[0][0],&l_81[0][1],&l_81[1][1],&l_107},{&l_81[0][1],&l_81[0][4],&l_81[0][1],&l_81[0][0],&l_107,(void*)0,(void*)0},{&l_81[3][2],&l_81[1][2],&l_81[1][2],&l_81[1][2],&l_81[1][2],&l_81[3][2],(void*)0}},{{(void*)0,&l_81[4][3],&l_107,&l_81[0][1],(void*)0,&l_81[0][0],(void*)0},{&l_81[1][3],&l_81[0][1],&l_107,&l_81[0][1],&l_107,&l_81[0][1],&l_81[0][0]},{(void*)0,&l_81[4][3],&l_81[0][1],(void*)0,&l_81[0][1],&l_107,(void*)0},{&l_81[1][2],&l_81[1][2],(void*)0,&l_81[1][1],(void*)0,&l_81[0][1],&l_81[0][1]},{(void*)0,&l_81[0][4],&l_107,(void*)0,&l_81[0][1],&l_107,&l_107},{(void*)0,&l_81[0][2],&l_81[0][4],&l_81[1][2],&l_81[4][3],&l_81[0][1],&l_81[4][3]},{&l_81[1][2],(void*)0,(void*)0,&l_81[1][2],(void*)0,&l_81[1][3],(void*)0}},{{(void*)0,&l_81[4][3],(void*)0,(void*)0,&l_107,&l_81[3][2],&l_81[0][1]},{&l_81[0][2],&l_107,&l_107,&l_81[1][1],(void*)0,&l_81[1][2],(void*)0},{(void*)0,&l_81[1][1],&l_81[0][1],&l_81[0][0],&l_107,(void*)0,&l_81[1][2]},{&l_81[0][3],&l_81[0][1],(void*)0,(void*)0,&l_81[0][4],&l_81[1][1],(void*)0},{(void*)0,(void*)0,&l_81[0][1],&l_107,&l_81[1][2],&l_81[1][1],&l_81[4][3]},{&l_81[0][1],&l_107,&l_81[4][3],(void*)0,&l_81[4][1],(void*)0,&l_81[4][3]},{(void*)0,(void*)0,(void*)0,&l_107,(void*)0,&l_81[1][2],&l_107}}};
                int i, j, k;
                for (g_38 = 0; (g_38 <= 0); g_38 += 1)
                { 
                    int i;
                    if (g_78[(g_38 + 1)])
                        break;
                    if (g_53[3])
                        break;
                    g_31 = &p_27;
                    return l_341;
                }
                g_31 = ((g_343[3][3][0] &= 0x04L) , &g_78[0]);
            }
            p_28 = &g_78[0];
        }
        if ((((safe_mod_func_uint8_t_u_u((l_347++), (safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((*p_28), (safe_mod_func_uint16_t_u_u((((((g_171 <= (p_30.f0 || ((safe_mod_func_int8_t_s_s((p_29 >= g_47.f0), (safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((safe_mod_func_uint64_t_u_u((safe_unary_minus_func_int8_t_s((&l_181[0] == &l_260[2]))), (-1L))), g_40)), g_45[0][4])))) , g_78[0]))) , (*p_28)) == 0x44EA4F0AL) >= p_27) ^ g_248), 0x7659L)))), g_40)))) | (*p_28)) & l_365))
        { 
            int32_t l_383 = 0x08090F0AL;
            int32_t l_402 = (-6L);
            union U2 l_411 = {1UL};
            int16_t l_420 = 0x0032L;
            uint64_t *l_425 = (void*)0;
            int32_t l_429 = 0L;
            const int32_t *l_450 = &g_343[3][3][0];
            uint64_t l_494 = 18446744073709551615UL;
            int64_t l_499 = (-3L);
            int32_t l_503 = (-3L);
            int32_t l_504 = 8L;
            int32_t l_505 = 0x9D1BD775L;
            int32_t l_506 = 0x358ADA00L;
            l_366++;
            if ((g_38 ^= ((safe_div_func_int16_t_s_s((((*g_336) , &g_10[0][6][0]) != (void*)0), (safe_mul_func_uint8_t_u_u((g_385 = (safe_mod_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(p_30.f0, (safe_div_func_int64_t_s_s(g_40, (safe_sub_func_int64_t_s_s(l_383, (!((p_29 , 0x46537898L) ^ l_383)))))))), p_30.f0)), (*l_94)))), (*l_94))))) | g_78[0])))
            { 
                uint32_t l_390 = 0xDF438B3DL;
                if ((*p_28))
                { 
                    int64_t l_386 = 0x5759DA75A76652DCLL;
                    --l_387[4][0][0];
                    --l_390;
                    l_181[0] = l_393;
                }
                else
                { 
                    int32_t l_397 = (-1L);
                    int8_t *l_398 = &l_281;
                    int32_t **l_401 = &l_182[0][2][0];
                    (*p_28) = (*p_28);
                    (*p_28) = ((safe_rshift_func_int8_t_s_s(g_396, ((*l_398) = ((p_29 || l_390) > l_397)))) > (safe_rshift_func_uint8_t_u_u(((*l_94) & (((*l_247) = (g_78[1] > (((-8L) >= g_45[0][3]) != p_30.f0))) && 0xC6B21A75E040CA63LL)), 4)));
                    (*l_401) = &p_27;
                    (*l_94) |= (l_383 == 0x9A7CB499L);
                }
            }
            else
            { 
                uint32_t l_403 = 0xEF1A6B96L;
                union U2 *l_406 = (void*)0;
                uint32_t l_427[3][7] = {{0x79D2D7FAL,0x5AC422ADL,0x735146A9L,0xD8EEC57EL,0x735146A9L,0x5AC422ADL,0x79D2D7FAL},{0x79D2D7FAL,0x5AC422ADL,0x735146A9L,0xD8EEC57EL,0x735146A9L,0x5AC422ADL,0x79D2D7FAL},{0x79D2D7FAL,0x5AC422ADL,0x735146A9L,0xD8EEC57EL,0x735146A9L,0x5AC422ADL,0x79D2D7FAL}};
                struct S0 *l_464 = &g_47;
                uint16_t *l_465 = (void*)0;
                uint16_t *l_466 = &g_45[0][4];
                int16_t l_472 = (-4L);
                int32_t l_474 = 0xA52866C1L;
                int32_t l_501 = 1L;
                uint8_t l_511 = 0xCDL;
                int i, j;
                --l_403;
                (*l_313) = l_406;
                l_429 &= ((safe_mod_func_uint64_t_u_u(((((safe_lshift_func_uint8_t_u_s((l_411 , ((l_383 &= ((safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(((((&g_53[4] == (l_420 , ((((l_421 , (g_343[0][2][1] & (safe_div_func_int64_t_s_s((0UL >= g_343[0][5][3]), g_343[3][3][0])))) >= 0x33788863L) || l_424) , l_425))) , p_30.f0) | g_53[4]) | g_171), p_29)) & l_403), g_40)), 248UL)), l_426)) <= l_427[2][3])) && g_78[0])), l_402)) & 0xEC45L) != (-2L)) , p_30.f0), l_428)) != p_29);
                if (((*l_94) = ((safe_sub_func_int8_t_s_s(p_29, (safe_add_func_int16_t_s_s(p_27, p_27)))) , (*g_31))))
                { 
                    struct S0 *l_435 = &l_393;
                    struct S0 **l_434[2][6] = {{&l_435,&l_435,(void*)0,(void*)0,(void*)0,&l_435},{(void*)0,&l_435,(void*)0,(void*)0,&l_435,(void*)0}};
                    int i, j;
                    l_436 = &g_47;
                    (*p_28) ^= ((safe_sub_func_uint64_t_u_u((((*l_436) , (((-1L) != (++(*l_63))) , (void*)0)) == &l_81[0][1]), (((*l_247) ^= l_402) , 0x05D88306CF942CE0LL))) < (safe_rshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(((l_429 , &g_293) != (void*)0), 1UL)), p_30.f0)));
                }
                else
                { 
                    int32_t **l_449 = (void*)0;
                    l_445 = ((*l_436) = (*l_436));
                    (*l_94) &= (safe_sub_func_uint8_t_u_u(8UL, (&p_29 == &g_45[0][4])));
                    p_28 = l_448;
                }
                if (((p_29 , ((*l_466) = (((p_28 == l_450) , ((safe_lshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((~(((*g_31) , (safe_rshift_func_int8_t_s_s(((-1L) == (safe_add_func_int8_t_s_s((safe_add_func_int64_t_s_s(2L, (l_464 != &g_46))), g_68[0]))), 1))) & p_27)) != (*g_31)), p_27)), p_30.f0)) | 0L)) , g_40))) == g_68[0]))
                { 
                    return p_29;
                }
                else
                { 
                    uint16_t l_475 = 4UL;
                    int8_t *l_497 = &g_473;
                    int32_t l_498 = 0xD7B588F8L;
                    int32_t l_500 = 0x66D73C98L;
                    int32_t l_502[6];
                    uint32_t l_507 = 0xC1FAC4F5L;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_502[i] = 0x309DB307L;
                    (*g_31) = ((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_u(((0xB6D5L == 65535UL) , ((l_411 , (g_396 , 0x9ACA42F9841DA2F4LL)) <= (!p_27))), 6)) || ((p_29 <= l_472) , p_29)), 0)) >= p_29);
                    l_475--;
                    l_498 &= (((safe_mul_func_int16_t_s_s((l_474 |= (((safe_div_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s(l_402, p_29)) & (((((*l_497) = ((safe_mul_func_uint8_t_u_u((g_496 = (((safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(g_64, (g_495 |= (&g_336 != ((safe_sub_func_int16_t_s_s((safe_mod_func_int64_t_s_s(((*g_31) <= p_27), (g_10[0][6][0].f0 & l_427[2][3]))), l_494)) , &l_464))))), p_29)) || p_27) < p_29)), g_10[0][6][0].f1)) != p_30.f0)) < p_27) || p_30.f0) != g_385)), l_427[2][3])) , (void*)0) == (void*)0)), p_29)) > 0xABDA3470L) >= (*g_31));
                    --l_507;
                    l_511++;
                }
            }
            l_510 ^= (safe_mod_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(g_68[0], ((*g_31) > g_331))), (safe_mul_func_uint8_t_u_u((l_411 , p_27), (((p_29 , ((g_248 & p_30.f0) || 0UL)) < g_68[0]) < g_78[0]))))) & (*g_31)), (*l_94)));
        }
        else
        { 
            struct S0 **l_522 = &l_436;
            int32_t l_523 = 1L;
            const int8_t *l_530 = &l_281;
            union U2 *l_531 = &g_73[0][3][0];
            union U2 *l_532 = &l_71;
            (*p_28) |= (((void*)0 != l_522) , ((++g_496) & (((safe_rshift_func_int16_t_s_u(0x0FEAL, 7)) >= (safe_lshift_func_uint8_t_u_s(((void*)0 != l_530), (l_531 != (l_532 = (*l_310)))))) != (-10L))));
        }
        (*l_533) = &p_27;
        for (g_153 = 0; (g_153 <= 3); g_153 += 1)
        { 
            uint64_t l_548 = 18446744073709551615UL;
            int32_t l_549 = 0x4015C741L;
            int32_t l_557 = 0x6175EAF6L;
            int32_t l_559 = 0xC3F3ACA3L;
            int32_t l_561[6] = {0xE3FA74FEL,0xE3FA74FEL,0xE3FA74FEL,0xE3FA74FEL,0xE3FA74FEL,0xE3FA74FEL};
            int8_t l_564 = 0xE0L;
            int8_t l_565 = 0x59L;
            int32_t l_566 = 0x8D5B3A11L;
            int64_t l_568 = (-1L);
            int i;
            (*l_436) = l_534;
            for (g_171 = 0; (g_171 <= 3); g_171 += 1)
            { 
                int8_t l_550[6][3] = {{(-1L),0x26L,0x26L},{(-4L),3L,(-4L)},{(-1L),(-1L),0x26L},{0x7EL,3L,0x7EL},{(-1L),0x26L,0x26L},{(-4L),3L,(-4L)}};
                int32_t l_552 = 0x0960AD28L;
                int32_t l_555 = 7L;
                int32_t l_556 = 0L;
                int32_t l_558 = 0x31588D73L;
                int32_t l_563 = (-8L);
                int32_t l_567 = 0L;
                int32_t l_569 = (-9L);
                int32_t l_570 = 0x779E8815L;
                int32_t l_572[3];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_572[i] = (-3L);
                for (l_341 = 0; (l_341 <= 3); l_341 += 1)
                { 
                    uint64_t *l_551 = &l_548;
                    int32_t l_553 = 0x620FA5E4L;
                    int32_t l_554[5] = {7L,7L,7L,7L,7L};
                    int i, j, k;
                    (*g_31) |= (safe_div_func_int64_t_s_s(g_343[g_153][(l_341 + 2)][l_341], (-1L)));
                    p_27 ^= (safe_sub_func_int64_t_s_s(g_473, ((*l_551) = ((((safe_div_func_uint8_t_u_u((l_549 = ((l_541 == ((safe_div_func_int32_t_s_s((safe_sub_func_int64_t_s_s((safe_add_func_uint32_t_u_u(((g_68[0] < ((void*)0 != (*g_179))) <= p_30.f0), g_10[0][6][0].f2)), l_548)), (*g_31))) == p_29)) >= g_343[g_153][(l_341 + 2)][l_341])), l_550[0][2])) >= 0L) > g_38) ^ l_548))));
                    l_573--;
                }
            }
        }
        for (l_510 = (-15); (l_510 <= 17); l_510 = safe_add_func_int32_t_s_s(l_510, 7))
        { 
            const int32_t *l_596 = &l_510;
            int32_t l_599[1][2][5] = {{{(-1L),(-1L),(-5L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L)}}};
            uint16_t l_611 = 65535UL;
            int i, j, k;
            for (l_107 = 0; (l_107 > 46); l_107 = safe_add_func_uint8_t_u_u(l_107, 8))
            { 
                const int32_t *l_594 = &g_38;
                int32_t l_598 = (-2L);
                int32_t l_600 = 0x49306840L;
                int32_t l_601[7][3][4] = {{{0x7C9DF72AL,0xB5F8A5F3L,0x850EA8BEL,(-1L)},{4L,7L,0x14D9A971L,(-9L)},{0x850EA8BEL,0x7C9DF72AL,0xA0DE9C7AL,0xA0DE9C7AL}},{{0x850EA8BEL,0x850EA8BEL,0x14D9A971L,8L},{4L,0xA0DE9C7AL,0x850EA8BEL,7L},{0x7C9DF72AL,0xFB763346L,0x86416DFCL,0x850EA8BEL}},{{(-1L),0xFB763346L,(-1L),7L},{0xFB763346L,0xA0DE9C7AL,0x1A97FFEDL,8L},{8L,0x850EA8BEL,0x7C9DF72AL,0xA0DE9C7AL}},{{(-9L),0x7C9DF72AL,0x7C9DF72AL,(-9L)},{8L,7L,0x1A97FFEDL,(-1L)},{0xFB763346L,0xB5F8A5F3L,(-1L),0x14D9A971L}},{{(-1L),0x14D9A971L,0x86416DFCL,0x14D9A971L},{0x7C9DF72AL,0xB5F8A5F3L,0x850EA8BEL,(-1L)},{4L,7L,0x14D9A971L,(-9L)}},{{0x850EA8BEL,0x7C9DF72AL,0xA0DE9C7AL,0xA0DE9C7AL},{0x850EA8BEL,0x850EA8BEL,0x14D9A971L,8L},{4L,0xA0DE9C7AL,0x850EA8BEL,0xB5F8A5F3L}},{{(-9L),8L,4L,0x14D9A971L},{0xA0DE9C7AL,8L,0xA0DE9C7AL,0xB5F8A5F3L},{8L,0x7C9DF72AL,0x86416DFCL,7L}}};
                int i, j, k;
                for (l_428 = 0; (l_428 <= 1); l_428 += 1)
                { 
                    const int32_t **l_595 = &l_594;
                    (*l_595) = l_594;
                    l_597 = ((*l_595) = l_596);
                    (*l_595) = ((*l_533) = &p_27);
                    return g_73[0][3][0].f1;
                }
                for (g_473 = 0; g_473 < 1; g_473 += 1)
                {
                    for (l_71.f0 = 0; l_71.f0 < 6; l_71.f0 += 1)
                    {
                        for (g_175 = 0; g_175 < 2; g_175 += 1)
                        {
                            l_182[g_473][l_71.f0][g_175] = &l_562[0];
                        }
                    }
                }
                for (l_205 = 1; (l_205 >= 0); l_205 -= 1)
                { 
                    int32_t l_602 = 0xED9D0AFBL;
                    int32_t l_603 = 0L;
                    int32_t l_604 = (-8L);
                    uint32_t l_605 = 0x1F97182AL;
                    uint16_t ***l_610 = &g_608;
                    int i;
                    --l_605;
                }
                if ((*g_31))
                    continue;
            }
            l_611 &= (**l_533);
            return l_612[1][5];
        }
    }
    else
    { 
        int64_t l_617 = 0L;
        int32_t l_621 = 0x85B55EA1L;
        int32_t l_622 = 1L;
        int16_t l_623 = 7L;
        int32_t l_624[3][1][1];
        int16_t l_627[5] = {0xE902L,0xE902L,0xE902L,0xE902L,0xE902L};
        uint64_t l_628 = 6UL;
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_624[i][j][k] = (-1L);
            }
        }
        for (g_64 = 18; (g_64 >= 39); g_64 = safe_add_func_int16_t_s_s(g_64, 8))
        { 
            int32_t *l_615 = &l_562[0];
            int32_t *l_616[4][3] = {{&l_562[0],&l_562[0],(void*)0},{&l_82,(void*)0,(void*)0},{(void*)0,&g_78[0],&g_78[0]},{&l_82,&g_78[0],&l_82}};
            uint64_t l_618[7][2][7] = {{{1UL,1UL,8UL,0xA3450C180EE848DALL,0x8331E36CC3F02AC3LL,8UL,0x8331E36CC3F02AC3LL},{0xA3450C180EE848DALL,0x49AEC3C3FEB69477LL,0x49AEC3C3FEB69477LL,0xA3450C180EE848DALL,1UL,18446744073709551615UL,0xA3450C180EE848DALL}},{{18446744073709551615UL,0x8331E36CC3F02AC3LL,1UL,1UL,0x8331E36CC3F02AC3LL,18446744073709551615UL,0x49AEC3C3FEB69477LL},{0x8331E36CC3F02AC3LL,0xA3450C180EE848DALL,8UL,1UL,1UL,8UL,0xA3450C180EE848DALL}},{{0x8331E36CC3F02AC3LL,0x49AEC3C3FEB69477LL,18446744073709551615UL,0x8331E36CC3F02AC3LL,1UL,1UL,0x8331E36CC3F02AC3LL},{18446744073709551615UL,0xA3450C180EE848DALL,18446744073709551615UL,1UL,0xA3450C180EE848DALL,0x49AEC3C3FEB69477LL,0x49AEC3C3FEB69477LL}},{{0xA3450C180EE848DALL,0x8331E36CC3F02AC3LL,8UL,0x8331E36CC3F02AC3LL,0xA3450C180EE848DALL,8UL,1UL},{1UL,0x49AEC3C3FEB69477LL,1UL,1UL,1UL,0x49AEC3C3FEB69477LL,1UL}},{{18446744073709551615UL,1UL,0x49AEC3C3FEB69477LL,1UL,1UL,1UL,0x49AEC3C3FEB69477LL},{1UL,1UL,8UL,0xA3450C180EE848DALL,0x8331E36CC3F02AC3LL,8UL,0x8331E36CC3F02AC3LL}},{{0xA3450C180EE848DALL,0x49AEC3C3FEB69477LL,0x49AEC3C3FEB69477LL,0xA3450C180EE848DALL,1UL,18446744073709551615UL,0xA3450C180EE848DALL},{18446744073709551615UL,0x8331E36CC3F02AC3LL,1UL,1UL,0x8331E36CC3F02AC3LL,18446744073709551615UL,0x49AEC3C3FEB69477LL}},{{0x8331E36CC3F02AC3LL,0xA3450C180EE848DALL,8UL,1UL,1UL,8UL,0xA3450C180EE848DALL},{0x8331E36CC3F02AC3LL,0x49AEC3C3FEB69477LL,18446744073709551615UL,0x8331E36CC3F02AC3LL,1UL,1UL,0x8331E36CC3F02AC3LL}}};
            int i, j, k;
            ++l_618[4][0][3];
            l_628++;
        }
        return g_10[0][6][0].f2;
    }
    return p_30.f0;
}



static uint16_t  func_32(int32_t  p_33)
{ 
    uint32_t l_43 = 0xBCABEBF3L;
    for (g_40 = (-22); (g_40 >= 22); g_40 = safe_add_func_uint16_t_u_u(g_40, 1))
    { 
        return p_33;
    }
    return l_43;
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
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_10[i][j][k].f0, "g_10[i][j][k].f0", print_hash_value);
                transparent_crc(g_10[i][j][k].f1, "g_10[i][j][k].f1", print_hash_value);
                transparent_crc(g_10[i][j][k].f2, "g_10[i][j][k].f2", print_hash_value);

            }
        }
    }
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_45[i][j], "g_45[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_46.f0, "g_46.f0", print_hash_value);
    transparent_crc(g_47.f0, "g_47.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_53[i], "g_53[i]", print_hash_value);

    }
    transparent_crc(g_64, "g_64", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_68[i], "g_68[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_73[i][j][k].f0, "g_73[i][j][k].f0", print_hash_value);
                transparent_crc(g_73[i][j][k].f1, "g_73[i][j][k].f1", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_78[i], "g_78[i]", print_hash_value);

    }
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_343[i][j][k], "g_343[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_385, "g_385", print_hash_value);
    transparent_crc(g_396, "g_396", print_hash_value);
    transparent_crc(g_473, "g_473", print_hash_value);
    transparent_crc(g_495, "g_495", print_hash_value);
    transparent_crc(g_496, "g_496", print_hash_value);
    transparent_crc(g_632, "g_632", print_hash_value);
    transparent_crc(g_665, "g_665", print_hash_value);
    transparent_crc(g_712, "g_712", print_hash_value);
    transparent_crc(g_872, "g_872", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_941[i][j], "g_941[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1028, "g_1028", print_hash_value);
    transparent_crc(g_1057, "g_1057", print_hash_value);
    transparent_crc(g_1237, "g_1237", print_hash_value);
    transparent_crc(g_1288, "g_1288", print_hash_value);
    transparent_crc(g_1510, "g_1510", print_hash_value);
    transparent_crc(g_1556.f0, "g_1556.f0", print_hash_value);
    transparent_crc(g_1556.f1, "g_1556.f1", print_hash_value);
    transparent_crc(g_1556.f2, "g_1556.f2", print_hash_value);
    transparent_crc(g_1558, "g_1558", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1580[i], "g_1580[i]", print_hash_value);

    }
    transparent_crc(g_1648, "g_1648", print_hash_value);
    transparent_crc(g_1789, "g_1789", print_hash_value);
    transparent_crc(g_1865, "g_1865", print_hash_value);
    transparent_crc(g_2101, "g_2101", print_hash_value);
    transparent_crc(g_2118, "g_2118", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_2260[i], "g_2260[i]", print_hash_value);

    }
    transparent_crc(g_2378, "g_2378", print_hash_value);
    transparent_crc(g_2489, "g_2489", print_hash_value);
    transparent_crc(g_2502, "g_2502", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_2599[i][j][k], "g_2599[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_2934, "g_2934", print_hash_value);
    transparent_crc(g_2937, "g_2937", print_hash_value);
    transparent_crc(g_3254, "g_3254", print_hash_value);
    transparent_crc(g_3269.f0, "g_3269.f0", print_hash_value);
    transparent_crc(g_3269.f1, "g_3269.f1", print_hash_value);
    transparent_crc(g_3269.f2, "g_3269.f2", print_hash_value);
    transparent_crc(g_3314, "g_3314", print_hash_value);
    transparent_crc(g_3327, "g_3327", print_hash_value);
    transparent_crc(g_3333, "g_3333", print_hash_value);
    transparent_crc(g_3576, "g_3576", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_3593[i], "g_3593[i]", print_hash_value);

    }
    transparent_crc(g_3618, "g_3618", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_3733[i], "g_3733[i]", print_hash_value);

    }
    transparent_crc(g_3742.f0, "g_3742.f0", print_hash_value);
    transparent_crc(g_3742.f1, "g_3742.f1", print_hash_value);
    transparent_crc(g_3783, "g_3783", print_hash_value);
    transparent_crc(g_3844.f0, "g_3844.f0", print_hash_value);
    transparent_crc(g_3844.f1, "g_3844.f1", print_hash_value);
    transparent_crc(g_3844.f2, "g_3844.f2", print_hash_value);
    transparent_crc(g_3849, "g_3849", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_3865[i][j][k], "g_3865[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_3905, "g_3905", print_hash_value);
    transparent_crc(g_3947, "g_3947", print_hash_value);
    transparent_crc(g_3977.f0, "g_3977.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_3988[i][j][k], "g_3988[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_4035[i], "g_4035[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_4133[i][j], "g_4133[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_4168[i], "g_4168[i]", print_hash_value);

    }
    transparent_crc(g_4187, "g_4187", print_hash_value);
    transparent_crc(g_4224, "g_4224", print_hash_value);
    transparent_crc(g_4352, "g_4352", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_4438[i], "g_4438[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
